typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon10;
typedef struct sfObj;
typedef struct sgIKHandle;
typedef enum sgLightType : unsigned char;
typedef struct sgBone;
typedef struct _anon11;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct sgAnime;
typedef struct sfFogParams;
typedef struct _anon12;
typedef union _anon13;
typedef struct _anon14;
typedef struct sgSVModel;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;

typedef void(*type_2)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_18)();
typedef void(*type_21)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef void(*type_33)(sgAnime*, int);
typedef void(*type_41)(sfObj*);
typedef void(*type_49)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_3[4];
typedef int type_4[3];
typedef _anon17 type_5[16];
typedef _anon1 type_6[3];
typedef _anon3* type_7[3];
typedef char type_8[100];
typedef int type_9[3];
typedef char type_10[32];
typedef _anon11 type_11[6];
typedef _anon18 type_12[4];
typedef sfObj* type_13[16];
typedef int type_14[1];
typedef float type_15[4][2];
typedef int type_16[1];
typedef unsigned char type_17[4];
typedef float type_19[4];
typedef int type_20[1];
typedef int type_22[1];
typedef sfObj* type_24[16];
typedef int type_25[1];
typedef _anon18 type_26[4];
typedef int type_27[1];
typedef int type_28[81920];
typedef void* type_29[4];
typedef int type_30[81920][2];
typedef short type_32[2];
typedef int type_34[1];
typedef unsigned short type_35[2];
typedef char type_36[4];
typedef unsigned char type_37[4];
typedef float type_38[1];
typedef int type_39[1];
typedef _anon13 type_40[256];
typedef unsigned char type_42[4];
typedef float type_43[4];
typedef short type_44[2];
typedef _anon18 type_45[91];
typedef float type_46[4];
typedef float type_47[6];
typedef float type_48[6];

struct _anon0
{
	_anon6 sqt_anime;
	_anon8* sqt_anime_data;
	_anon12 camera;
	_anon11 light[6];
	sfObj* obj[16];
	sfObj* event_obj;
	int n_light;
	int n_chara;
	_anon3* current_data;
	int frame_data_size;
	int demostep;
	int demo_id;
	float nearz;
	sfFogParams fog_params;
	unsigned char fog_color[4];
	float default_nearz;
	sfFogParams default_fog_params;
	unsigned char default_fog_color[4];
	int default_fog_enable;
	float default_angle;
	_anon4 framecamera;
	int half_demo;
	float current_time;
	float old_time;
	short shadow_density;
	_anon10 offset;
	short offset_flag;
	float another_offset[4];
	short another_offset_flag;
	short light_use_playable_flag;
	short dont_draw_belt_flag;
	short demo_finish_flag;
	short demo_endless_flag;
	short demo_seamless_flag;
	short demo_wont_fadeout_flag;
	short frame_offset;
	short fade_step;
	short skip_check;
	float demo_fade_time;
	short demo_skip_timer;
	short demo_message_alpha;
	float demo_sound_volume;
	short demo_set_page;
	short demo_play_highspeed;
	short demo_without_lighteffect;
	short demo_lighteffect_pow;
	short demo_jack_camera_flag;
	short demo_destruct_flag;
	short demo_cancel_flag;
	float demo_eileen_oppai;
	int disc_current_offset;
	int disc_current_buffer_num;
	int demo_play_flag;
	short demo_loop_next_demo_id;
	short demo_loop_after_first;
	short demo_loop_gap_flag;
	short demo_without_bgm;
	int stop_frame;
	int jump_frame;
	int load_error_count;
	short without_debugfont_flag;
};

