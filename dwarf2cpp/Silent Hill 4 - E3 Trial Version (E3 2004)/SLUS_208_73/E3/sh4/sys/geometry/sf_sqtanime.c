typedef struct sgBone;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sgAnime;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sgVectorLinearKey;
typedef struct _GAME_WORK;
typedef struct _anon9;
typedef struct sfCharacter;
typedef enum sgLightType : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon10;
typedef struct sgIKHandle;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_4)(void*, void*, void*, float);
typedef void*(*type_7)(void*, unsigned int);
typedef sgIKSolveResult(*type_23)();
typedef void(*type_25)(_anon12*, int, int, float*);

typedef float type_1[6];
typedef float type_2[4];
typedef float type_3[4];
typedef int type_5[1];
typedef unsigned char type_6[4];
typedef int type_8[1];
typedef _anon1 type_9[16];
typedef _anon3 type_10[16];
typedef _anon6 type_11[3];
typedef int type_12[3];
typedef int type_13[1];
typedef int type_14[1];
typedef float type_15[4];
typedef int type_16[1];
typedef int type_17[1];
typedef float type_18[4];
typedef float type_19[4];
typedef int type_20[1];
typedef float type_21[4][2];
typedef float type_22[4][4];
typedef void* type_24[4];
typedef float type_26[4];
typedef short type_27[2];
typedef _anon1 type_28[9];

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

struct _anon0
{
	sgBone bone;
	float params[4];
	short params_s[2];
};

struct _anon1
{
	int type;
	void(*func)(void*, void*, void*, float);
	void*(*mapper)(void*, unsigned int);
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
	short character_id;
	short offset_in_frame;
	short n_keys;
	short offset_to_key_info;
};

struct _anon3
{
	void* target;
	short character_id;
	_anon2* character_header;
};

struct _anon4
{
	_anon3 characters[16];
	_anon6 play_data[3];
	_anon5* play_header;
	int current_data;
	float current_time;
};

struct _anon5
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

struct _anon6
{
	void* data_addr;
	int is_valid;
};

struct _anon7
{
	short key_type;
	short mapping_no;
	short offset_in_character;
	short pad;
};

struct _anon8
{
	unsigned short data_id;
	short frame_no;
	int pad[3];
};

struct sgVectorLinearKey
{
	float p[4];
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

struct _anon9
{
	sgBone bone;
	_anon11 sg_light;
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
	_anon13 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon11
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon12
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon13
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon12*, int, int, float*);
	int equip_flag;
};

struct _anon14
{
	float speed_per_process;
	float trans_offset[4];
	int play_version;
};

_anon14 sqt_anime_work;
_anon1 keys_table[16];
_anon1 extend_keys_table[9];
_GAME_WORK gamew;

