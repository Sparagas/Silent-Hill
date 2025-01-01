typedef struct _anon0;
typedef struct _anon1;
typedef struct AllData;
typedef struct Part;
typedef struct NDrawData;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _sceDmaTag;
typedef struct SDrawData;
typedef struct Light;
typedef struct _anon4;
typedef struct Model;
typedef struct DSetupData;
typedef struct ModelWork;
typedef struct ELightData;
typedef struct Data_0;
typedef struct EDrawData;
typedef struct ClusterData;
typedef struct Model3Env;
typedef struct LambertData;
typedef struct SprData;
typedef struct TextureParam;
typedef struct Data_1;
typedef struct Data_2;
typedef struct PLightData;
typedef struct Data_3;
typedef struct Model3Junk;
typedef struct EMapData;
typedef struct SMapData;
typedef union Q;
typedef struct Data_4;
typedef struct ModelCommonWork;

typedef int(*type_3)(void*, void*, void*);
typedef void(*type_10)(_anon4*, int, int, float*);

typedef float type_0[4];
typedef unsigned int type_1[3];
typedef int type_2[4];
typedef unsigned int type_4[3];
typedef <unknown fundamental type (0xa510)> type_5[4];
typedef PLightData type_6[4];
typedef unsigned int type_7[3];
typedef ELightData type_8[8];
typedef unsigned int type_9[3];
typedef unsigned int type_11[3];
typedef unsigned int type_12[3];
typedef unsigned int type_13[4];
typedef AllData type_14[2];
typedef unsigned int type_15[4];
typedef unsigned int type_16[3];
typedef <unknown fundamental type (0xa510)> type_17[64];
typedef unsigned char type_18[1];
typedef unsigned char type_19[2];
typedef NDrawData type_20[2];
typedef unsigned int type_21[3];
typedef NDrawData type_22[2];
typedef <unknown fundamental type (0xa510)> type_23[0];
typedef int type_24[4];
typedef float type_25[4][4];
typedef float type_26[4];
typedef float type_27[4];
typedef float type_28[4][2];
typedef unsigned long type_29[2];
typedef unsigned int type_30[4];
typedef float type_31[4];
typedef unsigned short type_32[8];
typedef float type_33[4][2];
typedef unsigned char type_34[16];
typedef long type_35[2];
typedef int type_36[4];
typedef short type_37[8];
typedef float type_38[4][4][128];
typedef unsigned int type_39[2];
typedef char type_40[16];
typedef float type_41[4][4][256];
typedef float type_42[4][2048];
typedef _anon4 type_43[64];
typedef unsigned long type_44[2];
typedef unsigned long type_45[2];

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long tex1;
	unsigned long clamp;
	unsigned long alpha;
};

struct AllData
{
	PLightData plight[4];
	ELightData elight[8];
	LambertData lambert;
	EMapData emap;
	SMapData smap;
	DSetupData dsetup;
	EDrawData edraw;
	SDrawData sdraw;
	SDrawData bdraw;
};

struct Part
{
	unsigned int size;
	unsigned int type;
	unsigned int packet_offset;
	unsigned int packet_qwc;
	unsigned int xtop;
	unsigned int n_cluster_data;
	unsigned int cluster_data_offset;
	unsigned int n_skeletons;
	unsigned int skeletons_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int data_skeletons_offset;
	unsigned int data_skeleton_pairs_offset;
	unsigned int n_textures;
	unsigned int text_pos_indices_offset;
	unsigned int texture_params_offset;
	unsigned char shading_type;
	unsigned char specular_pos;
	unsigned char equipment_id;
	unsigned char hoge[1];
	unsigned char backclip;
	unsigned char envmap_param;
	unsigned char reserved[2];
	float phong_param_a;
	float phong_param_b;
	float blinn_param;
	unsigned int padding[3];
	float diffuse[4];
	float ambient[4];
	float specular[4];
};

struct NDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
};

struct _anon2
{
	struct
	{
		unsigned int DIR : 1;
		unsigned int p0 : 1;
		unsigned int MOD : 2;
		unsigned int ASP : 2;
		unsigned int TTE : 1;
		unsigned int TIE : 1;
		unsigned int STR : 1;
		unsigned int p1 : 7;
		unsigned int TAG : 16;
	};
};

struct _anon3
{
	_anon2 chcr;
	unsigned int p0[3];
	void* madr;
	unsigned int p1[3];
	unsigned int qwc;
	unsigned int p2[3];
	_sceDmaTag* tadr;
	unsigned int p3[3];
	void* as0;
	unsigned int p4[3];
	void* as1;
	unsigned int p5[3];
	unsigned int p6[4];
	unsigned int p7[4];
	void* sadr;
	unsigned int p8[3];
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct SDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
	Q reflection_color;
};

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	int fake;
	float shadow_length;
	float shadow_density;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int hits_offset;
	unsigned int reserved_1d;
	unsigned int tanmparams;
	unsigned int textureextras;
};

struct DSetupData
{
	float vsp[4][2];
	float vcp[4][2];
	Q xyz_mul;
	Q xyz_add;
	Q rgba_max;
	Q waittag;
};

struct ModelWork
{
	unsigned int id;
	float matrices[4][4];
	float* cluster_weights;
	float crops[4];
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
	void(*texture_load_func)(_anon4*, int, int, float*);
};

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
};

struct Data_0
{
	Q specular;
};

struct EDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
};

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
};

struct Model3Env
{
	unsigned long vu1_test;
	unsigned long vu0_test;
	unsigned long vu1_alpha;
	unsigned long vu0_alpha;
	unsigned long vu1_fba;
	unsigned long vu0_fba;
	unsigned long vu1_tfx;
	unsigned long vu0_tfx;
	unsigned char vu1_backclip_force;
	unsigned char vu1_backclip_value;
	unsigned char vu0_backclip_force;
	unsigned char vu0_backclip_value;
	unsigned char normalize_normal;
	unsigned char update_z_first;
};

struct LambertData
{
	float nlm[4][4];
	float lcm[4][4];
	float rgba_max[4];
	float global_ambient[4];
};

struct SprData
{
	NDrawData ndraw[2];
	NDrawData odraw[2];
};

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
};

struct Data_1
{
	float param[4];
};

struct Data_2
{
	float diffuse[4];
	float ambient[4];
	float param[4];
};

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
};

struct Data_3
{
	Q specular;
};

struct Model3Junk
{
	float xyz_min[4];
	float xyz_max[4];
	float xyz_min_wide[4];
	float xyz_max_wide[4];
	float rgba_max[4];
	float global_ambient[4];
	<unknown fundamental type (0xa510)> giftag_0;
	<unknown fundamental type (0xa510)> giftag_1;
	<unknown fundamental type (0xa510)> giftag_2;
	float camera[4];
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
	float vwm[4][4];
	void* vi00;
	void* xtop;
	float cluster_nodes[4];
	unsigned int fogcol;
	unsigned char view_clip_and;
	unsigned char view_clip_or;
	unsigned char gs_clip_and;
	unsigned char gs_clip_or;
};

struct EMapData
{
	float vwm[4][4];
	float mag[4];
	float offset[4];
};

struct SMapData
{
	float nhm[4][4];
};

union Q
{
	<unknown fundamental type (0xa510)> u128;
	unsigned long u64[2];
	unsigned int u32[4];
	unsigned short u16[8];
	unsigned char u8[16];
	long s64[2];
	int s32[4];
	short s16[8];
	char s8[16];
	int q[4];
	float fv[4];
	int iv[4];
};

struct Data_4
{
	Q rgba;
};