struct _anon1
{
	void* data_addr;
	int is_valid;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon3
{
	unsigned short data_id;
	short frame_no;
	int pad[3];
};

struct _anon4
{
	float view_world[4][4];
	float view_angle;
	float focus_depth;
	float focus_range;
	float focus_intensity;
	short focus_type;
	short focus_level;
};

struct _anon5
{
	_anon8* header_buffer;
	_anon3* frames_buffer[3];
	int header_ready;
	int frame_ready[3];
	int read_buffer;
	void* current_ptr;
	int left_data;
	int left_to_read;
	int current_buffer;
};

struct _anon6
{
	_anon17 characters[16];
	_anon1 play_data[3];
	_anon8* play_header;
	int current_data;
	float current_time;
};

struct _anon7
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct _anon8
{
	unsigned short id;
	short version;
	short start_frame;
	short end_frame;
	int n_characters;
	int offset_to_characters;
	int frame_data_size;
	int offset_to_frames;
	float trans_offset[4];
};

struct _anon9
{
	sfCharacter chara;
	int chara_id;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon10
{
	float q[4];
	float t[4];
};

struct sfObj
{
	_anon13 fwork[256];
	_anon13* work;
	void(*func)(sfObj*);
	_anon13* work_pt0;
	_anon13* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon13* sys_work;
	_anon13* scene_work;
	_anon13* event_work;
	_anon13* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
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

struct _anon11
{
	sgBone bone;
	_anon7 sg_light;
	float color[4];
	int kind;
	float params[6];
	int id;
	int light_id;
	int is_shadow_light;
	int is_glow_light;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon15 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sfFogParams
{
	float near;
	float far;
	unsigned char near_pow;
	unsigned char far_pow;
};

struct _anon12
{
	sgBone bone;
	float params[4];
	short params_s[2];
};

union _anon13
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

struct _anon14
{
	short demo_id;
	unsigned char clip;
	unsigned char color_r;
	unsigned char color_g;
	unsigned char color_b;
	unsigned short near;
	unsigned short far;
	unsigned char near_value;
	unsigned char far_value;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon15
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _anon16
{
	short character_id;
	short offset_in_frame;
	short n_keys;
	short offset_to_key_info;
};

struct _anon17
{
	void* target;
	short character_id;
	_anon16* character_header;
};

struct _anon18
{
	short chara_id;
	unsigned int model_id;
	unsigned int tex_id;
	unsigned int svm_id;
};

_anon0 demowork;
_anon18 demo_chara_list[91];
_anon18 demo_eileen_ero[4];
_anon18 demo_cynthia_ero[4];
_GAME_WORK gamew;
void(*sfObjFuncDummy)(sfObj*);
_anon5 data_ctrl;
float sg_matrix_unit[4][4];
void(*EilDrawPost)(sfObj*);
void(*EilDrawPre)(sfObj*);
int read_buffer[81920][2];

_anon0* GetDemoWork();
void SetDemoID(int demo_id);
int GetDemoID();
void DemoPlayFlagSet(int demo_play_flag);
int DemoPlayFlag();
int IsUSBViewersGamemainDemo();
void DemoEscapeFogParam();
void DemoSaveFog(int demo_id);
void DemoSetFog();
void DemoReturnFogParam();
void DemoEscapeClip();
void DemoSaveClip(int demo_id);
void DemoSetClip();
void DemoReturnClip();
void DemoEscapeAngle();
void DemoReturnAngle();
void DemoSetHalfDemo(int flag);
int DemoHalfDemo();
void DemoSetOffsetFlag(int flag);
int DemoGetOffsetFlag();
void DemoSetOffset();
_anon10 DemoGetOffset();
int DemoGetAnotherOffsetFlag();
void DemoGetAnotherOffset(float offset[4]);
void DemoSetLightUsePlayableLight(int flag);
int DemoLightUsePlayableLight();
void DemoSetDontDrawBelt(int flag);
int DemoGetDontDrawBelt();
void DemoSetEndless(int flag);
int DemoGetEndless();
int DemoGetDuringEndless();
void DemoSetSeamless(int flag);
int DemoGetSeamless();
void DemoSetMessageAlphaFromPos(float near, float far, float* target_pos);
void DemoSetMessageAlpha(int alpha);
int DemoGetMessageAlpha();
void DemoSetMessageAlphaDefault();
void DemoSetSoundVolumeFromPos(float near, float far, float* target_pos);
void DemoSetSoundVolume(float vol);
float DemoGetSoundVolume();
void DemoSetMessageAlphaAndVolume(float near, float far, float* target_pos);
void DemoFadeMain();
void DemoMessageFadeMain();
void DemoSoundFadeMain();
int DemoIsAbleToFadeIn();
int DemoIsAbleToFadeOut(float time);
void DemoSetFadeOutTime(float time);
int DemoSkipMain();
void DemoEndSignal();
int DemoGetPageFlag();
void DemoSetPlayHighSpeed(int flag);
int DemoGetPlayHighSpeed();
void DemoSetLightEffectPow(short flag);
int DemoGetLightEffectPow();
int DemoGetDontUseLightEffect();
void DemoSetLoop(short demo_id);
short DemoGetLoop();
void DemoSetLoopGap(int flag);
int DemoGetLoopGap();
void DemoSetJackCamera(int flag);
int DemoGetJackCamera();
void DemoSetJackCameraParam(float matrix[4], float angle);
sfCharacter* DemoGetsfCharacter(int chara_id);
sfObj* DemoGetsfObj(int chara_id);
void DemoEventObjConstruct();
void DemoEventObjDestruct();
sfObj* DemoGetEventOBj();
int WasDemoCanceled();
void DemoStopSound();
void DemoSetWithoutBGM(int flag);
int DemoWithoutBGM();
_anon18 DemoGetCharacterFileInfo(int chara_id);
int DemoGetShadowPow();
int DemoLightIsShadowLight(_anon11* light);
void DemoReset();
void DemoSet(int demo_id);
void DemoInit();
int LoadDemoData(_anon0* demo, int* buffer);
int WaitDemoData();
void DemoCharacterAdd(_anon0* demo);
void DemoCharacterAddHalfDemo(sfCharacter* chara, int chara_id);
int PrePlay(_anon0* demo, _anon5* data_ctrl_);
void PostPlay(_anon5* data_ctrl_, _anon6* sqt_anime);
int PlayDemo();
void DemoCameraUpdate();
void DemoCameraExec(_anon12* sqt_camera);
float DemoCameraViewAngle();
void DemoCameraCurrentFrame(_anon4* camera_parameters);
void DemoLightUpdate();
_anon11* DemoGetLight(int index);
int DemoGetNLight();
void DemoCharacterDelete(sfObj* obj);
void DemoDestruct();
void DemoDestroy();
void DemoSetTime();
float DemoGetCurrentTime();
float DemoGetOldTime();
float DemoGetDemoLength();
int DemoMain();
void DemoDraw();
void DemoDrawAfter();

// 
// Start address: 0x23fee0
_anon0* GetDemoWork()
{
	// Line 294, Address: 0x23fee0, Func Offset: 0
	// Line 295, Address: 0x23fee4, Func Offset: 0x4
	// Func End, Address: 0x23feec, Func Offset: 0xc
}

// 
// Start address: 0x23fef0
void SetDemoID(int demo_id)
{
	_anon0* demo;
	// Line 299, Address: 0x23fef0, Func Offset: 0
	// Line 301, Address: 0x23fef8, Func Offset: 0x8
	// Line 303, Address: 0x23ff00, Func Offset: 0x10
	// Line 304, Address: 0x23ff04, Func Offset: 0x14
	// Func End, Address: 0x23ff10, Func Offset: 0x20
}

// 
// Start address: 0x23ff10
int GetDemoID()
{
	_anon0* demo;
	// Line 308, Address: 0x23ff10, Func Offset: 0
	// Line 310, Address: 0x23ff18, Func Offset: 0x8
	// Line 313, Address: 0x23ff20, Func Offset: 0x10
	// Line 312, Address: 0x23ff24, Func Offset: 0x14
	// Line 313, Address: 0x23ff28, Func Offset: 0x18
	// Func End, Address: 0x23ff30, Func Offset: 0x20
}

// 
// Start address: 0x23ff30
void DemoPlayFlagSet(int demo_play_flag)
{
	_anon0* demo;
	// Line 317, Address: 0x23ff30, Func Offset: 0
	// Line 319, Address: 0x23ff38, Func Offset: 0x8
	// Line 321, Address: 0x23ff40, Func Offset: 0x10
	// Line 322, Address: 0x23ff48, Func Offset: 0x18
	// Line 323, Address: 0x23ff50, Func Offset: 0x20
	// Line 324, Address: 0x23ff58, Func Offset: 0x28
	// Line 325, Address: 0x23ff64, Func Offset: 0x34
	// Line 326, Address: 0x23ff70, Func Offset: 0x40
	// Line 327, Address: 0x23ff7c, Func Offset: 0x4c
	// Line 329, Address: 0x23ff80, Func Offset: 0x50
	// Func End, Address: 0x23ff8c, Func Offset: 0x5c
}

// 
// Start address: 0x23ff90
int DemoPlayFlag()
{
	_anon0* demo;
	// Line 333, Address: 0x23ff90, Func Offset: 0
	// Line 335, Address: 0x23ff98, Func Offset: 0x8
	// Line 336, Address: 0x23ffa0, Func Offset: 0x10
	// Line 337, Address: 0x23ffa4, Func Offset: 0x14
	// Line 336, Address: 0x23ffa8, Func Offset: 0x18
	// Line 337, Address: 0x23ffac, Func Offset: 0x1c
	// Func End, Address: 0x23ffb4, Func Offset: 0x24
}

// 
// Start address: 0x23ffc0
int IsUSBViewersGamemainDemo()
{
	// Line 342, Address: 0x23ffc0, Func Offset: 0
	// Func End, Address: 0x23ffc8, Func Offset: 0x8
}

// 
// Start address: 0x23ffd0
void DemoEscapeFogParam()
{
	_anon0* demo;
	// Line 346, Address: 0x23ffd0, Func Offset: 0
	// Line 348, Address: 0x23ffd8, Func Offset: 0x8
	// Line 350, Address: 0x23ffe4, Func Offset: 0x14
	// Line 351, Address: 0x23ffec, Func Offset: 0x1c
	// Line 352, Address: 0x23fff4, Func Offset: 0x24
	// Line 353, Address: 0x240000, Func Offset: 0x30
	// Func End, Address: 0x240010, Func Offset: 0x40
}

// 
// Start address: 0x240010
void DemoSaveFog(int demo_id)
{
	_anon0* demo;
	_anon14 demo_param;
	// Line 358, Address: 0x240010, Func Offset: 0
	// Line 361, Address: 0x24001c, Func Offset: 0xc
	// Line 363, Address: 0x240028, Func Offset: 0x18
	// Line 364, Address: 0x240030, Func Offset: 0x20
	// Line 365, Address: 0x240038, Func Offset: 0x28
	// Line 366, Address: 0x240040, Func Offset: 0x30
	// Line 367, Address: 0x240048, Func Offset: 0x38
	// Line 368, Address: 0x24007c, Func Offset: 0x6c
	// Line 369, Address: 0x2400b0, Func Offset: 0xa0
	// Line 370, Address: 0x2400b8, Func Offset: 0xa8
	// Line 371, Address: 0x2400c0, Func Offset: 0xb0
	// Func End, Address: 0x2400d0, Func Offset: 0xc0
}

// 
// Start address: 0x2400d0
void DemoSetFog()
{
	_anon0* demo;
	// Line 375, Address: 0x2400d0, Func Offset: 0
	// Line 377, Address: 0x2400d8, Func Offset: 0x8
	// Line 379, Address: 0x2400e4, Func Offset: 0x14
	// Line 380, Address: 0x2400ec, Func Offset: 0x1c
	// Line 381, Address: 0x2400f4, Func Offset: 0x24
	// Line 391, Address: 0x2400fc, Func Offset: 0x2c
	// Line 393, Address: 0x240104, Func Offset: 0x34
	// Func End, Address: 0x240114, Func Offset: 0x44
}

// 
// Start address: 0x240120
void DemoReturnFogParam()
{
	_anon0* demo;
	// Line 397, Address: 0x240120, Func Offset: 0
	// Line 399, Address: 0x240128, Func Offset: 0x8
	// Line 401, Address: 0x240134, Func Offset: 0x14
	// Line 402, Address: 0x24013c, Func Offset: 0x1c
	// Line 403, Address: 0x240144, Func Offset: 0x24
	// Line 405, Address: 0x24014c, Func Offset: 0x2c
	// Line 406, Address: 0x240154, Func Offset: 0x34
	// Func End, Address: 0x240164, Func Offset: 0x44
}

// 
// Start address: 0x240170
void DemoEscapeClip()
{
	_anon0* demo;
	// Line 410, Address: 0x240170, Func Offset: 0
	// Line 412, Address: 0x240178, Func Offset: 0x8
	// Line 414, Address: 0x240180, Func Offset: 0x10
	// Line 415, Address: 0x24018c, Func Offset: 0x1c
	// Func End, Address: 0x24019c, Func Offset: 0x2c
}

// 
// Start address: 0x2401a0
void DemoSaveClip(int demo_id)
{
	_anon0* demo;
	_anon14 demo_param;
	// Line 419, Address: 0x2401a0, Func Offset: 0
	// Line 422, Address: 0x2401ac, Func Offset: 0xc
	// Line 424, Address: 0x2401b8, Func Offset: 0x18
	// Line 425, Address: 0x2401c0, Func Offset: 0x20
	// Line 426, Address: 0x2401f4, Func Offset: 0x54
	// Func End, Address: 0x240204, Func Offset: 0x64
}

// 
// Start address: 0x240210
void DemoSetClip()
{
	_anon0* demo;
	// Line 430, Address: 0x240210, Func Offset: 0
	// Line 432, Address: 0x240218, Func Offset: 0x8
	// Line 434, Address: 0x240220, Func Offset: 0x10
	// Line 435, Address: 0x240228, Func Offset: 0x18
	// Func End, Address: 0x240234, Func Offset: 0x24
}

// 
// Start address: 0x240240
void DemoReturnClip()
{
	_anon0* demo;
	// Line 439, Address: 0x240240, Func Offset: 0
	// Line 441, Address: 0x240248, Func Offset: 0x8
	// Line 443, Address: 0x240250, Func Offset: 0x10
	// Line 444, Address: 0x240258, Func Offset: 0x18
	// Func End, Address: 0x240264, Func Offset: 0x24
}

// 
// Start address: 0x240270
void DemoEscapeAngle()
{
	_anon0* demo;
	// Line 448, Address: 0x240270, Func Offset: 0
	// Line 449, Address: 0x240278, Func Offset: 0x8
	// Line 451, Address: 0x240280, Func Offset: 0x10
	// Line 452, Address: 0x24028c, Func Offset: 0x1c
	// Func End, Address: 0x24029c, Func Offset: 0x2c
}

// 
// Start address: 0x2402a0
void DemoReturnAngle()
{
	_anon0* demo;
	// Line 456, Address: 0x2402a0, Func Offset: 0
	// Line 457, Address: 0x2402a8, Func Offset: 0x8
	// Line 459, Address: 0x2402b0, Func Offset: 0x10
	// Line 460, Address: 0x2402b8, Func Offset: 0x18
	// Func End, Address: 0x2402c4, Func Offset: 0x24
}

// 
// Start address: 0x2402d0
void DemoSetHalfDemo(int flag)
{
	_anon0* demo;
	// Line 465, Address: 0x2402d0, Func Offset: 0
	// Line 466, Address: 0x2402d8, Func Offset: 0x8
	// Line 467, Address: 0x2402e0, Func Offset: 0x10
	// Line 468, Address: 0x2402e4, Func Offset: 0x14
	// Func End, Address: 0x2402f0, Func Offset: 0x20
}

// 
// Start address: 0x2402f0
int DemoHalfDemo()
{
	_anon0* demo;
	// Line 472, Address: 0x2402f0, Func Offset: 0
	// Line 473, Address: 0x2402f8, Func Offset: 0x8
	// Line 475, Address: 0x240300, Func Offset: 0x10
	// Line 474, Address: 0x240304, Func Offset: 0x14
	// Line 475, Address: 0x240308, Func Offset: 0x18
	// Func End, Address: 0x240310, Func Offset: 0x20
}

// 
// Start address: 0x240310
void DemoSetOffsetFlag(int flag)
{
	_anon0* demo;
	// Line 494, Address: 0x240310, Func Offset: 0
	// Line 495, Address: 0x240318, Func Offset: 0x8
	// Line 496, Address: 0x240320, Func Offset: 0x10
	// Line 497, Address: 0x240324, Func Offset: 0x14
	// Func End, Address: 0x240330, Func Offset: 0x20
}

// 
// Start address: 0x240330
int DemoGetOffsetFlag()
{
	_anon0* demo;
	// Line 501, Address: 0x240330, Func Offset: 0
	// Line 502, Address: 0x240338, Func Offset: 0x8
	// Line 504, Address: 0x240340, Func Offset: 0x10
	// Line 503, Address: 0x240344, Func Offset: 0x14
	// Line 504, Address: 0x240348, Func Offset: 0x18
	// Func End, Address: 0x240350, Func Offset: 0x20
}

// 
// Start address: 0x240350
void DemoSetOffset()
{
	_anon10 offset;
	_anon0* demo;
	// Line 508, Address: 0x240350, Func Offset: 0
	// Line 509, Address: 0x240368, Func Offset: 0x18
	// Line 510, Address: 0x240370, Func Offset: 0x20
	// Line 511, Address: 0x24037c, Func Offset: 0x2c
	// Func End, Address: 0x240388, Func Offset: 0x38
}

// 
// Start address: 0x240390
_anon10 DemoGetOffset()
{
	_anon0* demo;
	// Line 515, Address: 0x240390, Func Offset: 0
	// Line 516, Address: 0x240398, Func Offset: 0x8
	// Line 517, Address: 0x2403a0, Func Offset: 0x10
	// Line 518, Address: 0x2403b0, Func Offset: 0x20
	// Func End, Address: 0x2403bc, Func Offset: 0x2c
}

// 
// Start address: 0x2403c0
int DemoGetAnotherOffsetFlag()
{
	_anon0* demo;
	// Line 529, Address: 0x2403c0, Func Offset: 0
	// Line 530, Address: 0x2403c8, Func Offset: 0x8
	// Line 532, Address: 0x2403d0, Func Offset: 0x10
	// Line 531, Address: 0x2403d4, Func Offset: 0x14
	// Line 532, Address: 0x2403d8, Func Offset: 0x18
	// Func End, Address: 0x2403e0, Func Offset: 0x20
}

// 
// Start address: 0x2403e0
void DemoGetAnotherOffset(float offset[4])
{
	_anon0* demo;
	// Line 543, Address: 0x2403e0, Func Offset: 0
	// Line 544, Address: 0x2403e8, Func Offset: 0x8
	// Line 545, Address: 0x2403f0, Func Offset: 0x10
	// Line 546, Address: 0x2403fc, Func Offset: 0x1c
	// Func End, Address: 0x240408, Func Offset: 0x28
}

// 
// Start address: 0x240410
void DemoSetLightUsePlayableLight(int flag)
{
	_anon0* demo;
	// Line 552, Address: 0x240410, Func Offset: 0
	// Line 553, Address: 0x240418, Func Offset: 0x8
	// Line 554, Address: 0x240420, Func Offset: 0x10
	// Line 555, Address: 0x240424, Func Offset: 0x14
	// Func End, Address: 0x240430, Func Offset: 0x20
}

// 
// Start address: 0x240430
int DemoLightUsePlayableLight()
{
	_anon0* demo;
	// Line 560, Address: 0x240430, Func Offset: 0
	// Line 561, Address: 0x240438, Func Offset: 0x8
	// Line 563, Address: 0x240440, Func Offset: 0x10
	// Line 562, Address: 0x240444, Func Offset: 0x14
	// Line 563, Address: 0x240448, Func Offset: 0x18
	// Func End, Address: 0x240450, Func Offset: 0x20
}

// 
// Start address: 0x240450
void DemoSetDontDrawBelt(int flag)
{
	_anon0* demo;
	// Line 568, Address: 0x240450, Func Offset: 0
	// Line 569, Address: 0x240458, Func Offset: 0x8
	// Line 570, Address: 0x240460, Func Offset: 0x10
	// Line 571, Address: 0x240464, Func Offset: 0x14
	// Func End, Address: 0x240470, Func Offset: 0x20
}

// 
// Start address: 0x240470
int DemoGetDontDrawBelt()
{
	_anon0* demo;
	// Line 576, Address: 0x240470, Func Offset: 0
	// Line 577, Address: 0x240478, Func Offset: 0x8
	// Line 579, Address: 0x240480, Func Offset: 0x10
	// Line 578, Address: 0x240484, Func Offset: 0x14
	// Line 579, Address: 0x240488, Func Offset: 0x18
	// Func End, Address: 0x240490, Func Offset: 0x20
}

// 
// Start address: 0x240490
void DemoSetEndless(int flag)
{
	_anon0* demo;
	// Line 583, Address: 0x240490, Func Offset: 0
	// Line 584, Address: 0x240498, Func Offset: 0x8
	// Line 585, Address: 0x2404a0, Func Offset: 0x10
	// Line 586, Address: 0x2404a4, Func Offset: 0x14
	// Func End, Address: 0x2404b0, Func Offset: 0x20
}

// 
// Start address: 0x2404b0
int DemoGetEndless()
{
	_anon0* demo;
	// Line 590, Address: 0x2404b0, Func Offset: 0
	// Line 591, Address: 0x2404b8, Func Offset: 0x8
	// Line 593, Address: 0x2404c0, Func Offset: 0x10
	// Line 592, Address: 0x2404c4, Func Offset: 0x14
	// Line 593, Address: 0x2404c8, Func Offset: 0x18
	// Func End, Address: 0x2404d0, Func Offset: 0x20
}

// 
// Start address: 0x2404d0
int DemoGetDuringEndless()
{
	_anon0* demo;
	// Line 597, Address: 0x2404d0, Func Offset: 0
	// Line 598, Address: 0x2404d8, Func Offset: 0x8
	// Line 600, Address: 0x2404e0, Func Offset: 0x10
	// Line 599, Address: 0x2404e4, Func Offset: 0x14
	// Line 600, Address: 0x2404e8, Func Offset: 0x18
	// Func End, Address: 0x2404f0, Func Offset: 0x20
}

// 
// Start address: 0x2404f0
void DemoSetSeamless(int flag)
{
	_anon0* demo;
	// Line 604, Address: 0x2404f0, Func Offset: 0
	// Line 605, Address: 0x2404f8, Func Offset: 0x8
	// Line 606, Address: 0x240500, Func Offset: 0x10
	// Line 613, Address: 0x240504, Func Offset: 0x14
	// Func End, Address: 0x240510, Func Offset: 0x20
}

// 
// Start address: 0x240510
int DemoGetSeamless()
{
	_anon0* demo;
	// Line 617, Address: 0x240510, Func Offset: 0
	// Line 618, Address: 0x240518, Func Offset: 0x8
	// Line 620, Address: 0x240520, Func Offset: 0x10
	// Line 619, Address: 0x240524, Func Offset: 0x14
	// Line 620, Address: 0x240528, Func Offset: 0x18
	// Func End, Address: 0x240530, Func Offset: 0x20
}

// 
// Start address: 0x240530
void DemoSetMessageAlphaFromPos(float near, float far, float* target_pos)
{
	float pos[4];
	float base_pos[4];
	float length;
	_anon0* demo;
	float late;
	float temp;
	// Line 627, Address: 0x240530, Func Offset: 0
	// Line 631, Address: 0x240550, Func Offset: 0x20
	// Line 636, Address: 0x240558, Func Offset: 0x28
	// Line 638, Address: 0x24056c, Func Offset: 0x3c
	// Line 639, Address: 0x240588, Func Offset: 0x58
	// Line 640, Address: 0x240590, Func Offset: 0x60
	// Line 639, Address: 0x240594, Func Offset: 0x64
	// Line 640, Address: 0x2405a0, Func Offset: 0x70
	// Line 642, Address: 0x2405c8, Func Offset: 0x98
	// Line 643, Address: 0x2405d4, Func Offset: 0xa4
	// Line 644, Address: 0x2405d8, Func Offset: 0xa8
	// Line 646, Address: 0x2405ec, Func Offset: 0xbc
	// Line 649, Address: 0x2405f8, Func Offset: 0xc8
	// Line 648, Address: 0x2405fc, Func Offset: 0xcc
	// Line 649, Address: 0x240600, Func Offset: 0xd0
	// Line 650, Address: 0x240610, Func Offset: 0xe0
	// Line 651, Address: 0x240618, Func Offset: 0xe8
	// Line 653, Address: 0x240628, Func Offset: 0xf8
	// Func End, Address: 0x240644, Func Offset: 0x114
}

// 
// Start address: 0x240650
void DemoSetMessageAlpha(int alpha)
{
	_anon0* demo;
	// Line 657, Address: 0x240650, Func Offset: 0
	// Line 658, Address: 0x240658, Func Offset: 0x8
	// Line 659, Address: 0x240660, Func Offset: 0x10
	// Line 660, Address: 0x240664, Func Offset: 0x14
	// Func End, Address: 0x240670, Func Offset: 0x20
}

// 
// Start address: 0x240670
int DemoGetMessageAlpha()
{
	_anon0* demo;
	// Line 664, Address: 0x240670, Func Offset: 0
	// Line 665, Address: 0x240678, Func Offset: 0x8
	// Line 667, Address: 0x240680, Func Offset: 0x10
	// Line 666, Address: 0x240684, Func Offset: 0x14
	// Line 667, Address: 0x240688, Func Offset: 0x18
	// Func End, Address: 0x240690, Func Offset: 0x20
}

// 
// Start address: 0x240690
void DemoSetMessageAlphaDefault()
{
	// Line 672, Address: 0x240690, Func Offset: 0
	// Func End, Address: 0x240698, Func Offset: 0x8
}

// 
// Start address: 0x2406a0
void DemoSetSoundVolumeFromPos(float near, float far, float* target_pos)
{
	float pos[4];
	float base_pos[4];
	float length;
	_anon0* demo;
	float late;
	float temp;
	// Line 680, Address: 0x2406a0, Func Offset: 0
	// Line 684, Address: 0x2406a8, Func Offset: 0x8
	// Line 687, Address: 0x2406b4, Func Offset: 0x14
	// Line 691, Address: 0x2406bc, Func Offset: 0x1c
	// Line 687, Address: 0x2406c0, Func Offset: 0x20
	// Line 691, Address: 0x2406e4, Func Offset: 0x44
	// Line 692, Address: 0x2406f8, Func Offset: 0x58
	// Line 693, Address: 0x240700, Func Offset: 0x60
	// Line 692, Address: 0x240704, Func Offset: 0x64
	// Line 693, Address: 0x240710, Func Offset: 0x70
	// Line 695, Address: 0x240738, Func Offset: 0x98
	// Line 696, Address: 0x240744, Func Offset: 0xa4
	// Line 697, Address: 0x240748, Func Offset: 0xa8
	// Line 699, Address: 0x24075c, Func Offset: 0xbc
	// Line 703, Address: 0x240768, Func Offset: 0xc8
	// Line 701, Address: 0x24076c, Func Offset: 0xcc
	// Line 702, Address: 0x240770, Func Offset: 0xd0
	// Line 703, Address: 0x240774, Func Offset: 0xd4
	// Line 704, Address: 0x240784, Func Offset: 0xe4
	// Line 706, Address: 0x240788, Func Offset: 0xe8
	// Func End, Address: 0x240794, Func Offset: 0xf4
}

// 
// Start address: 0x2407a0
void DemoSetSoundVolume(float vol)
{
	_anon0* demo;
	// Line 710, Address: 0x2407a0, Func Offset: 0
	// Line 711, Address: 0x2407a8, Func Offset: 0x8
	// Line 712, Address: 0x2407b0, Func Offset: 0x10
	// Line 713, Address: 0x2407b4, Func Offset: 0x14
	// Func End, Address: 0x2407c0, Func Offset: 0x20
}

// 
// Start address: 0x2407c0
float DemoGetSoundVolume()
{
	_anon0* demo;
	// Line 717, Address: 0x2407c0, Func Offset: 0
	// Line 718, Address: 0x2407c8, Func Offset: 0x8
	// Line 720, Address: 0x2407d0, Func Offset: 0x10
	// Line 719, Address: 0x2407d4, Func Offset: 0x14
	// Line 720, Address: 0x2407d8, Func Offset: 0x18
	// Func End, Address: 0x2407e0, Func Offset: 0x20
}

// 
// Start address: 0x2407e0
void DemoSetMessageAlphaAndVolume(float near, float far, float* target_pos)
{
	// Line 725, Address: 0x2407e0, Func Offset: 0
	// Line 726, Address: 0x2407fc, Func Offset: 0x1c
	// Line 727, Address: 0x240804, Func Offset: 0x24
	// Line 728, Address: 0x240814, Func Offset: 0x34
	// Func End, Address: 0x24082c, Func Offset: 0x4c
}

// 
// Start address: 0x240830
void DemoFadeMain()
{
	_anon0* demo;
	// Line 746, Address: 0x240830, Func Offset: 0
	// Line 747, Address: 0x240838, Func Offset: 0x8
	// Line 748, Address: 0x240840, Func Offset: 0x10
	// Line 749, Address: 0x240850, Func Offset: 0x20
	// Line 752, Address: 0x240870, Func Offset: 0x40
	// Line 755, Address: 0x24087c, Func Offset: 0x4c
	// Line 756, Address: 0x240880, Func Offset: 0x50
	// Func End, Address: 0x240890, Func Offset: 0x60
}

// 
// Start address: 0x240890
void DemoMessageFadeMain()
{
	_anon0* demo;
	int alpha;
	// Line 760, Address: 0x240890, Func Offset: 0
	// Line 761, Address: 0x240898, Func Offset: 0x8
	// Line 764, Address: 0x2408a0, Func Offset: 0x10
	// Line 765, Address: 0x2408ac, Func Offset: 0x1c
	// Line 767, Address: 0x2408f8, Func Offset: 0x68
	// Line 768, Address: 0x240904, Func Offset: 0x74
	// Line 769, Address: 0x24090c, Func Offset: 0x7c
	// Line 770, Address: 0x240910, Func Offset: 0x80
	// Func End, Address: 0x240920, Func Offset: 0x90
}

// 
// Start address: 0x240920
void DemoSoundFadeMain()
{
	int time;
	// Line 774, Address: 0x240920, Func Offset: 0
	// Line 775, Address: 0x240928, Func Offset: 0x8
	// Line 776, Address: 0x240938, Func Offset: 0x18
	// Line 777, Address: 0x240948, Func Offset: 0x28
	// Line 778, Address: 0x240958, Func Offset: 0x38
	// Line 780, Address: 0x240968, Func Offset: 0x48
	// Line 781, Address: 0x240990, Func Offset: 0x70
	// Line 782, Address: 0x2409a0, Func Offset: 0x80
	// Line 788, Address: 0x2409a8, Func Offset: 0x88
	// Func End, Address: 0x2409b4, Func Offset: 0x94
}

// 
// Start address: 0x2409c0
int DemoIsAbleToFadeIn()
{
	_anon0* demo;
	// Line 792, Address: 0x2409c0, Func Offset: 0
	// Line 793, Address: 0x2409c8, Func Offset: 0x8
	// Line 794, Address: 0x2409d0, Func Offset: 0x10
	// Line 795, Address: 0x2409e0, Func Offset: 0x20
	// Line 796, Address: 0x2409f0, Func Offset: 0x30
	// Line 799, Address: 0x2409f8, Func Offset: 0x38
	// Line 800, Address: 0x240a00, Func Offset: 0x40
	// Func End, Address: 0x240a10, Func Offset: 0x50
}

// 
// Start address: 0x240a10
int DemoIsAbleToFadeOut(float time)
{
	_anon0* demo;
	// Line 805, Address: 0x240a10, Func Offset: 0
	// Line 806, Address: 0x240a20, Func Offset: 0x10
	// Line 807, Address: 0x240a28, Func Offset: 0x18
	// Line 808, Address: 0x240a38, Func Offset: 0x28
	// Line 809, Address: 0x240a5c, Func Offset: 0x4c
	// Line 811, Address: 0x240a74, Func Offset: 0x64
	// Line 812, Address: 0x240aa8, Func Offset: 0x98
	// Line 814, Address: 0x240ab0, Func Offset: 0xa0
	// Line 815, Address: 0x240ab8, Func Offset: 0xa8
	// Line 817, Address: 0x240ad4, Func Offset: 0xc4
	// Line 820, Address: 0x240ae0, Func Offset: 0xd0
	// Line 821, Address: 0x240ae8, Func Offset: 0xd8
	// Func End, Address: 0x240afc, Func Offset: 0xec
}

// 
// Start address: 0x240b00
void DemoSetFadeOutTime(float time)
{
	_anon0* demo;
	// Line 825, Address: 0x240b00, Func Offset: 0
	// Line 826, Address: 0x240b08, Func Offset: 0x8
	// Line 827, Address: 0x240b10, Func Offset: 0x10
	// Line 828, Address: 0x240b14, Func Offset: 0x14
	// Func End, Address: 0x240b20, Func Offset: 0x20
}

// 
// Start address: 0x240b20
int DemoSkipMain()
{
	_anon0* demo;
	// Line 831, Address: 0x240b20, Func Offset: 0
	// Line 832, Address: 0x240b28, Func Offset: 0x8
	// Line 836, Address: 0x240b34, Func Offset: 0x14
	// Line 838, Address: 0x240b50, Func Offset: 0x30
	// Line 839, Address: 0x240b60, Func Offset: 0x40
	// Line 843, Address: 0x240b80, Func Offset: 0x60
	// Line 845, Address: 0x240b98, Func Offset: 0x78
	// Line 846, Address: 0x240ba8, Func Offset: 0x88
	// Line 850, Address: 0x240bb0, Func Offset: 0x90
	// Line 851, Address: 0x240bc0, Func Offset: 0xa0
	// Line 852, Address: 0x240be0, Func Offset: 0xc0
	// Line 855, Address: 0x240be8, Func Offset: 0xc8
	// Line 856, Address: 0x240bfc, Func Offset: 0xdc
	// Line 857, Address: 0x240c04, Func Offset: 0xe4
	// Line 861, Address: 0x240c08, Func Offset: 0xe8
	// Line 871, Address: 0x240c40, Func Offset: 0x120
	// Func End, Address: 0x240c50, Func Offset: 0x130
}

// 
// Start address: 0x240c50
void DemoEndSignal()
{
	_anon0* demo;
	// Line 876, Address: 0x240c50, Func Offset: 0
	// Line 877, Address: 0x240c58, Func Offset: 0x8
	// Line 878, Address: 0x240c60, Func Offset: 0x10
	// Line 879, Address: 0x240c68, Func Offset: 0x18
	// Func End, Address: 0x240c74, Func Offset: 0x24
}

// 
// Start address: 0x240c80
int DemoGetPageFlag()
{
	_anon0* demo;
	// Line 882, Address: 0x240c80, Func Offset: 0
	// Line 883, Address: 0x240c88, Func Offset: 0x8
	// Line 884, Address: 0x240c90, Func Offset: 0x10
	// Line 885, Address: 0x240ca0, Func Offset: 0x20
	// Line 888, Address: 0x240ca8, Func Offset: 0x28
	// Line 893, Address: 0x240cc8, Func Offset: 0x48
	// Func End, Address: 0x240cd8, Func Offset: 0x58
}

// 
// Start address: 0x240ce0
void DemoSetPlayHighSpeed(int flag)
{
	_anon0* demo;
	// Line 897, Address: 0x240ce0, Func Offset: 0
	// Line 898, Address: 0x240ce8, Func Offset: 0x8
	// Line 899, Address: 0x240cf0, Func Offset: 0x10
	// Line 900, Address: 0x240cf4, Func Offset: 0x14
	// Func End, Address: 0x240d00, Func Offset: 0x20
}

// 
// Start address: 0x240d00
int DemoGetPlayHighSpeed()
{
	_anon0* demo;
	// Line 904, Address: 0x240d00, Func Offset: 0
	// Line 905, Address: 0x240d08, Func Offset: 0x8
	// Line 907, Address: 0x240d10, Func Offset: 0x10
	// Line 906, Address: 0x240d14, Func Offset: 0x14
	// Line 907, Address: 0x240d18, Func Offset: 0x18
	// Func End, Address: 0x240d20, Func Offset: 0x20
}

// 
// Start address: 0x240d20
void DemoSetLightEffectPow(short flag)
{
	_anon0* demo;
	// Line 911, Address: 0x240d20, Func Offset: 0
	// Line 912, Address: 0x240d28, Func Offset: 0x8
	// Line 913, Address: 0x240d30, Func Offset: 0x10
	// Line 915, Address: 0x240d38, Func Offset: 0x18
	// Line 916, Address: 0x240d40, Func Offset: 0x20
	// Line 918, Address: 0x240d48, Func Offset: 0x28
	// Func End, Address: 0x240d54, Func Offset: 0x34
}

// 
// Start address: 0x240d60
int DemoGetLightEffectPow()
{
	_anon0* demo;
	// Line 922, Address: 0x240d60, Func Offset: 0
	// Line 923, Address: 0x240d68, Func Offset: 0x8
	// Line 925, Address: 0x240d74, Func Offset: 0x14
	// Line 928, Address: 0x240d8c, Func Offset: 0x2c
	// Func End, Address: 0x240d98, Func Offset: 0x38
}

// 
// Start address: 0x240da0
int DemoGetDontUseLightEffect()
{
	_anon0* demo;
	// Line 932, Address: 0x240da0, Func Offset: 0
	// Line 933, Address: 0x240da8, Func Offset: 0x8
	// Line 935, Address: 0x240db0, Func Offset: 0x10
	// Line 934, Address: 0x240db4, Func Offset: 0x14
	// Line 935, Address: 0x240db8, Func Offset: 0x18
	// Func End, Address: 0x240dc0, Func Offset: 0x20
}

// 
// Start address: 0x240dc0
void DemoSetLoop(short demo_id)
{
	_anon0* demo;
	// Line 940, Address: 0x240dc0, Func Offset: 0
	// Line 941, Address: 0x240dc8, Func Offset: 0x8
	// Line 942, Address: 0x240dd0, Func Offset: 0x10
	// Line 943, Address: 0x240dd4, Func Offset: 0x14
	// Func End, Address: 0x240de0, Func Offset: 0x20
}

// 
// Start address: 0x240de0
short DemoGetLoop()
{
	_anon0* demo;
	// Line 947, Address: 0x240de0, Func Offset: 0
	// Line 948, Address: 0x240de8, Func Offset: 0x8
	// Line 950, Address: 0x240df0, Func Offset: 0x10
	// Line 949, Address: 0x240df4, Func Offset: 0x14
	// Line 950, Address: 0x240df8, Func Offset: 0x18
	// Func End, Address: 0x240e00, Func Offset: 0x20
}

// 
// Start address: 0x240e00
void DemoSetLoopGap(int flag)
{
	_anon0* demo;
	// Line 954, Address: 0x240e00, Func Offset: 0
	// Line 955, Address: 0x240e08, Func Offset: 0x8
	// Line 956, Address: 0x240e10, Func Offset: 0x10
	// Line 957, Address: 0x240e14, Func Offset: 0x14
	// Func End, Address: 0x240e20, Func Offset: 0x20
}

// 
// Start address: 0x240e20
int DemoGetLoopGap()
{
	_anon0* demo;
	// Line 961, Address: 0x240e20, Func Offset: 0
	// Line 962, Address: 0x240e28, Func Offset: 0x8
	// Line 964, Address: 0x240e30, Func Offset: 0x10
	// Line 963, Address: 0x240e34, Func Offset: 0x14
	// Line 964, Address: 0x240e38, Func Offset: 0x18
	// Func End, Address: 0x240e40, Func Offset: 0x20
}

// 
// Start address: 0x240e40
void DemoSetJackCamera(int flag)
{
	_anon0* demo;
	// Line 968, Address: 0x240e40, Func Offset: 0
	// Line 969, Address: 0x240e48, Func Offset: 0x8
	// Line 970, Address: 0x240e50, Func Offset: 0x10
	// Line 971, Address: 0x240e54, Func Offset: 0x14
	// Func End, Address: 0x240e60, Func Offset: 0x20
}

// 
// Start address: 0x240e60
int DemoGetJackCamera()
{
	_anon0* demo;
	// Line 975, Address: 0x240e60, Func Offset: 0
	// Line 976, Address: 0x240e68, Func Offset: 0x8
	// Line 978, Address: 0x240e70, Func Offset: 0x10
	// Line 977, Address: 0x240e74, Func Offset: 0x14
	// Line 978, Address: 0x240e78, Func Offset: 0x18
	// Func End, Address: 0x240e80, Func Offset: 0x20
}

// 
// Start address: 0x240e80
void DemoSetJackCameraParam(float matrix[4], float angle)
{
	_anon0* demo;
	// Line 982, Address: 0x240e80, Func Offset: 0
	// Line 983, Address: 0x240e94, Func Offset: 0x14
	// Line 984, Address: 0x240ea0, Func Offset: 0x20
	// Line 985, Address: 0x240eac, Func Offset: 0x2c
	// Line 986, Address: 0x240eb0, Func Offset: 0x30
	// Func End, Address: 0x240ec4, Func Offset: 0x44
}

// 
// Start address: 0x240ed0
sfCharacter* DemoGetsfCharacter(int chara_id)
{
	_anon0* demo;
	int i;
	_anon9* democharacter;
	// Line 994, Address: 0x240ed0, Func Offset: 0
	// Line 995, Address: 0x240ed8, Func Offset: 0x8
	// Line 997, Address: 0x240ee0, Func Offset: 0x10
	// Line 999, Address: 0x240ef0, Func Offset: 0x20
	// Line 1000, Address: 0x240efc, Func Offset: 0x2c
	// Line 1001, Address: 0x240f08, Func Offset: 0x38
	// Line 1003, Address: 0x240f10, Func Offset: 0x40
	// Line 1004, Address: 0x240f20, Func Offset: 0x50
	// Line 1005, Address: 0x240f28, Func Offset: 0x58
	// Func End, Address: 0x240f34, Func Offset: 0x64
}

// 
// Start address: 0x240f40
sfObj* DemoGetsfObj(int chara_id)
{
	_anon0* demo;
	int i;
	// Line 1013, Address: 0x240f40, Func Offset: 0
	// Line 1014, Address: 0x240f48, Func Offset: 0x8
	// Line 1016, Address: 0x240f50, Func Offset: 0x10
	// Line 1019, Address: 0x240f68, Func Offset: 0x28
	// Line 1020, Address: 0x240f80, Func Offset: 0x40
	// Line 1022, Address: 0x240f8c, Func Offset: 0x4c
	// Line 1023, Address: 0x240fa0, Func Offset: 0x60
	// Line 1024, Address: 0x240fa8, Func Offset: 0x68
	// Func End, Address: 0x240fb4, Func Offset: 0x74
}

// 
// Start address: 0x240fc0
void DemoEventObjConstruct()
{
	_anon0* demo;
	// Line 1028, Address: 0x240fc0, Func Offset: 0
	// Line 1029, Address: 0x240fc8, Func Offset: 0x8
	// Line 1030, Address: 0x240fd0, Func Offset: 0x10
	// Line 1031, Address: 0x240fdc, Func Offset: 0x1c
	// Line 1032, Address: 0x240fec, Func Offset: 0x2c
	// Line 1033, Address: 0x240ff8, Func Offset: 0x38
	// Func End, Address: 0x241008, Func Offset: 0x48
}

// 
// Start address: 0x241010
void DemoEventObjDestruct()
{
	_anon0* demo;
	// Line 1037, Address: 0x241010, Func Offset: 0
	// Line 1038, Address: 0x241018, Func Offset: 0x8
	// Line 1039, Address: 0x241024, Func Offset: 0x14
	// Line 1040, Address: 0x24102c, Func Offset: 0x1c
	// Line 1041, Address: 0x241034, Func Offset: 0x24
	// Line 1043, Address: 0x241038, Func Offset: 0x28
	// Func End, Address: 0x241048, Func Offset: 0x38
}

// 
// Start address: 0x241050
sfObj* DemoGetEventOBj()
{
	_anon0* demo;
	// Line 1047, Address: 0x241050, Func Offset: 0
	// Line 1048, Address: 0x241058, Func Offset: 0x8
	// Line 1050, Address: 0x241060, Func Offset: 0x10
	// Line 1049, Address: 0x241064, Func Offset: 0x14
	// Line 1050, Address: 0x241068, Func Offset: 0x18
	// Func End, Address: 0x241070, Func Offset: 0x20
}

// 
// Start address: 0x241070
int WasDemoCanceled()
{
	_anon0* demo;
	// Line 1055, Address: 0x241070, Func Offset: 0
	// Line 1056, Address: 0x241078, Func Offset: 0x8
	// Line 1058, Address: 0x241080, Func Offset: 0x10
	// Line 1057, Address: 0x241084, Func Offset: 0x14
	// Line 1058, Address: 0x241088, Func Offset: 0x18
	// Func End, Address: 0x241090, Func Offset: 0x20
}

// 
// Start address: 0x241090
void DemoStopSound()
{
	// Line 1063, Address: 0x241090, Func Offset: 0
	// Func End, Address: 0x241098, Func Offset: 0x8
}

// 
// Start address: 0x2410a0
void DemoSetWithoutBGM(int flag)
{
	_anon0* demo;
	// Line 1152, Address: 0x2410a0, Func Offset: 0
	// Line 1153, Address: 0x2410a8, Func Offset: 0x8
	// Line 1154, Address: 0x2410b0, Func Offset: 0x10
	// Line 1155, Address: 0x2410b4, Func Offset: 0x14
	// Func End, Address: 0x2410c0, Func Offset: 0x20
}

// 
// Start address: 0x2410c0
int DemoWithoutBGM()
{
	_anon0* demo;
	// Line 1159, Address: 0x2410c0, Func Offset: 0
	// Line 1160, Address: 0x2410c8, Func Offset: 0x8
	// Line 1162, Address: 0x2410d0, Func Offset: 0x10
	// Line 1161, Address: 0x2410d4, Func Offset: 0x14
	// Line 1162, Address: 0x2410d8, Func Offset: 0x18
	// Func End, Address: 0x2410e0, Func Offset: 0x20
}

// 
// Start address: 0x2410e0
_anon18 DemoGetCharacterFileInfo(int chara_id)
{
	_anon18 file_info;
	int i;
	// Line 1167, Address: 0x2410e0, Func Offset: 0
	// Line 1168, Address: 0x2410e4, Func Offset: 0x4
	// Line 1167, Address: 0x2410e8, Func Offset: 0x8
	// Line 1168, Address: 0x2410ec, Func Offset: 0xc
	// Line 1167, Address: 0x2410f0, Func Offset: 0x10
	// Line 1168, Address: 0x2410fc, Func Offset: 0x1c
	// Line 1180, Address: 0x241120, Func Offset: 0x40
	// Line 1181, Address: 0x241140, Func Offset: 0x60
	// Line 1182, Address: 0x24114c, Func Offset: 0x6c
	// Line 1184, Address: 0x241164, Func Offset: 0x84
	// Line 1186, Address: 0x24116c, Func Offset: 0x8c
	// Line 1184, Address: 0x241170, Func Offset: 0x90
	// Line 1186, Address: 0x241174, Func Offset: 0x94
	// Line 1189, Address: 0x241180, Func Offset: 0xa0
	// Line 1190, Address: 0x241190, Func Offset: 0xb0
	// Line 1191, Address: 0x2411a8, Func Offset: 0xc8
	// Line 1192, Address: 0x2411b4, Func Offset: 0xd4
	// Line 1194, Address: 0x2411cc, Func Offset: 0xec
	// Line 1196, Address: 0x2411d4, Func Offset: 0xf4
	// Line 1194, Address: 0x2411d8, Func Offset: 0xf8
	// Line 1196, Address: 0x2411dc, Func Offset: 0xfc
	// Line 1199, Address: 0x2411e8, Func Offset: 0x108
	// Line 1200, Address: 0x2411f8, Func Offset: 0x118
	// Line 1201, Address: 0x241210, Func Offset: 0x130
	// Line 1202, Address: 0x24121c, Func Offset: 0x13c
	// Line 1204, Address: 0x241234, Func Offset: 0x154
	// Line 1206, Address: 0x24123c, Func Offset: 0x15c
	// Line 1204, Address: 0x241240, Func Offset: 0x160
	// Line 1206, Address: 0x241244, Func Offset: 0x164
	// Line 1211, Address: 0x241250, Func Offset: 0x170
	// Line 1212, Address: 0x241274, Func Offset: 0x194
	// Func End, Address: 0x241288, Func Offset: 0x1a8
}

// 
// Start address: 0x241290
int DemoGetShadowPow()
{
	_anon0* demo;
	// Line 1217, Address: 0x241290, Func Offset: 0
	// Line 1218, Address: 0x241298, Func Offset: 0x8
	// Line 1221, Address: 0x2412a0, Func Offset: 0x10
	// Line 1224, Address: 0x2412bc, Func Offset: 0x2c
	// Func End, Address: 0x2412cc, Func Offset: 0x3c
}

// 
// Start address: 0x2412d0
int DemoLightIsShadowLight(_anon11* light)
{
	// Line 1227, Address: 0x2412d0, Func Offset: 0
	// Line 1228, Address: 0x2412d4, Func Offset: 0x4
	// Line 1243, Address: 0x241370, Func Offset: 0xa0
	// Line 1245, Address: 0x241378, Func Offset: 0xa8
	// Line 1246, Address: 0x241380, Func Offset: 0xb0
	// Func End, Address: 0x241388, Func Offset: 0xb8
}

// 
// Start address: 0x241390
void DemoReset()
{
	// Line 1250, Address: 0x241390, Func Offset: 0
	// Line 1251, Address: 0x241394, Func Offset: 0x4
	// Line 1250, Address: 0x241398, Func Offset: 0x8
	// Line 1251, Address: 0x24139c, Func Offset: 0xc
	// Line 1252, Address: 0x2413a8, Func Offset: 0x18
	// Line 1253, Address: 0x2413b8, Func Offset: 0x28
	// Func End, Address: 0x2413c4, Func Offset: 0x34
}

// 
// Start address: 0x2413d0
void DemoSet(int demo_id)
{
	int i;
	// Line 1257, Address: 0x2413d0, Func Offset: 0
	// Line 1259, Address: 0x2413d4, Func Offset: 0x4
	// Line 1257, Address: 0x2413d8, Func Offset: 0x8
	// Line 1259, Address: 0x2413e4, Func Offset: 0x14
	// Line 1260, Address: 0x2413f0, Func Offset: 0x20
	// Line 1262, Address: 0x241400, Func Offset: 0x30
	// Line 1263, Address: 0x241418, Func Offset: 0x48
	// Line 1264, Address: 0x241420, Func Offset: 0x50
	// Line 1263, Address: 0x241424, Func Offset: 0x54
	// Line 1264, Address: 0x241428, Func Offset: 0x58
	// Line 1267, Address: 0x241434, Func Offset: 0x64
	// Line 1268, Address: 0x241464, Func Offset: 0x94
	// Line 1270, Address: 0x24146c, Func Offset: 0x9c
	// Line 1268, Address: 0x241470, Func Offset: 0xa0
	// Line 1270, Address: 0x241478, Func Offset: 0xa8
	// Line 1272, Address: 0x241480, Func Offset: 0xb0
	// Line 1273, Address: 0x241488, Func Offset: 0xb8
	// Line 1277, Address: 0x241494, Func Offset: 0xc4
	// Line 1278, Address: 0x24149c, Func Offset: 0xcc
	// Line 1281, Address: 0x2414a4, Func Offset: 0xd4
	// Line 1282, Address: 0x2414ac, Func Offset: 0xdc
	// Line 1285, Address: 0x2414b4, Func Offset: 0xe4
	// Line 1290, Address: 0x2414bc, Func Offset: 0xec
	// Func End, Address: 0x2414cc, Func Offset: 0xfc
}

// 
// Start address: 0x2414d0
void DemoInit()
{
	_anon0* demo;
	int demo_id;
	// Line 1301, Address: 0x2414d0, Func Offset: 0
	// Line 1303, Address: 0x2414dc, Func Offset: 0xc
	// Line 1304, Address: 0x2414e4, Func Offset: 0x14
	// Line 1308, Address: 0x2414ec, Func Offset: 0x1c
	// Line 1309, Address: 0x2414f4, Func Offset: 0x24
	// Line 1313, Address: 0x2414fc, Func Offset: 0x2c
	// Line 1316, Address: 0x241504, Func Offset: 0x34
	// Line 1319, Address: 0x24150c, Func Offset: 0x3c
	// Line 1321, Address: 0x241514, Func Offset: 0x44
	// Line 1324, Address: 0x241518, Func Offset: 0x48
	// Line 1321, Address: 0x24151c, Func Offset: 0x4c
	// Line 1324, Address: 0x241520, Func Offset: 0x50
	// Line 1327, Address: 0x241524, Func Offset: 0x54
	// Line 1329, Address: 0x24152c, Func Offset: 0x5c
	// Line 1331, Address: 0x241534, Func Offset: 0x64
	// Line 1332, Address: 0x241544, Func Offset: 0x74
	// Line 1334, Address: 0x241554, Func Offset: 0x84
	// Line 1337, Address: 0x24155c, Func Offset: 0x8c
	// Line 1338, Address: 0x241564, Func Offset: 0x94
	// Line 1341, Address: 0x241568, Func Offset: 0x98
	// Line 1344, Address: 0x241570, Func Offset: 0xa0
	// Func End, Address: 0x241584, Func Offset: 0xb4
}

// 
// Start address: 0x241590
int LoadDemoData(_anon0* demo, int* buffer)
{
	// Line 1348, Address: 0x241590, Func Offset: 0
	// Line 1349, Address: 0x2415a0, Func Offset: 0x10
	// Line 1350, Address: 0x2415a8, Func Offset: 0x18
	// Line 1351, Address: 0x2415ac, Func Offset: 0x1c
	// Line 1350, Address: 0x2415b0, Func Offset: 0x20
	// Line 1352, Address: 0x2415b8, Func Offset: 0x28
	// Func End, Address: 0x2415c8, Func Offset: 0x38
}

// 
// Start address: 0x2415d0
int WaitDemoData()
{
	// Line 1356, Address: 0x2415d0, Func Offset: 0
	// Line 1358, Address: 0x2415d8, Func Offset: 0x8
	// Line 1361, Address: 0x2415e0, Func Offset: 0x10
	// Line 1358, Address: 0x2415e4, Func Offset: 0x14
	// Line 1361, Address: 0x2415e8, Func Offset: 0x18
	// Func End, Address: 0x2415f0, Func Offset: 0x20
}

// 
// Start address: 0x2415f0
void DemoCharacterAdd(_anon0* demo)
{
	int i;
	int j;
	int kind;
	unsigned int chara_id;
	_anon9* demo_chara;
	sfCharacter* chara;
	_anon18 file_info;
	// Line 1365, Address: 0x2415f0, Func Offset: 0
	// Line 1368, Address: 0x24161c, Func Offset: 0x2c
	// Line 1379, Address: 0x241640, Func Offset: 0x50
	// Line 1380, Address: 0x24165c, Func Offset: 0x6c
	// Line 1381, Address: 0x241670, Func Offset: 0x80
	// Line 1382, Address: 0x241688, Func Offset: 0x98
	// Line 1385, Address: 0x241690, Func Offset: 0xa0
	// Line 1386, Address: 0x2416b4, Func Offset: 0xc4
	// Line 1387, Address: 0x2416b8, Func Offset: 0xc8
	// Line 1388, Address: 0x2416c0, Func Offset: 0xd0
	// Line 1389, Address: 0x2416d0, Func Offset: 0xe0
	// Line 1391, Address: 0x2416d8, Func Offset: 0xe8
	// Line 1392, Address: 0x2416e8, Func Offset: 0xf8
	// Line 1393, Address: 0x2416fc, Func Offset: 0x10c
	// Line 1394, Address: 0x241700, Func Offset: 0x110
	// Line 1393, Address: 0x241708, Func Offset: 0x118
	// Line 1394, Address: 0x241714, Func Offset: 0x124
	// Line 1395, Address: 0x241728, Func Offset: 0x138
	// Line 1397, Address: 0x241734, Func Offset: 0x144
	// Line 1398, Address: 0x241754, Func Offset: 0x164
	// Line 1399, Address: 0x241768, Func Offset: 0x178
	// Line 1400, Address: 0x24176c, Func Offset: 0x17c
	// Line 1399, Address: 0x241774, Func Offset: 0x184
	// Line 1400, Address: 0x241780, Func Offset: 0x190
	// Line 1401, Address: 0x241794, Func Offset: 0x1a4
	// Line 1402, Address: 0x2417a4, Func Offset: 0x1b4
	// Line 1403, Address: 0x2417b4, Func Offset: 0x1c4
	// Line 1405, Address: 0x2417c8, Func Offset: 0x1d8
	// Line 1407, Address: 0x2417d0, Func Offset: 0x1e0
	// Line 1409, Address: 0x2417d8, Func Offset: 0x1e8
	// Line 1410, Address: 0x2417f4, Func Offset: 0x204
	// Line 1411, Address: 0x2417fc, Func Offset: 0x20c
	// Line 1412, Address: 0x241808, Func Offset: 0x218
	// Line 1411, Address: 0x24180c, Func Offset: 0x21c
	// Line 1412, Address: 0x241818, Func Offset: 0x228
	// Line 1413, Address: 0x241830, Func Offset: 0x240
	// Line 1414, Address: 0x241860, Func Offset: 0x270
	// Line 1416, Address: 0x241878, Func Offset: 0x288
	// Line 1417, Address: 0x24187c, Func Offset: 0x28c
	// Line 1421, Address: 0x2418a4, Func Offset: 0x2b4
	// Line 1422, Address: 0x2418bc, Func Offset: 0x2cc
	// Line 1425, Address: 0x2418d0, Func Offset: 0x2e0
	// Line 1426, Address: 0x2418e8, Func Offset: 0x2f8
	// Line 1427, Address: 0x241900, Func Offset: 0x310
	// Line 1428, Address: 0x241918, Func Offset: 0x328
	// Line 1430, Address: 0x241928, Func Offset: 0x338
	// Line 1431, Address: 0x241934, Func Offset: 0x344
	// Line 1432, Address: 0x241938, Func Offset: 0x348
	// Line 1433, Address: 0x241954, Func Offset: 0x364
	// Line 1436, Address: 0x241960, Func Offset: 0x370
	// Line 1440, Address: 0x24196c, Func Offset: 0x37c
	// Line 1441, Address: 0x241988, Func Offset: 0x398
	// Line 1442, Address: 0x2419a4, Func Offset: 0x3b4
	// Line 1443, Address: 0x2419a8, Func Offset: 0x3b8
	// Line 1444, Address: 0x2419b8, Func Offset: 0x3c8
	// Line 1445, Address: 0x2419c0, Func Offset: 0x3d0
	// Line 1446, Address: 0x2419c8, Func Offset: 0x3d8
	// Line 1447, Address: 0x2419e0, Func Offset: 0x3f0
	// Line 1448, Address: 0x2419f0, Func Offset: 0x400
	// Line 1449, Address: 0x241a08, Func Offset: 0x418
	// Line 1450, Address: 0x241a14, Func Offset: 0x424
	// Line 1451, Address: 0x241a18, Func Offset: 0x428
	// Line 1457, Address: 0x241a24, Func Offset: 0x434
	// Line 1458, Address: 0x241a40, Func Offset: 0x450
	// Func End, Address: 0x241a6c, Func Offset: 0x47c
}

// 
// Start address: 0x241a70
void DemoCharacterAddHalfDemo(sfCharacter* chara, int chara_id)
{
	_anon0* demo;
	// Line 1462, Address: 0x241a70, Func Offset: 0
	// Line 1463, Address: 0x241a7c, Func Offset: 0xc
	// Line 1464, Address: 0x241a84, Func Offset: 0x14
	// Line 1463, Address: 0x241a88, Func Offset: 0x18
	// Line 1464, Address: 0x241a8c, Func Offset: 0x1c
	// Line 1465, Address: 0x241a94, Func Offset: 0x24
	// Line 1466, Address: 0x241aa0, Func Offset: 0x30
	// Func End, Address: 0x241ab0, Func Offset: 0x40
}

// 
// Start address: 0x241ab0
int PrePlay(_anon0* demo, _anon5* data_ctrl_)
{
	_anon8* head;
	int load_time;
	// Line 1470, Address: 0x241ab0, Func Offset: 0
	// Line 1474, Address: 0x241ac4, Func Offset: 0x14
	// Line 1475, Address: 0x241ae4, Func Offset: 0x34
	// Line 1476, Address: 0x241aec, Func Offset: 0x3c
	// Line 1478, Address: 0x241af0, Func Offset: 0x40
	// Line 1479, Address: 0x241b00, Func Offset: 0x50
	// Line 1482, Address: 0x241b10, Func Offset: 0x60
	// Line 1485, Address: 0x241b14, Func Offset: 0x64
	// Line 1486, Address: 0x241b44, Func Offset: 0x94
	// Line 1487, Address: 0x241b70, Func Offset: 0xc0
	// Line 1490, Address: 0x241b78, Func Offset: 0xc8
	// Line 1491, Address: 0x241b7c, Func Offset: 0xcc
	// Line 1490, Address: 0x241b8c, Func Offset: 0xdc
	// Line 1491, Address: 0x241b94, Func Offset: 0xe4
	// Line 1492, Address: 0x241bac, Func Offset: 0xfc
	// Line 1493, Address: 0x241bb0, Func Offset: 0x100
	// Line 1504, Address: 0x241bb8, Func Offset: 0x108
	// Line 1505, Address: 0x241bd8, Func Offset: 0x128
	// Line 1507, Address: 0x241be0, Func Offset: 0x130
	// Line 1510, Address: 0x241be8, Func Offset: 0x138
	// Line 1511, Address: 0x241bf0, Func Offset: 0x140
	// Func End, Address: 0x241c04, Func Offset: 0x154
}

// 
// Start address: 0x241c10
void PostPlay(_anon5* data_ctrl_, _anon6* sqt_anime)
{
	_anon3* data_current;
	float frame_f;
	int current_frame;
	// Line 1515, Address: 0x241c10, Func Offset: 0
	// Line 1519, Address: 0x241c24, Func Offset: 0x14
	// Line 1523, Address: 0x241c2c, Func Offset: 0x1c
	// Line 1524, Address: 0x241c3c, Func Offset: 0x2c
	// Line 1525, Address: 0x241c40, Func Offset: 0x30
	// Line 1526, Address: 0x241c4c, Func Offset: 0x3c
	// Line 1527, Address: 0x241c5c, Func Offset: 0x4c
	// Line 1528, Address: 0x241c64, Func Offset: 0x54
	// Line 1530, Address: 0x241c6c, Func Offset: 0x5c
	// Line 1531, Address: 0x241c70, Func Offset: 0x60
	// Func End, Address: 0x241c84, Func Offset: 0x74
}

// 
// Start address: 0x241c90
int PlayDemo()
{
	_anon0* demo;
	int i;
	sfObj* obj[16];
	_anon4 demo_camera;
	short next_demo_id;
	short n_chara;
	_anon9* demo_chara;
	_anon3* frame;
	// Line 1536, Address: 0x241c90, Func Offset: 0
	// Line 1537, Address: 0x241ca8, Func Offset: 0x18
	// Line 1539, Address: 0x241cb4, Func Offset: 0x24
	// Line 1540, Address: 0x241ccc, Func Offset: 0x3c
	// Line 1547, Address: 0x241d08, Func Offset: 0x78
	// Line 1549, Address: 0x241d18, Func Offset: 0x88
	// Line 1550, Address: 0x241d24, Func Offset: 0x94
	// Line 1555, Address: 0x241d38, Func Offset: 0xa8
	// Line 1556, Address: 0x241d3c, Func Offset: 0xac
	// Line 1557, Address: 0x241d60, Func Offset: 0xd0
	// Line 1558, Address: 0x241dd4, Func Offset: 0x144
	// Line 1557, Address: 0x241ddc, Func Offset: 0x14c
	// Line 1558, Address: 0x241de4, Func Offset: 0x154
	// Line 1559, Address: 0x241df0, Func Offset: 0x160
	// Line 1562, Address: 0x241e00, Func Offset: 0x170
	// Line 1563, Address: 0x241e08, Func Offset: 0x178
	// Line 1564, Address: 0x241e14, Func Offset: 0x184
	// Line 1565, Address: 0x241e1c, Func Offset: 0x18c
	// Line 1566, Address: 0x241e20, Func Offset: 0x190
	// Line 1567, Address: 0x241e28, Func Offset: 0x198
	// Line 1568, Address: 0x241e30, Func Offset: 0x1a0
	// Line 1569, Address: 0x241e48, Func Offset: 0x1b8
	// Line 1571, Address: 0x241e54, Func Offset: 0x1c4
	// Line 1572, Address: 0x241e5c, Func Offset: 0x1cc
	// Line 1573, Address: 0x241e60, Func Offset: 0x1d0
	// Line 1572, Address: 0x241e68, Func Offset: 0x1d8
	// Line 1573, Address: 0x241e70, Func Offset: 0x1e0
	// Line 1574, Address: 0x241e78, Func Offset: 0x1e8
	// Line 1576, Address: 0x241e88, Func Offset: 0x1f8
	// Line 1579, Address: 0x241e90, Func Offset: 0x200
	// Line 1582, Address: 0x241e98, Func Offset: 0x208
	// Line 1586, Address: 0x241ea0, Func Offset: 0x210
	// Line 1588, Address: 0x241edc, Func Offset: 0x24c
	// Line 1590, Address: 0x241ee0, Func Offset: 0x250
	// Line 1591, Address: 0x241ef0, Func Offset: 0x260
	// Line 1593, Address: 0x241ef8, Func Offset: 0x268
	// Line 1595, Address: 0x241f08, Func Offset: 0x278
	// Line 1599, Address: 0x241f10, Func Offset: 0x280
	// Line 1602, Address: 0x241f18, Func Offset: 0x288
	// Line 1605, Address: 0x241f28, Func Offset: 0x298
	// Line 1606, Address: 0x241f30, Func Offset: 0x2a0
	// Func End, Address: 0x241f50, Func Offset: 0x2c0
}

// 
// Start address: 0x241f50
void DemoCameraUpdate()
{
	_anon4 demo_camera;
	// Line 1609, Address: 0x241f50, Func Offset: 0
	// Line 1611, Address: 0x241f58, Func Offset: 0x8
	// Line 1612, Address: 0x241f80, Func Offset: 0x30
	// Line 1613, Address: 0x241f88, Func Offset: 0x38
	// Line 1614, Address: 0x241fb0, Func Offset: 0x60
	// Line 1615, Address: 0x241fc0, Func Offset: 0x70
	// Line 1617, Address: 0x241fe0, Func Offset: 0x90
	// Line 1618, Address: 0x241ff8, Func Offset: 0xa8
	// Line 1623, Address: 0x242000, Func Offset: 0xb0
	// Line 1624, Address: 0x242030, Func Offset: 0xe0
	// Line 1625, Address: 0x24203c, Func Offset: 0xec
	// Line 1626, Address: 0x242044, Func Offset: 0xf4
	// Func End, Address: 0x242054, Func Offset: 0x104
}

// 
// Start address: 0x242060
void DemoCameraExec(_anon12* sqt_camera)
{
	_anon0* demo;
	float vwm[4][4];
	float view_angle;
	float focus_depth;
	float focus_range;
	float focus_intensity;
	short focus_type;
	short focus_level;
	// Line 1630, Address: 0x242060, Func Offset: 0
	// Line 1631, Address: 0x242070, Func Offset: 0x10
	// Line 1639, Address: 0x24207c, Func Offset: 0x1c
	// Line 1640, Address: 0x242084, Func Offset: 0x24
	// Line 1641, Address: 0x242094, Func Offset: 0x34
	// Line 1642, Address: 0x2420a4, Func Offset: 0x44
	// Line 1643, Address: 0x2420b4, Func Offset: 0x54
	// Line 1644, Address: 0x2420c4, Func Offset: 0x64
	// Line 1645, Address: 0x2420d4, Func Offset: 0x74
	// Line 1646, Address: 0x2420e4, Func Offset: 0x84
	// Line 1647, Address: 0x2420f4, Func Offset: 0x94
	// Line 1648, Address: 0x242100, Func Offset: 0xa0
	// Line 1650, Address: 0x242108, Func Offset: 0xa8
	// Line 1651, Address: 0x242110, Func Offset: 0xb0
	// Line 1652, Address: 0x242118, Func Offset: 0xb8
	// Line 1653, Address: 0x242120, Func Offset: 0xc0
	// Line 1654, Address: 0x242128, Func Offset: 0xc8
	// Line 1656, Address: 0x24212c, Func Offset: 0xcc
	// Line 1657, Address: 0x242134, Func Offset: 0xd4
	// Func End, Address: 0x242148, Func Offset: 0xe8
}

// 
// Start address: 0x242150
float DemoCameraViewAngle()
{
	_anon0* demo;
	float angle;
	// Line 1676, Address: 0x242150, Func Offset: 0
	// Line 1677, Address: 0x242158, Func Offset: 0x8
	// Line 1679, Address: 0x242160, Func Offset: 0x10
	// Line 1680, Address: 0x242174, Func Offset: 0x24
	// Line 1682, Address: 0x242190, Func Offset: 0x40
	// Func End, Address: 0x24219c, Func Offset: 0x4c
}

// 
// Start address: 0x2421a0
void DemoCameraCurrentFrame(_anon4* camera_parameters)
{
	_anon0* demo;
	// Line 1686, Address: 0x2421a0, Func Offset: 0
	// Line 1687, Address: 0x2421a8, Func Offset: 0x8
	// Line 1688, Address: 0x2421b0, Func Offset: 0x10
	// Line 1689, Address: 0x2421bc, Func Offset: 0x1c
	// Func End, Address: 0x2421c8, Func Offset: 0x28
}

// 
// Start address: 0x2421d0
void DemoLightUpdate()
{
	_anon0* demo;
	_anon11* sqt_light;
	float vwm[4][4];
	_anon10 qt;
	float color[4];
	int kind;
	int shadow;
	float end;
	float param[6];
	int i;
	int j;
	_anon7* sglight_p;
	float v[4];
	// Line 1694, Address: 0x2421d0, Func Offset: 0
	// Line 1695, Address: 0x2421f8, Func Offset: 0x28
	// Line 1706, Address: 0x242200, Func Offset: 0x30
	// Line 1709, Address: 0x242220, Func Offset: 0x50
	// Line 1711, Address: 0x242238, Func Offset: 0x68
	// Line 1713, Address: 0x242240, Func Offset: 0x70
	// Line 1711, Address: 0x242244, Func Offset: 0x74
	// Line 1715, Address: 0x24224c, Func Offset: 0x7c
	// Line 1714, Address: 0x242250, Func Offset: 0x80
	// Line 1715, Address: 0x242254, Func Offset: 0x84
	// Line 1716, Address: 0x242268, Func Offset: 0x98
	// Line 1717, Address: 0x242270, Func Offset: 0xa0
	// Line 1722, Address: 0x242280, Func Offset: 0xb0
	// Line 1724, Address: 0x24228c, Func Offset: 0xbc
	// Line 1725, Address: 0x242298, Func Offset: 0xc8
	// Line 1727, Address: 0x2422ac, Func Offset: 0xdc
	// Line 1728, Address: 0x2422b8, Func Offset: 0xe8
	// Line 1729, Address: 0x2422c0, Func Offset: 0xf0
	// Line 1732, Address: 0x2422c8, Func Offset: 0xf8
	// Line 1734, Address: 0x2422d4, Func Offset: 0x104
	// Line 1735, Address: 0x2422e0, Func Offset: 0x110
	// Line 1739, Address: 0x2422f0, Func Offset: 0x120
	// Line 1740, Address: 0x2422fc, Func Offset: 0x12c
	// Line 1741, Address: 0x242308, Func Offset: 0x138
	// Line 1742, Address: 0x242314, Func Offset: 0x144
	// Line 1743, Address: 0x242324, Func Offset: 0x154
	// Line 1746, Address: 0x242330, Func Offset: 0x160
	// Line 1747, Address: 0x24233c, Func Offset: 0x16c
	// Line 1748, Address: 0x24234c, Func Offset: 0x17c
	// Line 1749, Address: 0x242358, Func Offset: 0x188
	// Line 1748, Address: 0x24235c, Func Offset: 0x18c
	// Line 1749, Address: 0x242360, Func Offset: 0x190
	// Line 1748, Address: 0x242364, Func Offset: 0x194
	// Line 1750, Address: 0x24236c, Func Offset: 0x19c
	// Line 1751, Address: 0x242370, Func Offset: 0x1a0
	// Line 1754, Address: 0x24237c, Func Offset: 0x1ac
	// Line 1755, Address: 0x242388, Func Offset: 0x1b8
	// Line 1756, Address: 0x242398, Func Offset: 0x1c8
	// Line 1757, Address: 0x2423a8, Func Offset: 0x1d8
	// Line 1759, Address: 0x2423b4, Func Offset: 0x1e4
	// Line 1757, Address: 0x2423c4, Func Offset: 0x1f4
	// Line 1759, Address: 0x2423c8, Func Offset: 0x1f8
	// Line 1762, Address: 0x2423d0, Func Offset: 0x200
	// Line 1763, Address: 0x2423e0, Func Offset: 0x210
	// Line 1764, Address: 0x2423ec, Func Offset: 0x21c
	// Line 1765, Address: 0x2423fc, Func Offset: 0x22c
	// Line 1764, Address: 0x242400, Func Offset: 0x230
	// Line 1769, Address: 0x242404, Func Offset: 0x234
	// Line 1770, Address: 0x242410, Func Offset: 0x240
	// Line 1771, Address: 0x24241c, Func Offset: 0x24c
	// Line 1773, Address: 0x242428, Func Offset: 0x258
	// Line 1774, Address: 0x242434, Func Offset: 0x264
	// Line 1775, Address: 0x242440, Func Offset: 0x270
	// Line 1776, Address: 0x24244c, Func Offset: 0x27c
	// Line 1777, Address: 0x242458, Func Offset: 0x288
	// Line 1780, Address: 0x24246c, Func Offset: 0x29c
	// Line 1781, Address: 0x242470, Func Offset: 0x2a0
	// Line 1782, Address: 0x242478, Func Offset: 0x2a8
	// Line 1783, Address: 0x242480, Func Offset: 0x2b0
	// Line 1785, Address: 0x242488, Func Offset: 0x2b8
	// Line 1786, Address: 0x2424a0, Func Offset: 0x2d0
	// Line 1787, Address: 0x2424a8, Func Offset: 0x2d8
	// Func End, Address: 0x2424d8, Func Offset: 0x308
}

// 
// Start address: 0x2424e0
_anon11* DemoGetLight(int index)
{
	_anon0* demo;
	// Line 1791, Address: 0x2424e0, Func Offset: 0
	// Line 1792, Address: 0x2424e8, Func Offset: 0x8
	// Line 1794, Address: 0x2424f0, Func Offset: 0x10
	// Line 1793, Address: 0x2424f4, Func Offset: 0x14
	// Line 1794, Address: 0x242500, Func Offset: 0x20
	// Func End, Address: 0x242508, Func Offset: 0x28
}

// 
// Start address: 0x242510
int DemoGetNLight()
{
	_anon0* demo;
	// Line 1798, Address: 0x242510, Func Offset: 0
	// Line 1799, Address: 0x242518, Func Offset: 0x8
	// Line 1801, Address: 0x242520, Func Offset: 0x10
	// Line 1800, Address: 0x242524, Func Offset: 0x14
	// Line 1801, Address: 0x242528, Func Offset: 0x18
	// Func End, Address: 0x242530, Func Offset: 0x20
}

// 
// Start address: 0x242530
void DemoCharacterDelete(sfObj* obj)
{
	_anon9* demo_chara;
	// Line 1838, Address: 0x242530, Func Offset: 0
	// Line 1839, Address: 0x24253c, Func Offset: 0xc
	// Line 1841, Address: 0x242544, Func Offset: 0x14
	// Line 1842, Address: 0x24254c, Func Offset: 0x1c
	// Line 1843, Address: 0x242554, Func Offset: 0x24
	// Func End, Address: 0x242564, Func Offset: 0x34
}

// 
// Start address: 0x242570
void DemoDestruct()
{
	_anon0* demo;
	int i;
	int demo_id;
	// Line 1847, Address: 0x242570, Func Offset: 0
	// Line 1848, Address: 0x242580, Func Offset: 0x10
	// Line 1850, Address: 0x242588, Func Offset: 0x18
	// Line 1852, Address: 0x242590, Func Offset: 0x20
	// Line 1854, Address: 0x24259c, Func Offset: 0x2c
	// Line 1856, Address: 0x2425a4, Func Offset: 0x34
	// Line 1858, Address: 0x2425ac, Func Offset: 0x3c
	// Line 1859, Address: 0x2425cc, Func Offset: 0x5c
	// Line 1860, Address: 0x2425e0, Func Offset: 0x70
	// Line 1861, Address: 0x2425e8, Func Offset: 0x78
	// Line 1862, Address: 0x242600, Func Offset: 0x90
	// Line 1863, Address: 0x242604, Func Offset: 0x94
	// Line 1865, Address: 0x242608, Func Offset: 0x98
	// Line 1866, Address: 0x242628, Func Offset: 0xb8
	// Line 1868, Address: 0x242630, Func Offset: 0xc0
	// Line 1870, Address: 0x242638, Func Offset: 0xc8
	// Line 1876, Address: 0x24263c, Func Offset: 0xcc
	// Line 1880, Address: 0x242640, Func Offset: 0xd0
	// Line 1883, Address: 0x24264c, Func Offset: 0xdc
	// Line 1892, Address: 0x242654, Func Offset: 0xe4
	// Line 1894, Address: 0x24265c, Func Offset: 0xec
	// Line 1899, Address: 0x242660, Func Offset: 0xf0
	// Line 1902, Address: 0x242668, Func Offset: 0xf8
	// Line 1905, Address: 0x242670, Func Offset: 0x100
	// Line 1906, Address: 0x242690, Func Offset: 0x120
	// Line 1910, Address: 0x242698, Func Offset: 0x128
	// Line 1914, Address: 0x2426a0, Func Offset: 0x130
	// Line 1915, Address: 0x2426a8, Func Offset: 0x138
	// Func End, Address: 0x2426c0, Func Offset: 0x150
}

// 
// Start address: 0x2426c0
void DemoDestroy()
{
	// Line 1918, Address: 0x2426c0, Func Offset: 0
	// Line 1919, Address: 0x2426c8, Func Offset: 0x8
	// Line 1920, Address: 0x2426d0, Func Offset: 0x10
	// Line 1921, Address: 0x2426d8, Func Offset: 0x18
	// Func End, Address: 0x2426e4, Func Offset: 0x24
}

// 
// Start address: 0x2426f0
void DemoSetTime()
{
	_anon0* demo;
	// Line 1924, Address: 0x2426f0, Func Offset: 0
	// Line 1925, Address: 0x2426f8, Func Offset: 0x8
	// Line 1926, Address: 0x242700, Func Offset: 0x10
	// Line 1925, Address: 0x242704, Func Offset: 0x14
	// Line 1927, Address: 0x242708, Func Offset: 0x18
	// Line 1930, Address: 0x242734, Func Offset: 0x44
	// Func End, Address: 0x242744, Func Offset: 0x54
}

// 
// Start address: 0x242750
float DemoGetCurrentTime()
{
	_anon0* demo;
	float current_frame;
	// Line 1933, Address: 0x242750, Func Offset: 0
	// Line 1934, Address: 0x242758, Func Offset: 0x8
	// Line 1936, Address: 0x242760, Func Offset: 0x10
	// Line 1937, Address: 0x242770, Func Offset: 0x20
	// Line 1938, Address: 0x24277c, Func Offset: 0x2c
	// Line 1939, Address: 0x242780, Func Offset: 0x30
	// Line 1941, Address: 0x2427a4, Func Offset: 0x54
	// Line 1942, Address: 0x2427a8, Func Offset: 0x58
	// Func End, Address: 0x2427b8, Func Offset: 0x68
}

// 
// Start address: 0x2427c0
float DemoGetOldTime()
{
	_anon0* demo;
	// Line 1945, Address: 0x2427c0, Func Offset: 0
	// Line 1946, Address: 0x2427c8, Func Offset: 0x8
	// Line 1948, Address: 0x2427d0, Func Offset: 0x10
	// Line 1947, Address: 0x2427d4, Func Offset: 0x14
	// Line 1948, Address: 0x2427d8, Func Offset: 0x18
	// Func End, Address: 0x2427e0, Func Offset: 0x20
}

// 
// Start address: 0x2427e0
float DemoGetDemoLength()
{
	// Line 1951, Address: 0x2427e0, Func Offset: 0
	// Line 1955, Address: 0x2427e8, Func Offset: 0x8
	// Line 1956, Address: 0x242808, Func Offset: 0x28
	// Func End, Address: 0x242810, Func Offset: 0x30
}

// 
// Start address: 0x242810
int DemoMain()
{
	int demo_id;
	char path_name[100];
	char file_name[32];
	_anon0* demo;
	int num;
	int playdemo;
	float volume;
	// Line 2363, Address: 0x242810, Func Offset: 0
	// Line 2370, Address: 0x24281c, Func Offset: 0xc
	// Line 2371, Address: 0x242824, Func Offset: 0x14
	// Line 2373, Address: 0x242830, Func Offset: 0x20
	// Line 2375, Address: 0x242840, Func Offset: 0x30
	// Line 2376, Address: 0x242850, Func Offset: 0x40
	// Line 2377, Address: 0x24286c, Func Offset: 0x5c
	// Line 2381, Address: 0x242874, Func Offset: 0x64
	// Line 2382, Address: 0x242878, Func Offset: 0x68
	// Line 2395, Address: 0x242880, Func Offset: 0x70
	// Line 2382, Address: 0x242884, Func Offset: 0x74
	// Line 2395, Address: 0x242888, Func Offset: 0x78
	// Line 2408, Address: 0x2428c0, Func Offset: 0xb0
	// Line 2409, Address: 0x2428d0, Func Offset: 0xc0
	// Line 2410, Address: 0x2428e0, Func Offset: 0xd0
	// Line 2411, Address: 0x2428fc, Func Offset: 0xec
	// Line 2412, Address: 0x242908, Func Offset: 0xf8
	// Line 2414, Address: 0x242940, Func Offset: 0x130
	// Line 2415, Address: 0x242948, Func Offset: 0x138
	// Line 2416, Address: 0x24297c, Func Offset: 0x16c
	// Line 2421, Address: 0x242980, Func Offset: 0x170
	// Line 2422, Address: 0x24298c, Func Offset: 0x17c
	// Line 2432, Address: 0x242998, Func Offset: 0x188
	// Line 2433, Address: 0x24299c, Func Offset: 0x18c
	// Line 2434, Address: 0x2429b0, Func Offset: 0x1a0
	// Line 2435, Address: 0x2429c0, Func Offset: 0x1b0
	// Line 2436, Address: 0x2429c8, Func Offset: 0x1b8
	// Line 2437, Address: 0x2429d0, Func Offset: 0x1c0
	// Line 2438, Address: 0x2429d8, Func Offset: 0x1c8
	// Line 2440, Address: 0x2429e0, Func Offset: 0x1d0
	// Line 2445, Address: 0x2429e8, Func Offset: 0x1d8
	// Line 2447, Address: 0x2429f0, Func Offset: 0x1e0
	// Line 2450, Address: 0x242a08, Func Offset: 0x1f8
	// Line 2451, Address: 0x242a10, Func Offset: 0x200
	// Line 2453, Address: 0x242a18, Func Offset: 0x208
	// Line 2458, Address: 0x242a58, Func Offset: 0x248
	// Line 2461, Address: 0x242a70, Func Offset: 0x260
	// Line 2462, Address: 0x242a78, Func Offset: 0x268
	// Line 2464, Address: 0x242a90, Func Offset: 0x280
	// Line 2490, Address: 0x242a98, Func Offset: 0x288
	// Line 2495, Address: 0x242aa0, Func Offset: 0x290
	// Line 2498, Address: 0x242aa8, Func Offset: 0x298
	// Line 2500, Address: 0x242ab4, Func Offset: 0x2a4
	// Line 2503, Address: 0x242acc, Func Offset: 0x2bc
	// Line 2504, Address: 0x242aec, Func Offset: 0x2dc
	// Line 2505, Address: 0x242af4, Func Offset: 0x2e4
	// Line 2507, Address: 0x242af8, Func Offset: 0x2e8
	// Line 2508, Address: 0x242b00, Func Offset: 0x2f0
	// Line 2522, Address: 0x242b08, Func Offset: 0x2f8
	// Line 2538, Address: 0x242b10, Func Offset: 0x300
	// Line 2541, Address: 0x242b20, Func Offset: 0x310
	// Line 2542, Address: 0x242b28, Func Offset: 0x318
	// Line 2543, Address: 0x242b34, Func Offset: 0x324
	// Line 2544, Address: 0x242b44, Func Offset: 0x334
	// Line 2545, Address: 0x242b54, Func Offset: 0x344
	// Line 2546, Address: 0x242b5c, Func Offset: 0x34c
	// Line 2547, Address: 0x242b60, Func Offset: 0x350
	// Line 2548, Address: 0x242b68, Func Offset: 0x358
	// Line 2549, Address: 0x242b70, Func Offset: 0x360
	// Line 2550, Address: 0x242b74, Func Offset: 0x364
	// Line 2549, Address: 0x242b78, Func Offset: 0x368
	// Line 2550, Address: 0x242b7c, Func Offset: 0x36c
	// Line 2551, Address: 0x242b84, Func Offset: 0x374
	// Line 2552, Address: 0x242b88, Func Offset: 0x378
	// Line 2553, Address: 0x242b90, Func Offset: 0x380
	// Line 2554, Address: 0x242b9c, Func Offset: 0x38c
	// Line 2556, Address: 0x242ba4, Func Offset: 0x394
	// Line 2568, Address: 0x242ba8, Func Offset: 0x398
	// Line 2570, Address: 0x242bb0, Func Offset: 0x3a0
	// Line 2571, Address: 0x242bc0, Func Offset: 0x3b0
	// Line 2573, Address: 0x242bc8, Func Offset: 0x3b8
	// Line 2576, Address: 0x242bd0, Func Offset: 0x3c0
	// Line 2578, Address: 0x242bd8, Func Offset: 0x3c8
	// Line 2580, Address: 0x242be0, Func Offset: 0x3d0
	// Line 2582, Address: 0x242be8, Func Offset: 0x3d8
	// Line 2583, Address: 0x242c08, Func Offset: 0x3f8
	// Line 2584, Address: 0x242c10, Func Offset: 0x400
	// Line 2587, Address: 0x242c18, Func Offset: 0x408
	// Line 2589, Address: 0x242c20, Func Offset: 0x410
	// Line 2591, Address: 0x242c28, Func Offset: 0x418
	// Line 2593, Address: 0x242c38, Func Offset: 0x428
	// Line 2594, Address: 0x242c48, Func Offset: 0x438
	// Line 2595, Address: 0x242c50, Func Offset: 0x440
	// Line 2596, Address: 0x242c58, Func Offset: 0x448
	// Line 2597, Address: 0x242c68, Func Offset: 0x458
	// Line 2599, Address: 0x242c70, Func Offset: 0x460
	// Line 2600, Address: 0x242c78, Func Offset: 0x468
	// Line 2601, Address: 0x242c80, Func Offset: 0x470
	// Line 2604, Address: 0x242c84, Func Offset: 0x474
	// Line 2601, Address: 0x242c88, Func Offset: 0x478
	// Line 2603, Address: 0x242c8c, Func Offset: 0x47c
	// Line 2604, Address: 0x242c94, Func Offset: 0x484
	// Line 2629, Address: 0x242c9c, Func Offset: 0x48c
	// Line 2630, Address: 0x242ca0, Func Offset: 0x490
	// Line 2631, Address: 0x242cb8, Func Offset: 0x4a8
	// Line 2639, Address: 0x242cc0, Func Offset: 0x4b0
	// Line 2640, Address: 0x242cc8, Func Offset: 0x4b8
	// Func End, Address: 0x242cdc, Func Offset: 0x4cc
}

// 
// Start address: 0x242ce0
void DemoDraw()
{
	_anon4 demo_camera;
	// Line 2647, Address: 0x242ce0, Func Offset: 0
	// Line 2649, Address: 0x242ce8, Func Offset: 0x8
	// Line 2651, Address: 0x242cf0, Func Offset: 0x10
	// Line 2652, Address: 0x242cf8, Func Offset: 0x18
	// Line 2654, Address: 0x242d00, Func Offset: 0x20
	// Line 2664, Address: 0x242d10, Func Offset: 0x30
	// Line 2668, Address: 0x242d20, Func Offset: 0x40
	// Line 2670, Address: 0x242d44, Func Offset: 0x64
	// Line 2671, Address: 0x242d4c, Func Offset: 0x6c
	// Line 2672, Address: 0x242d54, Func Offset: 0x74
	// Line 2673, Address: 0x242d5c, Func Offset: 0x7c
	// Line 2674, Address: 0x242d68, Func Offset: 0x88
	// Line 2675, Address: 0x242d80, Func Offset: 0xa0
	// Line 2676, Address: 0x242d88, Func Offset: 0xa8
	// Line 2679, Address: 0x242d90, Func Offset: 0xb0
	// Line 2680, Address: 0x242d98, Func Offset: 0xb8
	// Line 2759, Address: 0x242da0, Func Offset: 0xc0
	// Func End, Address: 0x242db0, Func Offset: 0xd0
}

// 
// Start address: 0x242db0
void DemoDrawAfter()
{
	int demo_id;
	// Line 2762, Address: 0x242db0, Func Offset: 0
	// Line 2764, Address: 0x242db8, Func Offset: 0x8
	// Line 2765, Address: 0x242dc0, Func Offset: 0x10
	// Line 2767, Address: 0x242dc8, Func Offset: 0x18
	// Line 2768, Address: 0x242de8, Func Offset: 0x38
	// Line 2770, Address: 0x242df0, Func Offset: 0x40
	// Func End, Address: 0x242e00, Func Offset: 0x50
}