void sfSqtAnimeInit();
void sfSqtCameraConstruct(_anon0* sqt_camera);
void sfSqtCameraGetViewWorldMatrix(_anon0* sqt_camera, float vwm[4]);
void sfSqtCameraGetParams(_anon0* sqt_camera, int index, float* param);
void sfSqtCameraGetParams_s(_anon0* sqt_camera, int index, short* param);
void sfSqtLightConstruct(_anon9* sqt_light);
void sfSqtLightGetViewWorldMatrix(_anon9* sqt_light, float vwm[4]);
void sfSqtLightGetColor(_anon9* sqt_light, float color[4]);
void sfSqtLightGetKind(_anon9* sqt_light, int* kind);
void sfSqtLightGetParams(_anon9* sqt_light, int index, float* param);
void sfSqtAnimeConstuct(_anon4* sqt_anime);
int sfSqtAnimeEntryCharacter(_anon4* sqt_anime, sfCharacter* chara, int character_id);
int sfSqtAnimeEntryCamera(_anon4* sqt_anime, _anon0* camera, int character_id);
int sfSqtAnimeEntryLight(_anon4* sqt_anime, _anon9* light, int character_id);
int sfSqtAnimeEntryTarget(_anon4* sqt_anime, void* target, int character_id);
void sfSqtAnimeSetData(_anon4* sqt_anime, _anon5* data_head);
int sfSqtAnimeSetNextFrameData(_anon4* sqt_anime, _anon8* data_addr);
void sfSqtAnimeSetCharacterHead(_anon4* sqt_anime, int cno);
void sfSqtAnimeSetCharactersHead(_anon4* sqt_anime);
float sfSqtAnimeCurrentBaseFrame(_anon4* sqt_anime);
void sfSqtAnimeProcess(_anon4* sqt_anime);
void MapInterpolateData(_anon3* character, _anon8* head_0, _anon8* head_1, float interp_u);
void* NoneMapper();
void* BoneMapper(void* chara_, unsigned int mapping_no);
void* ClusterMapper(void* chara_, unsigned int mapping_no);
void* TexAnimeMapper(void* chara_, unsigned int mapping_no);
void* CameraCoordMapper(void* target_);
void* CameraFloatMapper(void* target_, unsigned int mapping_no);
void* CameraShortMapper(void* target_, unsigned int mapping_no);
void* LightCoordMapper(void* target_);
void* LightColorMapper(void* target_);
void* LightKindMapper(void* target_);
void* LightFloatMapper(void* target_, unsigned int mapping_no);
void NoneInterp();
void BoneAbsPositionLinearInterp(void* sk, void* key0_, void* key1_, float u);
void BoneAbsRotLinearInterp(void* sk, void* key0_, void* key1_, float u);
void BoneAbsRotS15LinearInterp(void* sk, void* key0_, void* key1_, float u);
void BoneScaleLinearInterp(void* sk, void* key0_, void* key1_, float u);
void IntLinearInterp(void* out, void* key0_);
void ShortLinearInterp(void* out, void* key0_);
void FloatLinearInterp(void* out, void* key0_, void* key1_, float u);
void FloatVectorStepInterp(void* out, void* key0_, void* key1_, float u);

// 
// Start address: 0x243100
void sfSqtAnimeInit()
{
	// Line 36, Address: 0x243100, Func Offset: 0
	// Line 37, Address: 0x243104, Func Offset: 0x4
	// Line 36, Address: 0x243108, Func Offset: 0x8
	// Line 37, Address: 0x24310c, Func Offset: 0xc
	// Line 38, Address: 0x243118, Func Offset: 0x18
	// Line 39, Address: 0x24313c, Func Offset: 0x3c
	// Func End, Address: 0x243148, Func Offset: 0x48
}

// 
// Start address: 0x243150
void sfSqtCameraConstruct(_anon0* sqt_camera)
{
	// Line 46, Address: 0x243150, Func Offset: 0
	// Line 47, Address: 0x24315c, Func Offset: 0xc
	// Line 48, Address: 0x243164, Func Offset: 0x14
	// Line 49, Address: 0x243168, Func Offset: 0x18
	// Line 48, Address: 0x24316c, Func Offset: 0x1c
	// Line 49, Address: 0x243174, Func Offset: 0x24
	// Line 50, Address: 0x243178, Func Offset: 0x28
	// Line 51, Address: 0x24317c, Func Offset: 0x2c
	// Func End, Address: 0x24318c, Func Offset: 0x3c
}

// 
// Start address: 0x243190
void sfSqtCameraGetViewWorldMatrix(_anon0* sqt_camera, float vwm[4])
{
	// Line 57, Address: 0x243190, Func Offset: 0
	// Func End, Address: 0x243198, Func Offset: 0x8
}

// 
// Start address: 0x2431a0
void sfSqtCameraGetParams(_anon0* sqt_camera, int index, float* param)
{
	// Line 64, Address: 0x2431a0, Func Offset: 0
	// Line 65, Address: 0x2431ac, Func Offset: 0xc
	// Func End, Address: 0x2431b4, Func Offset: 0x14
}

// 
// Start address: 0x2431c0
void sfSqtCameraGetParams_s(_anon0* sqt_camera, int index, short* param)
{
	// Line 71, Address: 0x2431c0, Func Offset: 0
	// Line 72, Address: 0x2431cc, Func Offset: 0xc
	// Func End, Address: 0x2431d4, Func Offset: 0x14
}