struct ModelCommonWork
{
	float skeleton_matrices[4][4][128];
	float envelope_matrices[4][4][256];
	float cluster_nodes[4][2048];
	float top_skeleton_matrix[4][4];
	float vsp[4][2];
	float vcp[4][2];
	float vcp_gs[4][2];
	_anon4 text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

SprData* spr_data;
<unknown fundamental type (0xa510)> model3_mpg1_view_load[0];
Model3Junk model3_junk;
SprData spr_data_mem;
AllData all_data_db[2];
Model3Env model3_env;
ModelCommonWork* model_common_work;
AllData* all_data;
int all_data_page;
unsigned int xitop;
int size_pk;
unsigned long* sg_packet_cur;
<unknown fundamental type (0xa510)> tmp_pk[64];
int eileen_special;
unsigned int prev_xtop;

void Model3LoadMpg1();
void InitAllDataOne(AllData* p);
void InitSprData(SprData* p);
void InitData();
void MakeData();
void InitEnv(_anon0* pk);
void MakeVu1PartTransferPacket(Part* part, _anon0* pk);
void MakeLambertShadingPacket(Part* part, _anon0* pk);
void EileenSpMakePacket(_anon1* mparams);
void EileenSpTexBit(int texbit);
void MakeNormalPacket(Part* part, _anon0* pk);
void MakeEnvironPacket(Part* part, _anon0* pk);
void MakeSpecularPacket(Part* part, _anon0* pk);
void MakeBaseSpecularPacket(Part* part, _anon0* pk);
void MakeOverPacket(Part* part, _anon0* pk);
void MakeDrawPacket(Part* part, _anon0* pk);
void DrawPart(Part* part, _anon0* pk);
void MakeDrawPacketZ(Part* part, _anon0* pk);
void DrawPartZ(Part* part, _anon0* pk);
void DrawParts(Model* model, ModelWork* work);
void Model3DrawVu1Parts(Model* model, ModelWork* work);
void Model3Vu1InitialzeData();

// 
// Start address: 0x1512a0
void Model3LoadMpg1()
{
	_anon0 packet;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 187, Address: 0x1512a0, Func Offset: 0
	// Line 190, Address: 0x1512a4, Func Offset: 0x4
	// Line 187, Address: 0x1512a8, Func Offset: 0x8
	// Line 190, Address: 0x1512ac, Func Offset: 0xc
	// Line 193, Address: 0x1512b8, Func Offset: 0x18
	// Line 197, Address: 0x1512d4, Func Offset: 0x34
	// Line 200, Address: 0x1512e8, Func Offset: 0x48
	// Line 201, Address: 0x1512f4, Func Offset: 0x54
	// Line 202, Address: 0x1512fc, Func Offset: 0x5c
	// Line 204, Address: 0x151308, Func Offset: 0x68
	// Line 205, Address: 0x151318, Func Offset: 0x78
	// Func End, Address: 0x151324, Func Offset: 0x84
}

// 
// Start address: 0x151330
void InitAllDataOne(AllData* p)
{
	DSetupData* data;
	EDrawData* data;
	SDrawData* data;
	SDrawData* data;
	// Line 212, Address: 0x151330, Func Offset: 0
	// Line 216, Address: 0x151334, Func Offset: 0x4
	// Line 212, Address: 0x151338, Func Offset: 0x8
	// Line 216, Address: 0x15133c, Func Offset: 0xc
	// Line 212, Address: 0x151340, Func Offset: 0x10
	// Line 216, Address: 0x151344, Func Offset: 0x14
	// Line 212, Address: 0x151348, Func Offset: 0x18
	// Line 216, Address: 0x151354, Func Offset: 0x24
	// Line 221, Address: 0x15136c, Func Offset: 0x3c
	// Line 222, Address: 0x151370, Func Offset: 0x40
	// Line 221, Address: 0x151374, Func Offset: 0x44
	// Line 222, Address: 0x151380, Func Offset: 0x50
	// Line 221, Address: 0x151384, Func Offset: 0x54
	// Line 222, Address: 0x151388, Func Offset: 0x58
	// Line 230, Address: 0x151390, Func Offset: 0x60
	// Line 223, Address: 0x151394, Func Offset: 0x64
	// Line 230, Address: 0x151398, Func Offset: 0x68
	// Line 223, Address: 0x15139c, Func Offset: 0x6c
	// Line 230, Address: 0x1513a0, Func Offset: 0x70
	// Line 224, Address: 0x1513ac, Func Offset: 0x7c
	// Line 231, Address: 0x1513b0, Func Offset: 0x80
	// Line 254, Address: 0x1513b4, Func Offset: 0x84
	// Line 231, Address: 0x1513b8, Func Offset: 0x88
	// Line 254, Address: 0x1513bc, Func Offset: 0x8c
	// Line 231, Address: 0x1513c0, Func Offset: 0x90
	// Line 277, Address: 0x1513c4, Func Offset: 0x94
	// Line 231, Address: 0x1513c8, Func Offset: 0x98
	// Line 254, Address: 0x1513cc, Func Offset: 0x9c
	// Line 235, Address: 0x1513d0, Func Offset: 0xa0
	// Line 277, Address: 0x1513d4, Func Offset: 0xa4
	// Line 235, Address: 0x1513d8, Func Offset: 0xa8
	// Line 232, Address: 0x1513dc, Func Offset: 0xac
	// Line 231, Address: 0x1513e0, Func Offset: 0xb0
	// Line 235, Address: 0x1513e4, Func Offset: 0xb4
	// Line 232, Address: 0x1513e8, Func Offset: 0xb8
	// Line 235, Address: 0x1513ec, Func Offset: 0xbc
	// Line 233, Address: 0x1513f0, Func Offset: 0xc0
	// Line 235, Address: 0x1513f4, Func Offset: 0xc4
	// Line 234, Address: 0x1513f8, Func Offset: 0xc8
	// Line 238, Address: 0x1513fc, Func Offset: 0xcc
	// Line 235, Address: 0x151404, Func Offset: 0xd4
	// Line 238, Address: 0x151408, Func Offset: 0xd8
	// Line 240, Address: 0x15140c, Func Offset: 0xdc
	// Line 239, Address: 0x151410, Func Offset: 0xe0
	// Line 241, Address: 0x151414, Func Offset: 0xe4
	// Line 240, Address: 0x151418, Func Offset: 0xe8
	// Line 242, Address: 0x15141c, Func Offset: 0xec
	// Line 241, Address: 0x151420, Func Offset: 0xf0
	// Line 243, Address: 0x151424, Func Offset: 0xf4
	// Line 242, Address: 0x151428, Func Offset: 0xf8
	// Line 244, Address: 0x15142c, Func Offset: 0xfc
	// Line 243, Address: 0x151430, Func Offset: 0x100
	// Line 245, Address: 0x151434, Func Offset: 0x104
	// Line 244, Address: 0x151438, Func Offset: 0x108
	// Line 246, Address: 0x15143c, Func Offset: 0x10c
	// Line 245, Address: 0x151440, Func Offset: 0x110
	// Line 248, Address: 0x151444, Func Offset: 0x114
	// Line 246, Address: 0x151448, Func Offset: 0x118
	// Line 254, Address: 0x15144c, Func Offset: 0x11c
	// Line 247, Address: 0x151450, Func Offset: 0x120
	// Line 277, Address: 0x151454, Func Offset: 0x124
	// Line 248, Address: 0x151458, Func Offset: 0x128
	// Line 277, Address: 0x15145c, Func Offset: 0x12c
	// Line 255, Address: 0x151460, Func Offset: 0x130
	// Line 280, Address: 0x151464, Func Offset: 0x134
	// Line 256, Address: 0x151468, Func Offset: 0x138
	// Line 280, Address: 0x15146c, Func Offset: 0x13c
	// Line 257, Address: 0x151470, Func Offset: 0x140
	// Line 280, Address: 0x151474, Func Offset: 0x144
	// Line 258, Address: 0x151478, Func Offset: 0x148
	// Line 267, Address: 0x15147c, Func Offset: 0x14c
	// Line 259, Address: 0x151480, Func Offset: 0x150
	// Line 269, Address: 0x151484, Func Offset: 0x154
	// Line 262, Address: 0x151488, Func Offset: 0x158
	// Line 280, Address: 0x15148c, Func Offset: 0x15c
	// Line 263, Address: 0x151490, Func Offset: 0x160
	// Line 264, Address: 0x151494, Func Offset: 0x164
	// Line 265, Address: 0x151498, Func Offset: 0x168
	// Line 266, Address: 0x15149c, Func Offset: 0x16c
	// Line 267, Address: 0x1514a0, Func Offset: 0x170
	// Line 268, Address: 0x1514a4, Func Offset: 0x174
	// Line 269, Address: 0x1514a8, Func Offset: 0x178
	// Line 270, Address: 0x1514ac, Func Offset: 0x17c
	// Line 271, Address: 0x1514b0, Func Offset: 0x180
	// Line 272, Address: 0x1514b4, Func Offset: 0x184
	// Line 278, Address: 0x1514b8, Func Offset: 0x188
	// Line 279, Address: 0x1514bc, Func Offset: 0x18c
	// Line 280, Address: 0x1514c0, Func Offset: 0x190
	// Line 283, Address: 0x1514c4, Func Offset: 0x194
	// Line 284, Address: 0x1514c8, Func Offset: 0x198
	// Line 285, Address: 0x1514cc, Func Offset: 0x19c
	// Line 286, Address: 0x1514d0, Func Offset: 0x1a0
	// Line 287, Address: 0x1514d4, Func Offset: 0x1a4
	// Line 288, Address: 0x1514d8, Func Offset: 0x1a8
	// Line 289, Address: 0x1514dc, Func Offset: 0x1ac
	// Line 290, Address: 0x1514e0, Func Offset: 0x1b0
	// Line 291, Address: 0x1514e4, Func Offset: 0x1b4
	// Line 292, Address: 0x1514e8, Func Offset: 0x1b8
	// Line 293, Address: 0x1514ec, Func Offset: 0x1bc
	// Line 294, Address: 0x1514f0, Func Offset: 0x1c0
	// Line 295, Address: 0x1514f4, Func Offset: 0x1c4
	// Line 297, Address: 0x1514f8, Func Offset: 0x1c8
	// Func End, Address: 0x151510, Func Offset: 0x1e0
}

// 
// Start address: 0x151510
void InitSprData(SprData* p)
{
	int i;
	NDrawData* data;
	NDrawData* data;
	// Line 304, Address: 0x151510, Func Offset: 0
	// Line 308, Address: 0x151514, Func Offset: 0x4
	// Line 304, Address: 0x151518, Func Offset: 0x8
	// Line 310, Address: 0x151520, Func Offset: 0x10
	// Line 309, Address: 0x151524, Func Offset: 0x14
	// Line 310, Address: 0x151528, Func Offset: 0x18
	// Line 311, Address: 0x15152c, Func Offset: 0x1c
	// Line 310, Address: 0x151530, Func Offset: 0x20
	// Line 312, Address: 0x151534, Func Offset: 0x24
	// Line 310, Address: 0x151538, Func Offset: 0x28
	// Line 319, Address: 0x15153c, Func Offset: 0x2c
	// Line 314, Address: 0x151540, Func Offset: 0x30
	// Line 321, Address: 0x15154c, Func Offset: 0x3c
	// Line 314, Address: 0x151550, Func Offset: 0x40
	// Line 323, Address: 0x151554, Func Offset: 0x44
	// Line 314, Address: 0x151558, Func Offset: 0x48
	// Line 317, Address: 0x15155c, Func Offset: 0x4c
	// Line 325, Address: 0x151564, Func Offset: 0x54
	// Line 327, Address: 0x151568, Func Offset: 0x58
	// Line 308, Address: 0x15156c, Func Offset: 0x5c
	// Line 309, Address: 0x151570, Func Offset: 0x60
	// Line 328, Address: 0x151578, Func Offset: 0x68
	// Line 309, Address: 0x15157c, Func Offset: 0x6c
	// Line 327, Address: 0x151580, Func Offset: 0x70
	// Line 310, Address: 0x151584, Func Offset: 0x74
	// Line 328, Address: 0x151588, Func Offset: 0x78
	// Line 311, Address: 0x15158c, Func Offset: 0x7c
	// Line 312, Address: 0x151590, Func Offset: 0x80
	// Line 313, Address: 0x151594, Func Offset: 0x84
	// Line 314, Address: 0x151598, Func Offset: 0x88
	// Line 317, Address: 0x15159c, Func Offset: 0x8c
	// Line 318, Address: 0x1515a0, Func Offset: 0x90
	// Line 319, Address: 0x1515a4, Func Offset: 0x94
	// Line 320, Address: 0x1515a8, Func Offset: 0x98
	// Line 321, Address: 0x1515ac, Func Offset: 0x9c
	// Line 322, Address: 0x1515b0, Func Offset: 0xa0
	// Line 323, Address: 0x1515b4, Func Offset: 0xa4
	// Line 324, Address: 0x1515b8, Func Offset: 0xa8
	// Line 325, Address: 0x1515bc, Func Offset: 0xac
	// Line 326, Address: 0x1515c0, Func Offset: 0xb0
	// Line 328, Address: 0x1515c4, Func Offset: 0xb4
	// Line 331, Address: 0x1515cc, Func Offset: 0xbc
	// Line 333, Address: 0x1515d0, Func Offset: 0xc0
	// Line 332, Address: 0x1515d4, Func Offset: 0xc4
	// Line 333, Address: 0x1515d8, Func Offset: 0xc8
	// Line 334, Address: 0x1515dc, Func Offset: 0xcc
	// Line 333, Address: 0x1515e0, Func Offset: 0xd0
	// Line 335, Address: 0x1515e4, Func Offset: 0xd4
	// Line 333, Address: 0x1515e8, Func Offset: 0xd8
	// Line 342, Address: 0x1515ec, Func Offset: 0xdc
	// Line 337, Address: 0x1515f0, Func Offset: 0xe0
	// Line 344, Address: 0x1515fc, Func Offset: 0xec
	// Line 337, Address: 0x151600, Func Offset: 0xf0
	// Line 346, Address: 0x151604, Func Offset: 0xf4
	// Line 337, Address: 0x151608, Func Offset: 0xf8
	// Line 340, Address: 0x15160c, Func Offset: 0xfc
	// Line 347, Address: 0x151614, Func Offset: 0x104
	// Line 348, Address: 0x151618, Func Offset: 0x108
	// Line 350, Address: 0x15161c, Func Offset: 0x10c
	// Line 332, Address: 0x151620, Func Offset: 0x110
	// Line 351, Address: 0x151628, Func Offset: 0x118
	// Line 332, Address: 0x15162c, Func Offset: 0x11c
	// Line 350, Address: 0x151630, Func Offset: 0x120
	// Line 332, Address: 0x151634, Func Offset: 0x124
	// Line 333, Address: 0x151638, Func Offset: 0x128
	// Line 351, Address: 0x15163c, Func Offset: 0x12c
	// Line 334, Address: 0x151640, Func Offset: 0x130
	// Line 335, Address: 0x151644, Func Offset: 0x134
	// Line 336, Address: 0x151648, Func Offset: 0x138
	// Line 337, Address: 0x15164c, Func Offset: 0x13c
	// Line 340, Address: 0x151650, Func Offset: 0x140
	// Line 341, Address: 0x151654, Func Offset: 0x144
	// Line 342, Address: 0x151658, Func Offset: 0x148
	// Line 343, Address: 0x15165c, Func Offset: 0x14c
	// Line 344, Address: 0x151660, Func Offset: 0x150
	// Line 345, Address: 0x151664, Func Offset: 0x154
	// Line 346, Address: 0x151668, Func Offset: 0x158
	// Line 347, Address: 0x15166c, Func Offset: 0x15c
	// Line 348, Address: 0x151670, Func Offset: 0x160
	// Line 349, Address: 0x151674, Func Offset: 0x164
	// Line 351, Address: 0x151678, Func Offset: 0x168
	// Line 352, Address: 0x151680, Func Offset: 0x170
	// Func End, Address: 0x15168c, Func Offset: 0x17c
}

// 
// Start address: 0x151690
void InitData()
{
	_anon3* toSPR;
	int initialized;
	// Line 359, Address: 0x151690, Func Offset: 0
	// Line 361, Address: 0x151694, Func Offset: 0x4
	// Line 359, Address: 0x151698, Func Offset: 0x8
	// Line 361, Address: 0x15169c, Func Offset: 0xc
	// Line 362, Address: 0x1516a8, Func Offset: 0x18
	// Line 363, Address: 0x1516b0, Func Offset: 0x20
	// Line 364, Address: 0x1516bc, Func Offset: 0x2c
	// Line 366, Address: 0x1516c8, Func Offset: 0x38
	// Line 367, Address: 0x1516d4, Func Offset: 0x44
	// Line 370, Address: 0x1516d8, Func Offset: 0x48
	// Line 371, Address: 0x1516e0, Func Offset: 0x50
	// Line 372, Address: 0x1516e4, Func Offset: 0x54
	// Line 371, Address: 0x1516e8, Func Offset: 0x58
	// Line 372, Address: 0x1516ec, Func Offset: 0x5c
	// Line 371, Address: 0x1516f8, Func Offset: 0x68
	// Line 372, Address: 0x1516fc, Func Offset: 0x6c
	// Line 374, Address: 0x151704, Func Offset: 0x74
	// Func End, Address: 0x151710, Func Offset: 0x80
}

// 
// Start address: 0x151710
void MakeData()
{
	unsigned int fogcol;
	int n_parallels;
	int i;
	PLightData* data;
	int n_extras;
	int i;
	Light* light;
	ELightData* data;
	LambertData* data;
	EMapData* data;
	DSetupData* data;
	EDrawData* edraw;
	SDrawData* sdraw;
	SDrawData* bdraw;
	unsigned long tex0;
	Q c;
	float offset[4];
	float mag[4];
	// Line 381, Address: 0x151710, Func Offset: 0
	// Line 382, Address: 0x151714, Func Offset: 0x4
	// Line 381, Address: 0x151718, Func Offset: 0x8
	// Line 384, Address: 0x151734, Func Offset: 0x24
	// Line 386, Address: 0x15173c, Func Offset: 0x2c
	// Line 390, Address: 0x151764, Func Offset: 0x54
	// Line 392, Address: 0x151770, Func Offset: 0x60
	// Line 393, Address: 0x151780, Func Offset: 0x70
	// Line 397, Address: 0x15178c, Func Offset: 0x7c
	// Line 393, Address: 0x151790, Func Offset: 0x80
	// Line 397, Address: 0x1517a0, Func Offset: 0x90
	// Line 399, Address: 0x1517a8, Func Offset: 0x98
	// Line 400, Address: 0x1517b4, Func Offset: 0xa4
	// Line 405, Address: 0x1517c8, Func Offset: 0xb8
	// Line 407, Address: 0x1517d4, Func Offset: 0xc4
	// Line 408, Address: 0x1517e8, Func Offset: 0xd8
	// Line 409, Address: 0x1517f0, Func Offset: 0xe0
	// Line 408, Address: 0x1517f4, Func Offset: 0xe4
	// Line 409, Address: 0x1517f8, Func Offset: 0xe8
	// Line 414, Address: 0x151800, Func Offset: 0xf0
	// Line 409, Address: 0x151804, Func Offset: 0xf4
	// Line 414, Address: 0x151818, Func Offset: 0x108
	// Line 415, Address: 0x151820, Func Offset: 0x110
	// Line 417, Address: 0x15182c, Func Offset: 0x11c
	// Line 418, Address: 0x151838, Func Offset: 0x128
	// Line 422, Address: 0x15183c, Func Offset: 0x12c
	// Line 421, Address: 0x151844, Func Offset: 0x134
	// Line 418, Address: 0x151848, Func Offset: 0x138
	// Line 419, Address: 0x15184c, Func Offset: 0x13c
	// Line 420, Address: 0x151854, Func Offset: 0x144
	// Line 421, Address: 0x15185c, Func Offset: 0x14c
	// Line 422, Address: 0x151860, Func Offset: 0x150
	// Line 427, Address: 0x151868, Func Offset: 0x158
	// Line 431, Address: 0x151874, Func Offset: 0x164
	// Line 427, Address: 0x151878, Func Offset: 0x168
	// Line 431, Address: 0x151888, Func Offset: 0x178
	// Line 433, Address: 0x151890, Func Offset: 0x180
	// Line 434, Address: 0x15189c, Func Offset: 0x18c
	// Line 442, Address: 0x1518ac, Func Offset: 0x19c
	// Line 443, Address: 0x1518b0, Func Offset: 0x1a0
	// Line 442, Address: 0x1518b4, Func Offset: 0x1a4
	// Line 443, Address: 0x1518bc, Func Offset: 0x1ac
	// Line 442, Address: 0x1518c0, Func Offset: 0x1b0
	// Line 443, Address: 0x1518d0, Func Offset: 0x1c0
	// Line 444, Address: 0x1518d8, Func Offset: 0x1c8
	// Line 445, Address: 0x1518e8, Func Offset: 0x1d8
	// Line 451, Address: 0x1518f8, Func Offset: 0x1e8
	// Line 455, Address: 0x151904, Func Offset: 0x1f4
	// Line 451, Address: 0x151908, Func Offset: 0x1f8
	// Line 455, Address: 0x151914, Func Offset: 0x204
	// Line 461, Address: 0x15191c, Func Offset: 0x20c
	// Line 475, Address: 0x151928, Func Offset: 0x218
	// Line 461, Address: 0x15192c, Func Offset: 0x21c
	// Line 475, Address: 0x151930, Func Offset: 0x220
	// Line 461, Address: 0x151934, Func Offset: 0x224
	// Line 475, Address: 0x151940, Func Offset: 0x230
	// Line 476, Address: 0x151950, Func Offset: 0x240
	// Line 477, Address: 0x151968, Func Offset: 0x258
	// Line 478, Address: 0x151980, Func Offset: 0x270
	// Line 485, Address: 0x1519a4, Func Offset: 0x294
	// Line 500, Address: 0x1519ac, Func Offset: 0x29c
	// Line 485, Address: 0x1519b0, Func Offset: 0x2a0
	// Line 495, Address: 0x1519c4, Func Offset: 0x2b4
	// Line 485, Address: 0x1519cc, Func Offset: 0x2bc
	// Line 495, Address: 0x1519d0, Func Offset: 0x2c0
	// Line 496, Address: 0x1519d8, Func Offset: 0x2c8
	// Line 488, Address: 0x1519dc, Func Offset: 0x2cc
	// Line 496, Address: 0x1519e0, Func Offset: 0x2d0
	// Line 488, Address: 0x1519e4, Func Offset: 0x2d4
	// Line 496, Address: 0x1519e8, Func Offset: 0x2d8
	// Line 488, Address: 0x1519ec, Func Offset: 0x2dc
	// Line 497, Address: 0x1519f4, Func Offset: 0x2e4
	// Line 489, Address: 0x1519f8, Func Offset: 0x2e8
	// Line 497, Address: 0x1519fc, Func Offset: 0x2ec
	// Line 500, Address: 0x151a04, Func Offset: 0x2f4
	// Line 501, Address: 0x151a0c, Func Offset: 0x2fc
	// Line 505, Address: 0x151a10, Func Offset: 0x300
	// Line 502, Address: 0x151a14, Func Offset: 0x304
	// Line 503, Address: 0x151a1c, Func Offset: 0x30c
	// Line 504, Address: 0x151a20, Func Offset: 0x310
	// Line 505, Address: 0x151a28, Func Offset: 0x318
	// Line 510, Address: 0x151a30, Func Offset: 0x320
	// Line 511, Address: 0x151a3c, Func Offset: 0x32c
	// Line 512, Address: 0x151a48, Func Offset: 0x338
	// Line 513, Address: 0x151a4c, Func Offset: 0x33c
	// Line 514, Address: 0x151a50, Func Offset: 0x340
	// Line 515, Address: 0x151a54, Func Offset: 0x344
	// Line 517, Address: 0x151a58, Func Offset: 0x348
	// Func End, Address: 0x151a7c, Func Offset: 0x36c
}

// 
// Start address: 0x151a80
void InitEnv(_anon0* pk)
{
	unsigned long giftag[2];
	// Line 524, Address: 0x151a80, Func Offset: 0
	// Line 529, Address: 0x151a84, Func Offset: 0x4
	// Line 524, Address: 0x151a88, Func Offset: 0x8
	// Line 529, Address: 0x151a90, Func Offset: 0x10
	// Line 530, Address: 0x151a98, Func Offset: 0x18
	// Line 531, Address: 0x151aa4, Func Offset: 0x24
	// Line 532, Address: 0x151ab0, Func Offset: 0x30
	// Line 533, Address: 0x151abc, Func Offset: 0x3c
	// Line 534, Address: 0x151acc, Func Offset: 0x4c
	// Line 535, Address: 0x151ae0, Func Offset: 0x60
	// Line 536, Address: 0x151af4, Func Offset: 0x74
	// Line 537, Address: 0x151b04, Func Offset: 0x84
	// Line 538, Address: 0x151b0c, Func Offset: 0x8c
	// Line 539, Address: 0x151b14, Func Offset: 0x94
	// Func End, Address: 0x151b24, Func Offset: 0xa4
}

// 
// Start address: 0x151b30
void MakeVu1PartTransferPacket(Part* part, _anon0* pk)
{
	int n_cluster_data;
	ClusterData* cluster_data_top;
	float cluster_nodes[4];
	int i;
	unsigned int n;
	float matrices[4][4];
	int n_skeletons;
	unsigned short* skeletons;
	int dst_top;
	int i;
	float envelope_matrices[4][4];
	int n_skeleton_pairs;
	unsigned short* pairs;
	int dst_top;
	int i;
	// Line 546, Address: 0x151b30, Func Offset: 0
	// Line 548, Address: 0x151b34, Func Offset: 0x4
	// Line 546, Address: 0x151b38, Func Offset: 0x8
	// Line 548, Address: 0x151b3c, Func Offset: 0xc
	// Line 546, Address: 0x151b40, Func Offset: 0x10
	// Line 548, Address: 0x151b44, Func Offset: 0x14
	// Line 546, Address: 0x151b48, Func Offset: 0x18
	// Line 548, Address: 0x151b64, Func Offset: 0x34
	// Line 554, Address: 0x151b7c, Func Offset: 0x4c
	// Line 553, Address: 0x151b80, Func Offset: 0x50
	// Line 552, Address: 0x151b84, Func Offset: 0x54
	// Line 556, Address: 0x151b88, Func Offset: 0x58
	// Line 554, Address: 0x151b8c, Func Offset: 0x5c
	// Line 556, Address: 0x151b90, Func Offset: 0x60
	// Line 560, Address: 0x151ba0, Func Offset: 0x70
	// Line 561, Address: 0x151ba4, Func Offset: 0x74
	// Line 564, Address: 0x151bd8, Func Offset: 0xa8
	// Line 569, Address: 0x151be8, Func Offset: 0xb8
	// Line 574, Address: 0x151bf0, Func Offset: 0xc0
	// Line 570, Address: 0x151bf4, Func Offset: 0xc4
	// Line 571, Address: 0x151bf8, Func Offset: 0xc8
	// Line 572, Address: 0x151bfc, Func Offset: 0xcc
	// Line 574, Address: 0x151c00, Func Offset: 0xd0
	// Line 578, Address: 0x151c10, Func Offset: 0xe0
	// Line 581, Address: 0x151c3c, Func Offset: 0x10c
	// Line 578, Address: 0x151c40, Func Offset: 0x110
	// Line 581, Address: 0x151c44, Func Offset: 0x114
	// Line 586, Address: 0x151c50, Func Offset: 0x120
	// Line 591, Address: 0x151c58, Func Offset: 0x128
	// Line 587, Address: 0x151c5c, Func Offset: 0x12c
	// Line 588, Address: 0x151c60, Func Offset: 0x130
	// Line 589, Address: 0x151c64, Func Offset: 0x134
	// Line 586, Address: 0x151c68, Func Offset: 0x138
	// Line 591, Address: 0x151c6c, Func Offset: 0x13c
	// Line 595, Address: 0x151c78, Func Offset: 0x148
	// Line 598, Address: 0x151ca4, Func Offset: 0x174
	// Line 595, Address: 0x151ca8, Func Offset: 0x178
	// Line 598, Address: 0x151cac, Func Offset: 0x17c
	// Line 600, Address: 0x151cb8, Func Offset: 0x188
	// Func End, Address: 0x151ce0, Func Offset: 0x1b0
}

// 
// Start address: 0x151ce0
void MakeLambertShadingPacket(Part* part, _anon0* pk)
{
	int n_parallels;
	int n_extras;
	int i;
	Light* light;
	float brightness;
	Data_2* data;
	// Line 607, Address: 0x151ce0, Func Offset: 0
	// Line 608, Address: 0x151d08, Func Offset: 0x28
	// Line 609, Address: 0x151d10, Func Offset: 0x30
	// Line 613, Address: 0x151d18, Func Offset: 0x38
	// Line 609, Address: 0x151d1c, Func Offset: 0x3c
	// Line 613, Address: 0x151d20, Func Offset: 0x40
	// Line 614, Address: 0x151d30, Func Offset: 0x50
	// Line 617, Address: 0x151d64, Func Offset: 0x84
	// Line 618, Address: 0x151d70, Func Offset: 0x90
	// Line 619, Address: 0x151d88, Func Offset: 0xa8
	// Line 620, Address: 0x151d98, Func Offset: 0xb8
	// Line 621, Address: 0x151d9c, Func Offset: 0xbc
	// Line 620, Address: 0x151da0, Func Offset: 0xc0
	// Line 621, Address: 0x151da4, Func Offset: 0xc4
	// Line 620, Address: 0x151da8, Func Offset: 0xc8
	// Line 621, Address: 0x151db4, Func Offset: 0xd4
	// Line 624, Address: 0x151dc0, Func Offset: 0xe0
	// Line 625, Address: 0x151dd0, Func Offset: 0xf0
	// Line 626, Address: 0x151dd8, Func Offset: 0xf8
	// Line 625, Address: 0x151ddc, Func Offset: 0xfc
	// Line 626, Address: 0x151de0, Func Offset: 0x100
	// Line 629, Address: 0x151e14, Func Offset: 0x134
	// Line 630, Address: 0x151e20, Func Offset: 0x140
	// Line 631, Address: 0x151e38, Func Offset: 0x158
	// Line 633, Address: 0x151e58, Func Offset: 0x178
	// Line 634, Address: 0x151e68, Func Offset: 0x188
	// Line 636, Address: 0x151e70, Func Offset: 0x190
	// Line 641, Address: 0x151e80, Func Offset: 0x1a0
	// Line 642, Address: 0x151e88, Func Offset: 0x1a8
	// Line 641, Address: 0x151e90, Func Offset: 0x1b0
	// Line 642, Address: 0x151e9c, Func Offset: 0x1bc
	// Line 652, Address: 0x151ea8, Func Offset: 0x1c8
	// Line 654, Address: 0x151eb0, Func Offset: 0x1d0
	// Line 652, Address: 0x151ec0, Func Offset: 0x1e0
	// Line 654, Address: 0x151ec4, Func Offset: 0x1e4
	// Line 657, Address: 0x151ee8, Func Offset: 0x208
	// Line 658, Address: 0x151ef4, Func Offset: 0x214
	// Line 659, Address: 0x151f04, Func Offset: 0x224
	// Line 660, Address: 0x151f20, Func Offset: 0x240
	// Line 662, Address: 0x151f30, Func Offset: 0x250
	// Line 663, Address: 0x151f3c, Func Offset: 0x25c
	// Line 664, Address: 0x151f40, Func Offset: 0x260
	// Line 663, Address: 0x151f44, Func Offset: 0x264
	// Line 664, Address: 0x151f48, Func Offset: 0x268
	// Line 665, Address: 0x151f50, Func Offset: 0x270
	// Line 668, Address: 0x151f5c, Func Offset: 0x27c
	// Line 665, Address: 0x151f68, Func Offset: 0x288
	// Line 666, Address: 0x151f70, Func Offset: 0x290
	// Line 667, Address: 0x151f7c, Func Offset: 0x29c
	// Line 668, Address: 0x151f88, Func Offset: 0x2a8
	// Line 669, Address: 0x151f94, Func Offset: 0x2b4
	// Line 670, Address: 0x151fa4, Func Offset: 0x2c4
	// Line 672, Address: 0x151fb8, Func Offset: 0x2d8
	// Func End, Address: 0x151fe0, Func Offset: 0x300
}

// 
// Start address: 0x151fe0
void EileenSpMakePacket(_anon1* mparams)
{
	unsigned long* pk;
	NDrawData* spr;
	unsigned long* p;
	unsigned int* p;
	unsigned int* p;
	unsigned long* p;
	// Line 681, Address: 0x151fe0, Func Offset: 0
	// Line 685, Address: 0x151fe4, Func Offset: 0x4
	// Line 681, Address: 0x151fe8, Func Offset: 0x8
	// Line 685, Address: 0x151fec, Func Offset: 0xc
	// Line 681, Address: 0x151ff0, Func Offset: 0x10
	// Line 685, Address: 0x151ff4, Func Offset: 0x14
	// Line 681, Address: 0x151ff8, Func Offset: 0x18
	// Line 685, Address: 0x151ffc, Func Offset: 0x1c
	// Line 688, Address: 0x152010, Func Offset: 0x30
	// Line 690, Address: 0x152020, Func Offset: 0x40
	// Line 691, Address: 0x152028, Func Offset: 0x48
	// Line 694, Address: 0x152034, Func Offset: 0x54
	// Line 695, Address: 0x152058, Func Offset: 0x78
	// Line 696, Address: 0x152060, Func Offset: 0x80
	// Line 699, Address: 0x152068, Func Offset: 0x88
	// Line 700, Address: 0x1520a0, Func Offset: 0xc0
	// Line 702, Address: 0x1520ac, Func Offset: 0xcc
	// Line 704, Address: 0x1520c0, Func Offset: 0xe0
	// Line 708, Address: 0x1520c4, Func Offset: 0xe4
	// Line 704, Address: 0x1520c8, Func Offset: 0xe8
	// Line 705, Address: 0x1520cc, Func Offset: 0xec
	// Line 706, Address: 0x1520d4, Func Offset: 0xf4
	// Line 707, Address: 0x1520dc, Func Offset: 0xfc
	// Line 709, Address: 0x1520e0, Func Offset: 0x100
	// Line 715, Address: 0x1520e8, Func Offset: 0x108
	// Line 717, Address: 0x152100, Func Offset: 0x120
	// Line 715, Address: 0x152108, Func Offset: 0x128
	// Line 717, Address: 0x152130, Func Offset: 0x150
	// Line 719, Address: 0x152138, Func Offset: 0x158
	// Line 720, Address: 0x152140, Func Offset: 0x160
	// Line 721, Address: 0x15214c, Func Offset: 0x16c
	// Line 723, Address: 0x152170, Func Offset: 0x190
	// Line 724, Address: 0x152178, Func Offset: 0x198
	// Line 725, Address: 0x152180, Func Offset: 0x1a0
	// Line 726, Address: 0x152190, Func Offset: 0x1b0
	// Func End, Address: 0x1521a4, Func Offset: 0x1c4
}

// 
// Start address: 0x1521b0
void EileenSpTexBit(int texbit)
{
	// Line 731, Address: 0x1521b0, Func Offset: 0
	// Line 732, Address: 0x1521b4, Func Offset: 0x4
	// Func End, Address: 0x1521bc, Func Offset: 0xc
}

// 
// Start address: 0x1521c0
void MakeNormalPacket(Part* part, _anon0* pk)
{
	int n_textures;
	unsigned short* text_pos_indices;
	_anon4* text_pos_params;
	TextureParam* texture_params;
	int mpg;
	_anon3* fromSPR;
	int i;
	int text_pos_index;
	_anon4* text_pos;
	NDrawData* spr;
	NDrawData* data;
	// Line 738, Address: 0x1521c0, Func Offset: 0
	// Line 741, Address: 0x1521c4, Func Offset: 0x4
	// Line 738, Address: 0x1521c8, Func Offset: 0x8
	// Line 741, Address: 0x1521f4, Func Offset: 0x34
	// Line 740, Address: 0x1521f8, Func Offset: 0x38
	// Line 742, Address: 0x1521fc, Func Offset: 0x3c
	// Line 739, Address: 0x152200, Func Offset: 0x40
	// Line 744, Address: 0x152204, Func Offset: 0x44
	// Line 740, Address: 0x15220c, Func Offset: 0x4c
	// Line 742, Address: 0x152210, Func Offset: 0x50
	// Line 741, Address: 0x152214, Func Offset: 0x54
	// Line 744, Address: 0x15221c, Func Offset: 0x5c
	// Line 745, Address: 0x152240, Func Offset: 0x80
	// Line 744, Address: 0x152244, Func Offset: 0x84
	// Line 745, Address: 0x152248, Func Offset: 0x88
	// Line 748, Address: 0x152250, Func Offset: 0x90
	// Line 745, Address: 0x152254, Func Offset: 0x94
	// Line 748, Address: 0x152258, Func Offset: 0x98
	// Line 749, Address: 0x152270, Func Offset: 0xb0
	// Line 750, Address: 0x152274, Func Offset: 0xb4
	// Line 752, Address: 0x152278, Func Offset: 0xb8
	// Line 750, Address: 0x15227c, Func Offset: 0xbc
	// Line 752, Address: 0x152280, Func Offset: 0xc0
	// Line 754, Address: 0x1522a0, Func Offset: 0xe0
	// Line 755, Address: 0x1522b0, Func Offset: 0xf0
	// Line 756, Address: 0x1522bc, Func Offset: 0xfc
	// Line 757, Address: 0x1522d4, Func Offset: 0x114
	// Line 759, Address: 0x1522e0, Func Offset: 0x120
	// Line 760, Address: 0x1522f4, Func Offset: 0x134
	// Line 761, Address: 0x152300, Func Offset: 0x140
	// Line 762, Address: 0x152308, Func Offset: 0x148
	// Line 764, Address: 0x152310, Func Offset: 0x150
	// Line 765, Address: 0x152318, Func Offset: 0x158
	// Line 766, Address: 0x15231c, Func Offset: 0x15c
	// Line 765, Address: 0x152320, Func Offset: 0x160
	// Line 766, Address: 0x152324, Func Offset: 0x164
	// Line 767, Address: 0x152334, Func Offset: 0x174
	// Line 768, Address: 0x15234c, Func Offset: 0x18c
	// Line 770, Address: 0x152360, Func Offset: 0x1a0
	// Line 772, Address: 0x152368, Func Offset: 0x1a8
	// Line 773, Address: 0x152378, Func Offset: 0x1b8
	// Line 775, Address: 0x152398, Func Offset: 0x1d8
	// Line 773, Address: 0x1523a0, Func Offset: 0x1e0
	// Line 775, Address: 0x1523a4, Func Offset: 0x1e4
	// Line 776, Address: 0x1523b0, Func Offset: 0x1f0
	// Func End, Address: 0x1523e0, Func Offset: 0x220
}

// 
// Start address: 0x1523e0
void MakeEnvironPacket(Part* part, _anon0* pk)
{
	Data_4* data;
	// Line 784, Address: 0x1523e0, Func Offset: 0
	// Line 791, Address: 0x1523e4, Func Offset: 0x4
	// Line 784, Address: 0x1523e8, Func Offset: 0x8
	// Line 791, Address: 0x1523fc, Func Offset: 0x1c
	// Line 792, Address: 0x152424, Func Offset: 0x44
	// Line 791, Address: 0x152428, Func Offset: 0x48
	// Line 792, Address: 0x15242c, Func Offset: 0x4c
	// Line 793, Address: 0x152438, Func Offset: 0x58
	// Line 794, Address: 0x152444, Func Offset: 0x64
	// Line 797, Address: 0x152478, Func Offset: 0x98
	// Line 798, Address: 0x152484, Func Offset: 0xa4
	// Line 799, Address: 0x152494, Func Offset: 0xb4
	// Line 800, Address: 0x1524b0, Func Offset: 0xd0
	// Line 802, Address: 0x1524bc, Func Offset: 0xdc
	// Line 806, Address: 0x1524c0, Func Offset: 0xe0
	// Line 802, Address: 0x1524c4, Func Offset: 0xe4
	// Line 806, Address: 0x1524c8, Func Offset: 0xe8
	// Line 803, Address: 0x1524cc, Func Offset: 0xec
	// Line 806, Address: 0x1524d0, Func Offset: 0xf0
	// Line 804, Address: 0x1524d4, Func Offset: 0xf4
	// Line 805, Address: 0x1524d8, Func Offset: 0xf8
	// Line 806, Address: 0x1524e0, Func Offset: 0x100
	// Line 807, Address: 0x1524ec, Func Offset: 0x10c
	// Line 808, Address: 0x152500, Func Offset: 0x120
	// Func End, Address: 0x152518, Func Offset: 0x138
}

// 
// Start address: 0x152520
void MakeSpecularPacket(Part* part, _anon0* pk)
{
	Data_3* data;
	// Line 816, Address: 0x152520, Func Offset: 0
	// Line 823, Address: 0x152524, Func Offset: 0x4
	// Line 816, Address: 0x152528, Func Offset: 0x8
	// Line 823, Address: 0x152540, Func Offset: 0x20
	// Line 824, Address: 0x152568, Func Offset: 0x48
	// Line 823, Address: 0x15256c, Func Offset: 0x4c
	// Line 824, Address: 0x152570, Func Offset: 0x50
	// Line 825, Address: 0x15257c, Func Offset: 0x5c
	// Line 826, Address: 0x152588, Func Offset: 0x68
	// Line 829, Address: 0x1525bc, Func Offset: 0x9c
	// Line 830, Address: 0x1525c8, Func Offset: 0xa8
	// Line 831, Address: 0x1525d8, Func Offset: 0xb8
	// Line 832, Address: 0x1525f4, Func Offset: 0xd4
	// Line 834, Address: 0x152604, Func Offset: 0xe4
	// Line 835, Address: 0x152610, Func Offset: 0xf0
	// Line 836, Address: 0x152614, Func Offset: 0xf4
	// Line 835, Address: 0x152618, Func Offset: 0xf8
	// Line 836, Address: 0x15261c, Func Offset: 0xfc
	// Line 837, Address: 0x152630, Func Offset: 0x110
	// Line 838, Address: 0x152644, Func Offset: 0x124
	// Func End, Address: 0x152660, Func Offset: 0x140
}

// 
// Start address: 0x152660
void MakeBaseSpecularPacket(Part* part, _anon0* pk)
{
	Data_0* data;
	// Line 845, Address: 0x152660, Func Offset: 0
	// Line 852, Address: 0x152664, Func Offset: 0x4
	// Line 845, Address: 0x152668, Func Offset: 0x8
	// Line 852, Address: 0x152680, Func Offset: 0x20
	// Line 853, Address: 0x1526a8, Func Offset: 0x48
	// Line 852, Address: 0x1526ac, Func Offset: 0x4c
	// Line 853, Address: 0x1526b0, Func Offset: 0x50
	// Line 854, Address: 0x1526bc, Func Offset: 0x5c
	// Line 855, Address: 0x1526c8, Func Offset: 0x68
	// Line 858, Address: 0x1526fc, Func Offset: 0x9c
	// Line 859, Address: 0x152708, Func Offset: 0xa8
	// Line 860, Address: 0x152718, Func Offset: 0xb8
	// Line 861, Address: 0x152734, Func Offset: 0xd4
	// Line 863, Address: 0x152744, Func Offset: 0xe4
	// Line 864, Address: 0x152750, Func Offset: 0xf0
	// Line 865, Address: 0x152754, Func Offset: 0xf4
	// Line 864, Address: 0x152758, Func Offset: 0xf8
	// Line 865, Address: 0x15275c, Func Offset: 0xfc
	// Line 866, Address: 0x152770, Func Offset: 0x110
	// Line 867, Address: 0x152784, Func Offset: 0x124
	// Func End, Address: 0x1527a0, Func Offset: 0x140
}

// 
// Start address: 0x1527a0
void MakeOverPacket(Part* part, _anon0* pk)
{
	int n_textures;
	unsigned short* text_pos_indices;
	_anon4* text_pos_params;
	TextureParam* texture_params;
	int mpg;
	_anon3* fromSPR;
	int i;
	_anon4* text_pos;
	NDrawData* spr;
	NDrawData* data;
	// Line 874, Address: 0x1527a0, Func Offset: 0
	// Line 877, Address: 0x1527a4, Func Offset: 0x4
	// Line 874, Address: 0x1527a8, Func Offset: 0x8
	// Line 877, Address: 0x1527d4, Func Offset: 0x34
	// Line 876, Address: 0x1527d8, Func Offset: 0x38
	// Line 878, Address: 0x1527dc, Func Offset: 0x3c
	// Line 875, Address: 0x1527e0, Func Offset: 0x40
	// Line 880, Address: 0x1527e4, Func Offset: 0x44
	// Line 876, Address: 0x1527ec, Func Offset: 0x4c
	// Line 878, Address: 0x1527f0, Func Offset: 0x50
	// Line 877, Address: 0x1527f4, Func Offset: 0x54
	// Line 880, Address: 0x1527fc, Func Offset: 0x5c
	// Line 881, Address: 0x152820, Func Offset: 0x80
	// Line 880, Address: 0x152824, Func Offset: 0x84
	// Line 881, Address: 0x152828, Func Offset: 0x88
	// Line 884, Address: 0x152830, Func Offset: 0x90
	// Line 881, Address: 0x152834, Func Offset: 0x94
	// Line 884, Address: 0x152838, Func Offset: 0x98
	// Line 886, Address: 0x152848, Func Offset: 0xa8
	// Line 888, Address: 0x15284c, Func Offset: 0xac
	// Line 886, Address: 0x152850, Func Offset: 0xb0
	// Line 888, Address: 0x152858, Func Offset: 0xb8
	// Line 890, Address: 0x152878, Func Offset: 0xd8
	// Line 888, Address: 0x152880, Func Offset: 0xe0
	// Line 890, Address: 0x152884, Func Offset: 0xe4
	// Line 891, Address: 0x15288c, Func Offset: 0xec
	// Line 892, Address: 0x152898, Func Offset: 0xf8
	// Line 893, Address: 0x1528b0, Func Offset: 0x110
	// Line 895, Address: 0x1528bc, Func Offset: 0x11c
	// Line 896, Address: 0x1528d0, Func Offset: 0x130
	// Line 897, Address: 0x1528dc, Func Offset: 0x13c
	// Line 898, Address: 0x1528e4, Func Offset: 0x144
	// Line 900, Address: 0x1528f0, Func Offset: 0x150
	// Line 901, Address: 0x1528f8, Func Offset: 0x158
	// Line 902, Address: 0x1528fc, Func Offset: 0x15c
	// Line 901, Address: 0x152900, Func Offset: 0x160
	// Line 902, Address: 0x152904, Func Offset: 0x164
	// Line 903, Address: 0x152914, Func Offset: 0x174
	// Line 904, Address: 0x15292c, Func Offset: 0x18c
	// Line 905, Address: 0x152938, Func Offset: 0x198
	// Line 904, Address: 0x15293c, Func Offset: 0x19c
	// Line 905, Address: 0x152940, Func Offset: 0x1a0
	// Line 906, Address: 0x152950, Func Offset: 0x1b0
	// Func End, Address: 0x152980, Func Offset: 0x1e0
}

// 
// Start address: 0x152980
void MakeDrawPacket(Part* part, _anon0* pk)
{
	// Line 913, Address: 0x152980, Func Offset: 0
	// Line 914, Address: 0x152984, Func Offset: 0x4
	// Line 913, Address: 0x152988, Func Offset: 0x8
	// Line 914, Address: 0x15298c, Func Offset: 0xc
	// Line 913, Address: 0x152990, Func Offset: 0x10
	// Line 914, Address: 0x152994, Func Offset: 0x14
	// Line 913, Address: 0x152998, Func Offset: 0x18
	// Line 914, Address: 0x1529a4, Func Offset: 0x24
	// Line 917, Address: 0x1529cc, Func Offset: 0x4c
	// Line 918, Address: 0x1529d8, Func Offset: 0x58
	// Line 919, Address: 0x1529f0, Func Offset: 0x70
	// Line 920, Address: 0x152a00, Func Offset: 0x80
	// Line 922, Address: 0x152a14, Func Offset: 0x94
	// Line 923, Address: 0x152a20, Func Offset: 0xa0
	// Line 925, Address: 0x152a28, Func Offset: 0xa8
	// Line 926, Address: 0x152a34, Func Offset: 0xb4
	// Line 927, Address: 0x152a3c, Func Offset: 0xbc
	// Line 929, Address: 0x152a40, Func Offset: 0xc0
	// Line 930, Address: 0x152a50, Func Offset: 0xd0
	// Line 932, Address: 0x152a58, Func Offset: 0xd8
	// Line 934, Address: 0x152a60, Func Offset: 0xe0
	// Line 935, Address: 0x152a70, Func Offset: 0xf0
	// Line 937, Address: 0x152a78, Func Offset: 0xf8
	// Line 938, Address: 0x152a84, Func Offset: 0x104
	// Line 939, Address: 0x152a88, Func Offset: 0x108
	// Func End, Address: 0x152a9c, Func Offset: 0x11c
}

// 
// Start address: 0x152aa0
void DrawPart(Part* part, _anon0* pk)
{
	Data_1* data;
	// Line 946, Address: 0x152aa0, Func Offset: 0
	// Line 951, Address: 0x152aa4, Func Offset: 0x4
	// Line 946, Address: 0x152aa8, Func Offset: 0x8
	// Line 951, Address: 0x152ab8, Func Offset: 0x18
	// Line 952, Address: 0x152ac8, Func Offset: 0x28
	// Line 953, Address: 0x152ad4, Func Offset: 0x34
	// Line 955, Address: 0x152ae0, Func Offset: 0x40
	// Line 958, Address: 0x152ae8, Func Offset: 0x48
	// Line 961, Address: 0x152af8, Func Offset: 0x58
	// Line 962, Address: 0x152b04, Func Offset: 0x64
	// Line 963, Address: 0x152b18, Func Offset: 0x78
	// Line 964, Address: 0x152b24, Func Offset: 0x84
	// Line 965, Address: 0x152b3c, Func Offset: 0x9c
	// Line 966, Address: 0x152b4c, Func Offset: 0xac
	// Line 967, Address: 0x152b60, Func Offset: 0xc0
	// Line 968, Address: 0x152b74, Func Offset: 0xd4
	// Line 969, Address: 0x152b88, Func Offset: 0xe8
	// Line 970, Address: 0x152b90, Func Offset: 0xf0
	// Line 971, Address: 0x152b9c, Func Offset: 0xfc
	// Line 972, Address: 0x152ba8, Func Offset: 0x108
	// Line 973, Address: 0x152bb4, Func Offset: 0x114
	// Line 974, Address: 0x152bb8, Func Offset: 0x118
	// Line 975, Address: 0x152bc4, Func Offset: 0x124
	// Line 976, Address: 0x152bd4, Func Offset: 0x134
	// Line 977, Address: 0x152be4, Func Offset: 0x144
	// Line 979, Address: 0x152bf0, Func Offset: 0x150
	// Line 982, Address: 0x152bf8, Func Offset: 0x158
	// Line 979, Address: 0x152bfc, Func Offset: 0x15c
	// Line 982, Address: 0x152c08, Func Offset: 0x168
	// Line 989, Address: 0x152c38, Func Offset: 0x198
	// Line 993, Address: 0x152c44, Func Offset: 0x1a4
	// Line 997, Address: 0x152c48, Func Offset: 0x1a8
	// Line 998, Address: 0x152c54, Func Offset: 0x1b4
	// Line 1001, Address: 0x152c84, Func Offset: 0x1e4
	// Line 1002, Address: 0x152c90, Func Offset: 0x1f0
	// Line 1003, Address: 0x152ca8, Func Offset: 0x208
	// Line 1004, Address: 0x152cb8, Func Offset: 0x218
	// Line 1005, Address: 0x152ccc, Func Offset: 0x22c
	// Line 1009, Address: 0x152cd0, Func Offset: 0x230
	// Line 1015, Address: 0x152ce0, Func Offset: 0x240
	// Line 1018, Address: 0x152d0c, Func Offset: 0x26c
	// Line 1019, Address: 0x152d18, Func Offset: 0x278
	// Line 1020, Address: 0x152d28, Func Offset: 0x288
	// Line 1021, Address: 0x152d44, Func Offset: 0x2a4
	// Line 1023, Address: 0x152d50, Func Offset: 0x2b0
	// Line 1024, Address: 0x152d54, Func Offset: 0x2b4
	// Line 1023, Address: 0x152d60, Func Offset: 0x2c0
	// Line 1024, Address: 0x152d64, Func Offset: 0x2c4
	// Line 1025, Address: 0x152d70, Func Offset: 0x2d0
	// Line 1026, Address: 0x152d80, Func Offset: 0x2e0
	// Line 1027, Address: 0x152d94, Func Offset: 0x2f4
	// Line 1030, Address: 0x152d98, Func Offset: 0x2f8
	// Line 1031, Address: 0x152da4, Func Offset: 0x304
	// Func End, Address: 0x152db8, Func Offset: 0x318
}

// 
// Start address: 0x152dc0
void MakeDrawPacketZ(Part* part, _anon0* pk)
{
	// Line 1038, Address: 0x152dc0, Func Offset: 0
	// Line 1039, Address: 0x152dc4, Func Offset: 0x4
	// Line 1038, Address: 0x152dc8, Func Offset: 0x8
	// Line 1039, Address: 0x152dcc, Func Offset: 0xc
	// Line 1038, Address: 0x152dd0, Func Offset: 0x10
	// Line 1039, Address: 0x152dd4, Func Offset: 0x14
	// Line 1038, Address: 0x152dd8, Func Offset: 0x18
	// Line 1039, Address: 0x152de4, Func Offset: 0x24
	// Line 1042, Address: 0x152e0c, Func Offset: 0x4c
	// Line 1043, Address: 0x152e18, Func Offset: 0x58
	// Line 1044, Address: 0x152e30, Func Offset: 0x70
	// Line 1045, Address: 0x152e40, Func Offset: 0x80
	// Line 1047, Address: 0x152e44, Func Offset: 0x84
	// Line 1045, Address: 0x152e48, Func Offset: 0x88
	// Line 1047, Address: 0x152e4c, Func Offset: 0x8c
	// Line 1045, Address: 0x152e50, Func Offset: 0x90
	// Line 1047, Address: 0x152e58, Func Offset: 0x98
	// Line 1048, Address: 0x152e60, Func Offset: 0xa0
	// Func End, Address: 0x152e74, Func Offset: 0xb4
}

// 
// Start address: 0x152e80
void DrawPartZ(Part* part, _anon0* pk)
{
	// Line 1055, Address: 0x152e80, Func Offset: 0
	// Line 1060, Address: 0x152e84, Func Offset: 0x4
	// Line 1055, Address: 0x152e88, Func Offset: 0x8
	// Line 1060, Address: 0x152e98, Func Offset: 0x18
	// Line 1061, Address: 0x152ea8, Func Offset: 0x28
	// Line 1062, Address: 0x152eb4, Func Offset: 0x34
	// Line 1064, Address: 0x152ec0, Func Offset: 0x40
	// Line 1067, Address: 0x152ec8, Func Offset: 0x48
	// Line 1070, Address: 0x152ed8, Func Offset: 0x58
	// Line 1071, Address: 0x152ee4, Func Offset: 0x64
	// Line 1072, Address: 0x152ef8, Func Offset: 0x78
	// Line 1073, Address: 0x152f04, Func Offset: 0x84
	// Line 1074, Address: 0x152f1c, Func Offset: 0x9c
	// Line 1075, Address: 0x152f2c, Func Offset: 0xac
	// Line 1076, Address: 0x152f40, Func Offset: 0xc0
	// Line 1077, Address: 0x152f54, Func Offset: 0xd4
	// Line 1078, Address: 0x152f68, Func Offset: 0xe8
	// Line 1079, Address: 0x152f70, Func Offset: 0xf0
	// Line 1080, Address: 0x152f7c, Func Offset: 0xfc
	// Line 1081, Address: 0x152f88, Func Offset: 0x108
	// Line 1082, Address: 0x152f94, Func Offset: 0x114
	// Line 1083, Address: 0x152f98, Func Offset: 0x118
	// Line 1084, Address: 0x152fa4, Func Offset: 0x124
	// Line 1085, Address: 0x152fb4, Func Offset: 0x134
	// Line 1088, Address: 0x152fb8, Func Offset: 0x138
	// Line 1085, Address: 0x152fbc, Func Offset: 0x13c
	// Line 1088, Address: 0x152fc0, Func Offset: 0x140
	// Line 1085, Address: 0x152fc4, Func Offset: 0x144
	// Line 1088, Address: 0x152fcc, Func Offset: 0x14c
	// Line 1089, Address: 0x152fd4, Func Offset: 0x154
	// Func End, Address: 0x152fe8, Func Offset: 0x168
}

// 
// Start address: 0x152ff0
void DrawParts(Model* model, ModelWork* work)
{
	<unknown fundamental type (0xa510)>* packet_buffer;
	_anon0 packet;
	_anon0* pk;
	int n_parts;
	Part* parts_top;
	Part* part;
	int i;
	unsigned long giftag[2];
	// Line 1096, Address: 0x152ff0, Func Offset: 0
	// Line 1101, Address: 0x15301c, Func Offset: 0x2c
	// Line 1107, Address: 0x153024, Func Offset: 0x34
	// Line 1101, Address: 0x153028, Func Offset: 0x38
	// Line 1108, Address: 0x15302c, Func Offset: 0x3c
	// Line 1125, Address: 0x153030, Func Offset: 0x40
	// Line 1127, Address: 0x153038, Func Offset: 0x48
	// Line 1106, Address: 0x15303c, Func Offset: 0x4c
	// Line 1125, Address: 0x153040, Func Offset: 0x50
	// Line 1108, Address: 0x153044, Func Offset: 0x54
	// Line 1127, Address: 0x153048, Func Offset: 0x58
	// Line 1128, Address: 0x15304c, Func Offset: 0x5c
	// Line 1129, Address: 0x153054, Func Offset: 0x64
	// Line 1130, Address: 0x15306c, Func Offset: 0x7c
	// Line 1135, Address: 0x15307c, Func Offset: 0x8c
	// Line 1136, Address: 0x153084, Func Offset: 0x94
	// Line 1137, Address: 0x153090, Func Offset: 0xa0
	// Line 1138, Address: 0x15309c, Func Offset: 0xac
	// Line 1139, Address: 0x1530ac, Func Offset: 0xbc
	// Line 1142, Address: 0x1530c0, Func Offset: 0xd0
	// Line 1143, Address: 0x1530c8, Func Offset: 0xd8
	// Line 1144, Address: 0x1530d0, Func Offset: 0xe0
	// Line 1147, Address: 0x1530e0, Func Offset: 0xf0
	// Line 1152, Address: 0x1530f4, Func Offset: 0x104
	// Line 1153, Address: 0x1530fc, Func Offset: 0x10c
	// Line 1154, Address: 0x153114, Func Offset: 0x124
	// Line 1155, Address: 0x153118, Func Offset: 0x128
	// Line 1156, Address: 0x153120, Func Offset: 0x130
	// Line 1165, Address: 0x153130, Func Offset: 0x140
	// Line 1170, Address: 0x153144, Func Offset: 0x154
	// Line 1171, Address: 0x15314c, Func Offset: 0x15c
	// Line 1172, Address: 0x153168, Func Offset: 0x178
	// Line 1173, Address: 0x153174, Func Offset: 0x184
	// Line 1174, Address: 0x153180, Func Offset: 0x190
	// Line 1178, Address: 0x153188, Func Offset: 0x198
	// Line 1180, Address: 0x153198, Func Offset: 0x1a8
	// Line 1187, Address: 0x1531a0, Func Offset: 0x1b0
	// Line 1189, Address: 0x1531ac, Func Offset: 0x1bc
	// Line 1191, Address: 0x1531c4, Func Offset: 0x1d4
	// Func End, Address: 0x1531ec, Func Offset: 0x1fc
}

// 
// Start address: 0x1531f0
void Model3DrawVu1Parts(Model* model, ModelWork* work)
{
	// Line 1200, Address: 0x1531f0, Func Offset: 0
	// Func End, Address: 0x1531f8, Func Offset: 0x8
}

// 
// Start address: 0x153200
void Model3Vu1InitialzeData()
{
	// Line 1212, Address: 0x153200, Func Offset: 0
	// Func End, Address: 0x153208, Func Offset: 0x8
}