// 
// Start address: 0x2431e0
void sfSqtLightConstruct(_anon9* sqt_light)
{
	// Line 81, Address: 0x2431e0, Func Offset: 0
	// Line 82, Address: 0x2431ec, Func Offset: 0xc
	// Line 83, Address: 0x2431f4, Func Offset: 0x14
	// Line 84, Address: 0x243204, Func Offset: 0x24
	// Line 85, Address: 0x24320c, Func Offset: 0x2c
	// Line 86, Address: 0x243210, Func Offset: 0x30
	// Func End, Address: 0x243220, Func Offset: 0x40
}

// 
// Start address: 0x243220
void sfSqtLightGetViewWorldMatrix(_anon9* sqt_light, float vwm[4])
{
	// Line 92, Address: 0x243220, Func Offset: 0
	// Func End, Address: 0x243228, Func Offset: 0x8
}

// 
// Start address: 0x243230
void sfSqtLightGetColor(_anon9* sqt_light, float color[4])
{
	// Line 99, Address: 0x243230, Func Offset: 0
	// Line 100, Address: 0x24324c, Func Offset: 0x1c
	// Func End, Address: 0x243254, Func Offset: 0x24
}

// 
// Start address: 0x243260
void sfSqtLightGetKind(_anon9* sqt_light, int* kind)
{
	// Line 106, Address: 0x243260, Func Offset: 0
	// Line 107, Address: 0x243264, Func Offset: 0x4
	// Func End, Address: 0x24326c, Func Offset: 0xc
}

// 
// Start address: 0x243270
void sfSqtLightGetParams(_anon9* sqt_light, int index, float* param)
{
	// Line 113, Address: 0x243270, Func Offset: 0
	// Line 114, Address: 0x24327c, Func Offset: 0xc
	// Func End, Address: 0x243284, Func Offset: 0x14
}

// 
// Start address: 0x243290
void sfSqtAnimeConstuct(_anon4* sqt_anime)
{
	// Line 130, Address: 0x243290, Func Offset: 0
	// Func End, Address: 0x243298, Func Offset: 0x8
}

// 
// Start address: 0x2432a0
int sfSqtAnimeEntryCharacter(_anon4* sqt_anime, sfCharacter* chara, int character_id)
{
	// Line 141, Address: 0x2432a0, Func Offset: 0
	// Func End, Address: 0x2432a8, Func Offset: 0x8
}

// 
// Start address: 0x2432b0
int sfSqtAnimeEntryCamera(_anon4* sqt_anime, _anon0* camera, int character_id)
{
	// Line 152, Address: 0x2432b0, Func Offset: 0
	// Func End, Address: 0x2432b8, Func Offset: 0x8
}

// 
// Start address: 0x2432c0
int sfSqtAnimeEntryLight(_anon4* sqt_anime, _anon9* light, int character_id)
{
	// Line 159, Address: 0x2432c0, Func Offset: 0
	// Func End, Address: 0x2432c8, Func Offset: 0x8
}

// 
// Start address: 0x2432d0
int sfSqtAnimeEntryTarget(_anon4* sqt_anime, void* target, int character_id)
{
	int i;
	// Line 169, Address: 0x2432d0, Func Offset: 0
	// Line 174, Address: 0x2432e0, Func Offset: 0x10
	// Line 176, Address: 0x2432e8, Func Offset: 0x18
	// Line 177, Address: 0x2432f4, Func Offset: 0x24
	// Line 179, Address: 0x2432f8, Func Offset: 0x28
	// Line 181, Address: 0x243300, Func Offset: 0x30
	// Line 183, Address: 0x243310, Func Offset: 0x40
	// Line 184, Address: 0x24331c, Func Offset: 0x4c
	// Line 186, Address: 0x243328, Func Offset: 0x58
	// Line 187, Address: 0x243330, Func Offset: 0x60
	// Line 188, Address: 0x243338, Func Offset: 0x68
	// Func End, Address: 0x243348, Func Offset: 0x78
}

// 
// Start address: 0x243350
void sfSqtAnimeSetData(_anon4* sqt_anime, _anon5* data_head)
{
	// Line 209, Address: 0x243350, Func Offset: 0
	// Line 211, Address: 0x243360, Func Offset: 0x10
	// Line 214, Address: 0x243368, Func Offset: 0x18
	// Line 216, Address: 0x243378, Func Offset: 0x28
	// Line 218, Address: 0x24337c, Func Offset: 0x2c
	// Line 219, Address: 0x243390, Func Offset: 0x40
	// Line 221, Address: 0x243394, Func Offset: 0x44
	// Line 223, Address: 0x24339c, Func Offset: 0x4c
	// Line 225, Address: 0x2433a4, Func Offset: 0x54
	// Line 226, Address: 0x2433b0, Func Offset: 0x60
	// Func End, Address: 0x2433c0, Func Offset: 0x70
}

// 
// Start address: 0x2433c0
int sfSqtAnimeSetNextFrameData(_anon4* sqt_anime, _anon8* data_addr)
{
	int i;
	int next_data;
	// Line 236, Address: 0x2433c0, Func Offset: 0
	// Line 237, Address: 0x2433c8, Func Offset: 0x8
	// Line 239, Address: 0x2433d0, Func Offset: 0x10
	// Line 240, Address: 0x2433e0, Func Offset: 0x20
	// Line 241, Address: 0x2433e8, Func Offset: 0x28
	// Line 242, Address: 0x2433f0, Func Offset: 0x30
	// Line 241, Address: 0x2433f4, Func Offset: 0x34
	// Line 242, Address: 0x2433f8, Func Offset: 0x38
	// Line 243, Address: 0x243408, Func Offset: 0x48
	// Line 245, Address: 0x24341c, Func Offset: 0x5c
	// Line 246, Address: 0x243420, Func Offset: 0x60
	// Line 247, Address: 0x243424, Func Offset: 0x64
	// Line 248, Address: 0x24342c, Func Offset: 0x6c
	// Line 249, Address: 0x243440, Func Offset: 0x80
	// Line 250, Address: 0x243448, Func Offset: 0x88
	// Func End, Address: 0x243450, Func Offset: 0x90
}

// 
// Start address: 0x243450
void sfSqtAnimeSetCharacterHead(_anon4* sqt_anime, int cno)
{
	_anon5* data_head;
	_anon3* sqt_chara;
	_anon2* character_data;
	int i;
	// Line 257, Address: 0x243450, Func Offset: 0
	// Line 258, Address: 0x243460, Func Offset: 0x10
	// Line 261, Address: 0x24346c, Func Offset: 0x1c
	// Line 264, Address: 0x243474, Func Offset: 0x24
	// Line 262, Address: 0x24347c, Func Offset: 0x2c
	// Line 264, Address: 0x243480, Func Offset: 0x30
	// Line 265, Address: 0x243490, Func Offset: 0x40
	// Line 267, Address: 0x24349c, Func Offset: 0x4c
	// Line 269, Address: 0x2434a4, Func Offset: 0x54
	// Line 271, Address: 0x2434b8, Func Offset: 0x68
	// Func End, Address: 0x2434c0, Func Offset: 0x70
}

// 
// Start address: 0x2434c0
void sfSqtAnimeSetCharactersHead(_anon4* sqt_anime)
{
	int cno;
	// Line 276, Address: 0x2434c0, Func Offset: 0
	// Line 278, Address: 0x2434cc, Func Offset: 0xc
	// Line 279, Address: 0x2434d0, Func Offset: 0x10
	// Line 280, Address: 0x2434dc, Func Offset: 0x1c
	// Line 281, Address: 0x2434ec, Func Offset: 0x2c
	// Func End, Address: 0x2434f8, Func Offset: 0x38
}

// 
// Start address: 0x243500
float sfSqtAnimeCurrentBaseFrame(_anon4* sqt_anime)
{
	// Line 288, Address: 0x243500, Func Offset: 0
	// Func End, Address: 0x243508, Func Offset: 0x8
}

// 
// Start address: 0x243510
void sfSqtAnimeProcess(_anon4* sqt_anime)
{
	_anon5* data_head;
	_anon6* pdata;
	_anon8* head_0;
	_anon8* head_1;
	int frame_i;
	int i;
	int n0;
	int n1;
	float interp_u;
	// Line 355, Address: 0x243510, Func Offset: 0
	// Line 356, Address: 0x243530, Func Offset: 0x20
	// Line 369, Address: 0x243534, Func Offset: 0x24
	// Line 371, Address: 0x243550, Func Offset: 0x40
	// Line 372, Address: 0x24355c, Func Offset: 0x4c
	// Line 375, Address: 0x243564, Func Offset: 0x54
	// Line 376, Address: 0x243570, Func Offset: 0x60
	// Line 377, Address: 0x243574, Func Offset: 0x64
	// Line 382, Address: 0x243578, Func Offset: 0x68
	// Line 383, Address: 0x24357c, Func Offset: 0x6c
	// Line 385, Address: 0x243588, Func Offset: 0x78
	// Line 387, Address: 0x243594, Func Offset: 0x84
	// Line 388, Address: 0x24359c, Func Offset: 0x8c
	// Line 390, Address: 0x2435a0, Func Offset: 0x90
	// Line 392, Address: 0x2435a8, Func Offset: 0x98
	// Line 393, Address: 0x2435ac, Func Offset: 0x9c
	// Line 395, Address: 0x2435c0, Func Offset: 0xb0
	// Line 394, Address: 0x2435c4, Func Offset: 0xb4
	// Line 397, Address: 0x2435c8, Func Offset: 0xb8
	// Line 400, Address: 0x2435d8, Func Offset: 0xc8
	// Line 408, Address: 0x2435dc, Func Offset: 0xcc
	// Line 401, Address: 0x2435e0, Func Offset: 0xd0
	// Line 402, Address: 0x2435e8, Func Offset: 0xd8
	// Line 407, Address: 0x2435ec, Func Offset: 0xdc
	// Line 409, Address: 0x2435f0, Func Offset: 0xe0
	// Line 408, Address: 0x2435f4, Func Offset: 0xe4
	// Line 409, Address: 0x2435f8, Func Offset: 0xe8
	// Line 410, Address: 0x243610, Func Offset: 0x100
	// Line 411, Address: 0x24361c, Func Offset: 0x10c
	// Line 416, Address: 0x243628, Func Offset: 0x118
	// Line 417, Address: 0x24362c, Func Offset: 0x11c
	// Line 428, Address: 0x24363c, Func Offset: 0x12c
	// Line 422, Address: 0x243640, Func Offset: 0x130
	// Line 421, Address: 0x243644, Func Offset: 0x134
	// Line 422, Address: 0x243648, Func Offset: 0x138
	// Line 428, Address: 0x24364c, Func Offset: 0x13c
	// Line 429, Address: 0x243658, Func Offset: 0x148
	// Line 432, Address: 0x243664, Func Offset: 0x154
	// Line 435, Address: 0x243670, Func Offset: 0x160
	// Line 436, Address: 0x243698, Func Offset: 0x188
	// Line 437, Address: 0x2436a0, Func Offset: 0x190
	// Line 438, Address: 0x2436a4, Func Offset: 0x194
	// Line 443, Address: 0x2436a8, Func Offset: 0x198
	// Line 447, Address: 0x2436b0, Func Offset: 0x1a0
	// Line 443, Address: 0x2436b8, Func Offset: 0x1a8
	// Line 449, Address: 0x2436f0, Func Offset: 0x1e0
	// Line 451, Address: 0x2436fc, Func Offset: 0x1ec
	// Line 453, Address: 0x243708, Func Offset: 0x1f8
	// Line 454, Address: 0x243718, Func Offset: 0x208
	// Line 459, Address: 0x243728, Func Offset: 0x218
	// Line 460, Address: 0x243738, Func Offset: 0x228
	// Line 461, Address: 0x243750, Func Offset: 0x240
	// Line 462, Address: 0x243758, Func Offset: 0x248
	// Line 463, Address: 0x24376c, Func Offset: 0x25c
	// Line 464, Address: 0x243770, Func Offset: 0x260
	// Func End, Address: 0x243794, Func Offset: 0x284
}

// 
// Start address: 0x2437a0
void MapInterpolateData(_anon3* character, _anon8* head_0, _anon8* head_1, float interp_u)
{
	int kno;
	_anon2* character_head;
	void* character_head0;
	void* character_head1;
	_anon1* type_map;
	_anon7* key_info;
	void* target;
	int key_type;
	void* key0;
	void* key1;
	// Line 469, Address: 0x2437a0, Func Offset: 0
	// Line 482, Address: 0x2437c0, Func Offset: 0x20
	// Line 469, Address: 0x2437c4, Func Offset: 0x24
	// Line 471, Address: 0x2437d8, Func Offset: 0x38
	// Line 482, Address: 0x2437e0, Func Offset: 0x40
	// Line 471, Address: 0x2437e4, Func Offset: 0x44
	// Line 476, Address: 0x2437e8, Func Offset: 0x48
	// Line 482, Address: 0x2437ec, Func Offset: 0x4c
	// Line 472, Address: 0x2437f0, Func Offset: 0x50
	// Line 473, Address: 0x2437f4, Func Offset: 0x54
	// Line 482, Address: 0x2437f8, Func Offset: 0x58
	// Line 489, Address: 0x243800, Func Offset: 0x60
	// Line 484, Address: 0x243804, Func Offset: 0x64
	// Line 489, Address: 0x243808, Func Offset: 0x68
	// Line 484, Address: 0x24380c, Func Offset: 0x6c
	// Line 485, Address: 0x243810, Func Offset: 0x70
	// Line 489, Address: 0x243814, Func Offset: 0x74
	// Line 490, Address: 0x24381c, Func Offset: 0x7c
	// Line 491, Address: 0x243828, Func Offset: 0x88
	// Line 492, Address: 0x24382c, Func Offset: 0x8c
	// Line 494, Address: 0x243830, Func Offset: 0x90
	// Line 496, Address: 0x24383c, Func Offset: 0x9c
	// Line 497, Address: 0x243840, Func Offset: 0xa0
	// Line 498, Address: 0x243848, Func Offset: 0xa8
	// Line 500, Address: 0x243850, Func Offset: 0xb0
	// Line 501, Address: 0x24385c, Func Offset: 0xbc
	// Line 500, Address: 0x243860, Func Offset: 0xc0
	// Line 501, Address: 0x243864, Func Offset: 0xc4
	// Line 502, Address: 0x243874, Func Offset: 0xd4
	// Line 503, Address: 0x24387c, Func Offset: 0xdc
	// Line 504, Address: 0x243890, Func Offset: 0xf0
	// Line 505, Address: 0x2438a8, Func Offset: 0x108
	// Func End, Address: 0x2438dc, Func Offset: 0x13c
}

// 
// Start address: 0x2438e0
void* NoneMapper()
{
	// Line 512, Address: 0x2438e0, Func Offset: 0
	// Func End, Address: 0x2438e8, Func Offset: 0x8
}

// 
// Start address: 0x2438f0
void* BoneMapper(void* chara_, unsigned int mapping_no)
{
	sgAnime* anm;
	// Line 516, Address: 0x2438f0, Func Offset: 0
	// Line 518, Address: 0x2438fc, Func Offset: 0xc
	// Line 519, Address: 0x243904, Func Offset: 0x14
	// Line 520, Address: 0x24390c, Func Offset: 0x1c
	// Line 521, Address: 0x243918, Func Offset: 0x28
	// Line 523, Address: 0x243934, Func Offset: 0x44
	// Line 525, Address: 0x243958, Func Offset: 0x68
	// Func End, Address: 0x243968, Func Offset: 0x78
}

// 
// Start address: 0x243970
void* ClusterMapper(void* chara_, unsigned int mapping_no)
{
	sgAnime* anm;
	// Line 529, Address: 0x243970, Func Offset: 0
	// Line 531, Address: 0x24397c, Func Offset: 0xc
	// Line 532, Address: 0x243984, Func Offset: 0x14
	// Line 533, Address: 0x243998, Func Offset: 0x28
	// Line 535, Address: 0x2439b4, Func Offset: 0x44
	// Line 537, Address: 0x2439d0, Func Offset: 0x60
	// Func End, Address: 0x2439e0, Func Offset: 0x70
}

// 
// Start address: 0x2439e0
void* TexAnimeMapper(void* chara_, unsigned int mapping_no)
{
	sgAnime* anm;
	// Line 541, Address: 0x2439e0, Func Offset: 0
	// Line 543, Address: 0x2439ec, Func Offset: 0xc
	// Line 544, Address: 0x2439f4, Func Offset: 0x14
	// Line 545, Address: 0x243a08, Func Offset: 0x28
	// Line 547, Address: 0x243a24, Func Offset: 0x44
	// Line 549, Address: 0x243a40, Func Offset: 0x60
	// Func End, Address: 0x243a50, Func Offset: 0x70
}

// 
// Start address: 0x243a50
void* CameraCoordMapper(void* target_)
{
	// Line 556, Address: 0x243a50, Func Offset: 0
	// Func End, Address: 0x243a58, Func Offset: 0x8
}

// 
// Start address: 0x243a60
void* CameraFloatMapper(void* target_, unsigned int mapping_no)
{
	// Line 562, Address: 0x243a60, Func Offset: 0
	// Line 563, Address: 0x243a68, Func Offset: 0x8
	// Func End, Address: 0x243a70, Func Offset: 0x10
}

// 
// Start address: 0x243a70
void* CameraShortMapper(void* target_, unsigned int mapping_no)
{
	// Line 567, Address: 0x243a70, Func Offset: 0
	// Line 568, Address: 0x243a78, Func Offset: 0x8
	// Func End, Address: 0x243a80, Func Offset: 0x10
}

// 
// Start address: 0x243a80
void* LightCoordMapper(void* target_)
{
	// Line 575, Address: 0x243a80, Func Offset: 0
	// Func End, Address: 0x243a88, Func Offset: 0x8
}

// 
// Start address: 0x243a90
void* LightColorMapper(void* target_)
{
	// Line 582, Address: 0x243a90, Func Offset: 0
	// Func End, Address: 0x243a98, Func Offset: 0x8
}

// 
// Start address: 0x243aa0
void* LightKindMapper(void* target_)
{
	// Line 590, Address: 0x243aa0, Func Offset: 0
	// Func End, Address: 0x243aa8, Func Offset: 0x8
}

// 
// Start address: 0x243ab0
void* LightFloatMapper(void* target_, unsigned int mapping_no)
{
	// Line 597, Address: 0x243ab0, Func Offset: 0
	// Line 598, Address: 0x243ab8, Func Offset: 0x8
	// Func End, Address: 0x243ac0, Func Offset: 0x10
}

// 
// Start address: 0x243ac0
void NoneInterp()
{
	// Line 605, Address: 0x243ac0, Func Offset: 0
	// Func End, Address: 0x243ac8, Func Offset: 0x8
}

// 
// Start address: 0x243ad0
void BoneAbsPositionLinearInterp(void* sk, void* key0_, void* key1_, float u)
{
	float val[4];
	sgVectorLinearKey* key0;
	sgVectorLinearKey* key1;
	float offset[4];
	_anon10 qt;
	// Line 615, Address: 0x243ad0, Func Offset: 0
	// Line 620, Address: 0x243ae0, Func Offset: 0x10
	// Line 621, Address: 0x243ae8, Func Offset: 0x18
	// Line 623, Address: 0x243b04, Func Offset: 0x34
	// Line 625, Address: 0x243b14, Func Offset: 0x44
	// Line 626, Address: 0x243b1c, Func Offset: 0x4c
	// Line 627, Address: 0x243b34, Func Offset: 0x64
	// Line 628, Address: 0x243b40, Func Offset: 0x70
	// Line 631, Address: 0x243b60, Func Offset: 0x90
	// Line 632, Address: 0x243b70, Func Offset: 0xa0
	// Line 633, Address: 0x243b7c, Func Offset: 0xac
	// Line 632, Address: 0x243b80, Func Offset: 0xb0
	// Line 633, Address: 0x243b88, Func Offset: 0xb8
	// Line 632, Address: 0x243b8c, Func Offset: 0xbc
	// Line 633, Address: 0x243b94, Func Offset: 0xc4
	// Line 635, Address: 0x243b9c, Func Offset: 0xcc
	// Line 637, Address: 0x243ba0, Func Offset: 0xd0
	// Line 638, Address: 0x243bac, Func Offset: 0xdc
	// Func End, Address: 0x243bbc, Func Offset: 0xec
}

// 
// Start address: 0x243bc0
void BoneAbsRotLinearInterp(void* sk, void* key0_, void* key1_, float u)
{
	float val[4];
	_anon10 qt;
	// Line 643, Address: 0x243bc0, Func Offset: 0
	// Line 648, Address: 0x243bd0, Func Offset: 0x10
	// Line 650, Address: 0x243bd8, Func Offset: 0x18
	// Line 651, Address: 0x243be8, Func Offset: 0x28
	// Line 652, Address: 0x243bf4, Func Offset: 0x34
	// Line 651, Address: 0x243bf8, Func Offset: 0x38
	// Line 652, Address: 0x243c00, Func Offset: 0x40
	// Line 651, Address: 0x243c04, Func Offset: 0x44
	// Line 652, Address: 0x243c0c, Func Offset: 0x4c
	// Line 653, Address: 0x243c14, Func Offset: 0x54
	// Line 655, Address: 0x243c18, Func Offset: 0x58
	// Line 656, Address: 0x243c24, Func Offset: 0x64
	// Func End, Address: 0x243c34, Func Offset: 0x74
}

// 
// Start address: 0x243c40
void BoneAbsRotS15LinearInterp(void* sk, void* key0_, void* key1_, float u)
{
	float val[4];
	_anon10 qt;
	// Line 661, Address: 0x243c40, Func Offset: 0
	// Line 666, Address: 0x243c50, Func Offset: 0x10
	// Line 668, Address: 0x243c58, Func Offset: 0x18
	// Line 669, Address: 0x243c68, Func Offset: 0x28
	// Line 670, Address: 0x243c74, Func Offset: 0x34
	// Line 669, Address: 0x243c78, Func Offset: 0x38
	// Line 670, Address: 0x243c80, Func Offset: 0x40
	// Line 669, Address: 0x243c84, Func Offset: 0x44
	// Line 670, Address: 0x243c8c, Func Offset: 0x4c
	// Line 671, Address: 0x243c94, Func Offset: 0x54
	// Line 673, Address: 0x243c98, Func Offset: 0x58
	// Line 674, Address: 0x243ca4, Func Offset: 0x64
	// Func End, Address: 0x243cb4, Func Offset: 0x74
}

// 
// Start address: 0x243cc0
void BoneScaleLinearInterp(void* sk, void* key0_, void* key1_, float u)
{
	float val[4];
	// Line 680, Address: 0x243cc0, Func Offset: 0
	// Line 685, Address: 0x243cd0, Func Offset: 0x10
	// Line 686, Address: 0x243cd8, Func Offset: 0x18
	// Line 687, Address: 0x243ce4, Func Offset: 0x24
	// Func End, Address: 0x243cf4, Func Offset: 0x34
}

// 
// Start address: 0x243d00
void IntLinearInterp(void* out, void* key0_)
{
	// Line 700, Address: 0x243d00, Func Offset: 0
	// Line 701, Address: 0x243d04, Func Offset: 0x4
	// Func End, Address: 0x243d0c, Func Offset: 0xc
}

// 
// Start address: 0x243d10
void ShortLinearInterp(void* out, void* key0_)
{
	// Line 712, Address: 0x243d10, Func Offset: 0
	// Line 713, Address: 0x243d14, Func Offset: 0x4
	// Func End, Address: 0x243d1c, Func Offset: 0xc
}

// 
// Start address: 0x243d20
void FloatLinearInterp(void* out, void* key0_, void* key1_, float u)
{
	// Line 723, Address: 0x243d20, Func Offset: 0
	// Func End, Address: 0x243d28, Func Offset: 0x8
}

// 
// Start address: 0x243d30
void FloatVectorStepInterp(void* out, void* key0_, void* key1_, float u)
{
	// Line 735, Address: 0x243d30, Func Offset: 0
	// Func End, Address: 0x243d38, Func Offset: 0x8
}

