typedef struct SPACK_OT_DATA;
typedef struct FOG_PART_DATA;
typedef struct shBattleShot;
typedef struct FOG_WALL_DATA;
typedef struct FOG_OBJ_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct FOG_ASM_DATA3;
typedef struct FOG_COLIS_HEAD;
typedef struct FOG_ASM_DATA_P;
typedef struct FOG_AREA_DATA;
typedef struct FOG_ENV_DATA;
typedef struct shAttackInfo;
typedef struct FOG_PACK_WORK;
typedef union _anon0;
typedef struct FOG_COLIS_WALL;
typedef struct FOG_ASM_DATA1;
typedef struct FOG_COLIS_WALL2;
typedef struct FOG_ASM_DATA2;
typedef struct FOG_WORK;
typedef struct SPACK_DATA;
typedef struct shBattleFight;


typedef float type_0[4];
typedef unsigned char type_1[10];
typedef shAttackInfo type_2[46];
typedef unsigned long type_3[2];
typedef <unknown fundamental type (0xa510)> type_4[6400];
typedef unsigned char type_5[10];
typedef unsigned long type_6[2];
typedef unsigned char type_7[13];
typedef unsigned long type_8[2];
typedef unsigned long type_9[4];
typedef unsigned char type_10[34];
typedef float type_11[4];
typedef float type_12[4][4];
typedef FOG_PART_DATA type_13[700];
typedef float type_14[4][8];
typedef float type_15[4][8][8];
typedef float type_16[4][8][8][8];
typedef float type_17[8];
typedef float type_18[8][8];
typedef float type_19[8][8][8];
typedef FOG_WALL_DATA type_20[60];
typedef FOG_OBJ_DATA type_21[168];

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct FOG_PART_DATA
{
	float pos[4];
	float mv[4];
	float dd[4];
	float degree[4];
	float tdx;
	float tdy;
	float alp;
	int dpos;
	float alp_now;
	float alp_add;
	int bounce;
	int erase;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
};

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct FOG_ASM_DATA3
{
	float maxpos;
	float r_screendiv;
	float movespeed;
	float r_double;
};

struct FOG_COLIS_HEAD
{
	unsigned short wall1;
	unsigned short wall2;
	unsigned short obj1;
	unsigned short obj2;
	unsigned short area;
	unsigned short env;
};

struct FOG_ASM_DATA_P
{
	FOG_PART_DATA* part;
	<unknown fundamental type (0xa510)>* packet;
	void* asm_data;
	void* world_screen;
	void* world_view;
	void* camera_pos;
	void* world_pos;
	void* light_pos;
};

struct FOG_AREA_DATA
{
	short x0;
	short z0;
	short x1;
	short z1;
	unsigned short env;
};

struct FOG_ENV_DATA
{
	short PartNum;
	short MaxPos;
	short PartSize;
	short EscapeRange;
	short FloorY;
	short LimitY;
	short LimitHeight;
	short WaterY;
	unsigned char WindDef;
	unsigned char Flag;
	unsigned char Double;
	unsigned char Alpha;
	float GridRate;
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

struct FOG_PACK_WORK
{
	<unknown fundamental type (0xa510)> packet[6400];
	<unknown fundamental type (0xa510)>* pk_env;
	unsigned long* pk_tex0;
	unsigned int* pk_vifmark;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct FOG_COLIS_WALL
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
};

struct FOG_ASM_DATA1
{
	float part_size;
	float wall_range;
	float rev_rate;
	float part_m_rate;
	float escape_range;
	float r_escape_range;
	float alpha_max;
	float pad1;
	float minus_alpha;
	float rand_rate1;
	float rand_rate2;
	float rand_rate3;
	float fadepos;
	float r_fadepos;
	float fadepos_d;
	float r_fadepos_d;
	float maxpos;
	float maxpos_x2;
	float screendiv;
	float r_maxpos;
	float gridrate;
	float r_height;
	float alpha;
	float double_rate;
	float higher_y;
	float lower_y;
	float y_max;
	float pad2;
	float low_alpha;
	float high_alpha;
	float pad3;
	float pad4;
};

struct FOG_COLIS_WALL2
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
	short x2;
	short y2;
	short z2;
	short x3;
	short y3;
	short z3;
};

struct FOG_ASM_DATA2
{
	float center_x;
	float center_y;
	float part_size_proj;
	float center_w;
	float screen_width;
	float screen_height;
	float pad1;
	float w_width;
	float part_size;
	float pixel_aspect;
	float part_size_proj2;
	float r_part_size;
	float tex_sth;
	float floor_y;
	float tex_move_speed;
	float n128;
	float near_w;
	float near_w2;
	float r_near_w2;
	float nr_128;
	float light_max;
	float light_rate;
	float light_under;
	float r_light_under;
	float d_rate;
	float d_under;
	float d_rate2;
	float pad3;
};

struct FOG_WORK
{
	FOG_PART_DATA Part[700];
	float GridWindV[4][8][8][8];
	float GridDense[8][8][8];
	FOG_WALL_DATA Wall[60];
	FOG_OBJ_DATA Obj[168];
	float WorldScreenM[4][4];
	float WorldViewM[4][4];
	float CameraPosV[4];
	float WorldPosV[4];
	float LocalPosV[4];
	float MapPosV[4];
	float LightPosV[4];
	float WindV[4];
	float fewdense[4];
	float LimitY;
	float LimitY2;
	float WaterY;
	float SpeedLevel;
	float MaxPos;
	float FadePos;
	float PartSize;
	float Projection;
	float EscapeRange;
	float GridRate;
	float FloorY;
	short PartNum;
	short WallNum;
	short ObjMax;
	short ObjNum;
	short ObjNum2;
	short Alpha;
	short WindDef;
	char Double;
	char LoadStep;
	char Global;
	unsigned short AreaMax;
	unsigned short Flag;
	unsigned int Color;
	int SumW;
	int fid;
	FOG_COLIS_HEAD* ColisHead;
	FOG_AREA_DATA* AreaTop;
	FOG_ENV_DATA* EnvTop;
	FOG_ENV_DATA* EnvNow;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
FOG_ASM_DATA1 fog_asm_data1;
FOG_ASM_DATA2 fog_asm_data2;
FOG_ASM_DATA_P fog_asm_data_p;
FOG_ASM_DATA3 fog_asm_data3;
FOG_WORK fwork;
FOG_PACK_WORK pwork;
SPACK_DATA spack;
float dtf;

void fogInit();
void fog_set_defpacket();
void fogSetEnvironment(FOG_ENV_DATA* edata);
void fogInitScreen();
void fogInitWind();
void fogInitParticle();
void fog_init_part_sub(FOG_PART_DATA* pd);
void fog_part_newpos();
void fogResetWall();
void fogSetWall(void* Vector);
void fogResetObj();
void fogSetObj(unsigned long ID, void* Center, float Size);
void fogMoveObj(unsigned long ID, void* Center);
void fogSetObj2(unsigned long ID, void* Center, float Size);
void fogEraseObj(unsigned long ID);
void fogSetObjSize(unsigned long ID, float Size);
FOG_OBJ_DATA* fogGetObj(unsigned long ID);
void fogMoveParticle();
void fog_load_objdata();
void fog_part_wall();
void fog_part_grid();
void fog_part_obj();
void fog_part_obj2();
void fog_part_alp();
void fog_part_clamp();
void fogMakePacket();
void fogSetColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
void fogSetPartNum(int PartNum);
void fogSetProjection(float Projection);
void fogSetFloorY(float FloorY);
void fogSetWorldScreenM(void* WorldScreenM);
void fogSetWorldViewM(void* WorldViewM);
void fogSetWorldPosV(void* WorldPosV);
void fogSetCameraPosV(void* CameraPosV);
void fogSetLocalPosV();
void fogSetSpeedLevel(float SpeedLevel);
unsigned long* fogTex0Adr();

// 
// Start address: 0x16e130
void fogInit()
{
	// Line 88, Address: 0x16e130, Func Offset: 0
	// Line 89, Address: 0x16e138, Func Offset: 0x8
	// Line 91, Address: 0x16e150, Func Offset: 0x20
	// Line 92, Address: 0x16e160, Func Offset: 0x30
	// Line 95, Address: 0x16e168, Func Offset: 0x38
	// Line 97, Address: 0x16e180, Func Offset: 0x50
	// Line 98, Address: 0x16e188, Func Offset: 0x58
	// Line 100, Address: 0x16e190, Func Offset: 0x60
	// Line 109, Address: 0x16e1a8, Func Offset: 0x78
	// Line 112, Address: 0x16e1b0, Func Offset: 0x80
	// Func End, Address: 0x16e1c0, Func Offset: 0x90
}

// 
// Start address: 0x16e1c0
void fog_set_defpacket()
{
	<unknown fundamental type (0xa510)>* epos;
	<unknown fundamental type (0xa510)>* pos;
	int i;
	unsigned long giftag[2];
	// Line 116, Address: 0x16e1c0, Func Offset: 0
	// Line 118, Address: 0x16e1dc, Func Offset: 0x1c
	// Line 128, Address: 0x16e1f0, Func Offset: 0x30
	// Line 129, Address: 0x16e208, Func Offset: 0x48
	// Line 130, Address: 0x16e220, Func Offset: 0x60
	// Line 131, Address: 0x16e228, Func Offset: 0x68
	// Line 133, Address: 0x16e234, Func Offset: 0x74
	// Line 134, Address: 0x16e240, Func Offset: 0x80
	// Line 136, Address: 0x16e24c, Func Offset: 0x8c
	// Line 140, Address: 0x16e268, Func Offset: 0xa8
	// Line 141, Address: 0x16e294, Func Offset: 0xd4
	// Line 142, Address: 0x16e2a8, Func Offset: 0xe8
	// Line 143, Address: 0x16e2d4, Func Offset: 0x114
	// Line 144, Address: 0x16e2e8, Func Offset: 0x128
	// Line 145, Address: 0x16e2f0, Func Offset: 0x130
	// Line 146, Address: 0x16e2fc, Func Offset: 0x13c
	// Line 148, Address: 0x16e30c, Func Offset: 0x14c
	// Line 149, Address: 0x16e314, Func Offset: 0x154
	// Line 150, Address: 0x16e320, Func Offset: 0x160
	// Line 151, Address: 0x16e338, Func Offset: 0x178
	// Line 153, Address: 0x16e36c, Func Offset: 0x1ac
	// Line 154, Address: 0x16e3a4, Func Offset: 0x1e4
	// Line 155, Address: 0x16e3d8, Func Offset: 0x218
	// Line 161, Address: 0x16e410, Func Offset: 0x250
	// Line 162, Address: 0x16e418, Func Offset: 0x258
	// Line 164, Address: 0x16e424, Func Offset: 0x264
	// Line 165, Address: 0x16e428, Func Offset: 0x268
	// Line 166, Address: 0x16e434, Func Offset: 0x274
	// Line 167, Address: 0x16e448, Func Offset: 0x288
	// Line 169, Address: 0x16e458, Func Offset: 0x298
	// Line 170, Address: 0x16e48c, Func Offset: 0x2cc
	// Line 171, Address: 0x16e4c0, Func Offset: 0x300
	// Line 172, Address: 0x16e4f8, Func Offset: 0x338
	// Line 173, Address: 0x16e538, Func Offset: 0x378
	// Line 181, Address: 0x16e580, Func Offset: 0x3c0
	// Line 182, Address: 0x16e588, Func Offset: 0x3c8
	// Line 183, Address: 0x16e594, Func Offset: 0x3d4
	// Line 186, Address: 0x16e5a4, Func Offset: 0x3e4
	// Line 187, Address: 0x16e618, Func Offset: 0x458
	// Func End, Address: 0x16e63c, Func Offset: 0x47c
}

// 
// Start address: 0x16e640
void fogSetEnvironment(FOG_ENV_DATA* edata)
{
	char Double;
	unsigned char f;
	float m;
	float d;
	// Line 193, Address: 0x16e640, Func Offset: 0
	// Line 197, Address: 0x16e658, Func Offset: 0x18
	// Line 198, Address: 0x16e664, Func Offset: 0x24
	// Line 199, Address: 0x16e66c, Func Offset: 0x2c
	// Line 200, Address: 0x16e674, Func Offset: 0x34
	// Line 202, Address: 0x16e67c, Func Offset: 0x3c
	// Line 205, Address: 0x16e690, Func Offset: 0x50
	// Line 206, Address: 0x16e69c, Func Offset: 0x5c
	// Line 207, Address: 0x16e6a8, Func Offset: 0x68
	// Line 208, Address: 0x16e6c0, Func Offset: 0x80
	// Line 209, Address: 0x16e6cc, Func Offset: 0x8c
	// Line 210, Address: 0x16e6d8, Func Offset: 0x98
	// Line 211, Address: 0x16e6f0, Func Offset: 0xb0
	// Line 212, Address: 0x16e708, Func Offset: 0xc8
	// Line 213, Address: 0x16e720, Func Offset: 0xe0
	// Line 214, Address: 0x16e738, Func Offset: 0xf8
	// Line 215, Address: 0x16e744, Func Offset: 0x104
	// Line 216, Address: 0x16e750, Func Offset: 0x110
	// Line 217, Address: 0x16e768, Func Offset: 0x128
	// Line 218, Address: 0x16e774, Func Offset: 0x134
	// Line 219, Address: 0x16e78c, Func Offset: 0x14c
	// Line 220, Address: 0x16e7a4, Func Offset: 0x164
	// Line 221, Address: 0x16e7b0, Func Offset: 0x170
	// Line 222, Address: 0x16e7bc, Func Offset: 0x17c
	// Line 223, Address: 0x16e7d4, Func Offset: 0x194
	// Line 224, Address: 0x16e7ec, Func Offset: 0x1ac
	// Line 225, Address: 0x16e7f8, Func Offset: 0x1b8
	// Line 226, Address: 0x16e804, Func Offset: 0x1c4
	// Line 227, Address: 0x16e820, Func Offset: 0x1e0
	// Line 228, Address: 0x16e834, Func Offset: 0x1f4
	// Line 229, Address: 0x16e844, Func Offset: 0x204
	// Line 230, Address: 0x16e860, Func Offset: 0x220
	// Line 231, Address: 0x16e898, Func Offset: 0x258
	// Line 232, Address: 0x16e8c8, Func Offset: 0x288
	// Line 233, Address: 0x16e8d0, Func Offset: 0x290
	// Line 235, Address: 0x16e8e4, Func Offset: 0x2a4
	// Line 236, Address: 0x16e8fc, Func Offset: 0x2bc
	// Line 237, Address: 0x16e904, Func Offset: 0x2c4
	// Line 238, Address: 0x16e918, Func Offset: 0x2d8
	// Line 239, Address: 0x16e93c, Func Offset: 0x2fc
	// Line 240, Address: 0x16e954, Func Offset: 0x314
	// Line 241, Address: 0x16e96c, Func Offset: 0x32c
	// Line 242, Address: 0x16e988, Func Offset: 0x348
	// Line 243, Address: 0x16e990, Func Offset: 0x350
	// Line 244, Address: 0x16e9a0, Func Offset: 0x360
	// Line 245, Address: 0x16e9b4, Func Offset: 0x374
	// Line 247, Address: 0x16e9c4, Func Offset: 0x384
	// Line 248, Address: 0x16e9e8, Func Offset: 0x3a8
	// Line 249, Address: 0x16ea1c, Func Offset: 0x3dc
	// Line 250, Address: 0x16ea54, Func Offset: 0x414
	// Line 251, Address: 0x16ea8c, Func Offset: 0x44c
	// Line 252, Address: 0x16ea98, Func Offset: 0x458
	// Line 253, Address: 0x16eaac, Func Offset: 0x46c
	// Line 254, Address: 0x16eaf0, Func Offset: 0x4b0
	// Line 255, Address: 0x16eafc, Func Offset: 0x4bc
	// Line 256, Address: 0x16eb1c, Func Offset: 0x4dc
	// Line 257, Address: 0x16eb28, Func Offset: 0x4e8
	// Line 258, Address: 0x16eb84, Func Offset: 0x544
	// Line 259, Address: 0x16eb94, Func Offset: 0x554
	// Line 260, Address: 0x16ebac, Func Offset: 0x56c
	// Line 261, Address: 0x16ebd8, Func Offset: 0x598
	// Func End, Address: 0x16ebf4, Func Offset: 0x5b4
}

// 
// Start address: 0x16ec00
void fogInitScreen()
{
	// Line 266, Address: 0x16ec00, Func Offset: 0
	// Line 267, Address: 0x16ec08, Func Offset: 0x8
	// Line 268, Address: 0x16ec10, Func Offset: 0x10
	// Line 269, Address: 0x16ec18, Func Offset: 0x18
	// Func End, Address: 0x16ec28, Func Offset: 0x28
}

// 
// Start address: 0x16ec30
void fogInitWind()
{
	float WindRandom;
	float WindSpeed;
	float* GridDense;
	float* GridWindV;
	float* Wind;
	// Line 274, Address: 0x16ec30, Func Offset: 0
	// Line 275, Address: 0x16ec4c, Func Offset: 0x1c
	// Line 276, Address: 0x16ec54, Func Offset: 0x24
	// Line 277, Address: 0x16ec58, Func Offset: 0x28
	// Line 278, Address: 0x16ec60, Func Offset: 0x30
	// Line 279, Address: 0x16ec6c, Func Offset: 0x3c
	// Line 284, Address: 0x16ec78, Func Offset: 0x48
	// Line 286, Address: 0x16ecb0, Func Offset: 0x80
	// Line 287, Address: 0x16eccc, Func Offset: 0x9c
	// Line 288, Address: 0x16ecd8, Func Offset: 0xa8
	// Line 289, Address: 0x16ecf4, Func Offset: 0xc4
	// Line 291, Address: 0x16ecfc, Func Offset: 0xcc
	// Line 292, Address: 0x16ed00, Func Offset: 0xd0
	// Line 293, Address: 0x16ed04, Func Offset: 0xd4
	// Line 295, Address: 0x16ed0c, Func Offset: 0xdc
	// Line 296, Address: 0x16ed44, Func Offset: 0x114
	// Line 297, Address: 0x16ed78, Func Offset: 0x148
	// Line 298, Address: 0x16eda8, Func Offset: 0x178
	// Line 299, Address: 0x16edb0, Func Offset: 0x180
	// Line 301, Address: 0x16edb8, Func Offset: 0x188
	// Line 302, Address: 0x16edc8, Func Offset: 0x198
	// Line 303, Address: 0x16eddc, Func Offset: 0x1ac
	// Line 304, Address: 0x16edec, Func Offset: 0x1bc
	// Line 305, Address: 0x16edf8, Func Offset: 0x1c8
	// Line 307, Address: 0x16ee00, Func Offset: 0x1d0
	// Line 308, Address: 0x16ee14, Func Offset: 0x1e4
	// Line 309, Address: 0x16ee28, Func Offset: 0x1f8
	// Line 310, Address: 0x16ee38, Func Offset: 0x208
	// Line 311, Address: 0x16ee40, Func Offset: 0x210
	// Line 313, Address: 0x16ee48, Func Offset: 0x218
	// Line 314, Address: 0x16ee58, Func Offset: 0x228
	// Line 315, Address: 0x16ee6c, Func Offset: 0x23c
	// Line 316, Address: 0x16ee80, Func Offset: 0x250
	// Line 317, Address: 0x16ee8c, Func Offset: 0x25c
	// Line 319, Address: 0x16ee94, Func Offset: 0x264
	// Line 320, Address: 0x16eea4, Func Offset: 0x274
	// Line 321, Address: 0x16eeb8, Func Offset: 0x288
	// Line 322, Address: 0x16eec8, Func Offset: 0x298
	// Line 323, Address: 0x16eed4, Func Offset: 0x2a4
	// Line 325, Address: 0x16eedc, Func Offset: 0x2ac
	// Line 326, Address: 0x16eef8, Func Offset: 0x2c8
	// Line 327, Address: 0x16ef14, Func Offset: 0x2e4
	// Line 329, Address: 0x16ef30, Func Offset: 0x300
	// Line 344, Address: 0x16ef3c, Func Offset: 0x30c
	// Line 362, Address: 0x16ef40, Func Offset: 0x310
	// Line 363, Address: 0x16ef44, Func Offset: 0x314
	// Line 364, Address: 0x16ef48, Func Offset: 0x318
	// Line 365, Address: 0x16ef4c, Func Offset: 0x31c
	// Line 366, Address: 0x16ef50, Func Offset: 0x320
	// Line 367, Address: 0x16ef54, Func Offset: 0x324
	// Line 368, Address: 0x16ef58, Func Offset: 0x328
	// Line 369, Address: 0x16ef5c, Func Offset: 0x32c
	// Line 370, Address: 0x16ef60, Func Offset: 0x330
	// Line 371, Address: 0x16ef64, Func Offset: 0x334
	// Line 372, Address: 0x16ef68, Func Offset: 0x338
	// Line 373, Address: 0x16ef6c, Func Offset: 0x33c
	// Line 374, Address: 0x16ef70, Func Offset: 0x340
	// Line 375, Address: 0x16ef74, Func Offset: 0x344
	// Line 376, Address: 0x16ef78, Func Offset: 0x348
	// Line 377, Address: 0x16ef7c, Func Offset: 0x34c
	// Line 378, Address: 0x16ef80, Func Offset: 0x350
	// Line 379, Address: 0x16ef84, Func Offset: 0x354
	// Line 380, Address: 0x16ef88, Func Offset: 0x358
	// Line 382, Address: 0x16ef90, Func Offset: 0x360
	// Line 383, Address: 0x16ef94, Func Offset: 0x364
	// Line 384, Address: 0x16ef98, Func Offset: 0x368
	// Line 385, Address: 0x16ef9c, Func Offset: 0x36c
	// Line 386, Address: 0x16efa0, Func Offset: 0x370
	// Line 387, Address: 0x16efa4, Func Offset: 0x374
	// Line 388, Address: 0x16efa8, Func Offset: 0x378
	// Line 389, Address: 0x16efac, Func Offset: 0x37c
	// Line 390, Address: 0x16efb0, Func Offset: 0x380
	// Line 391, Address: 0x16efb4, Func Offset: 0x384
	// Line 392, Address: 0x16efb8, Func Offset: 0x388
	// Line 393, Address: 0x16efbc, Func Offset: 0x38c
	// Line 394, Address: 0x16efc0, Func Offset: 0x390
	// Line 395, Address: 0x16efc4, Func Offset: 0x394
	// Line 396, Address: 0x16efc8, Func Offset: 0x398
	// Line 397, Address: 0x16efcc, Func Offset: 0x39c
	// Line 398, Address: 0x16efd0, Func Offset: 0x3a0
	// Line 399, Address: 0x16efd4, Func Offset: 0x3a4
	// Line 400, Address: 0x16efd8, Func Offset: 0x3a8
	// Line 401, Address: 0x16efdc, Func Offset: 0x3ac
	// Line 402, Address: 0x16efe0, Func Offset: 0x3b0
	// Line 403, Address: 0x16efe4, Func Offset: 0x3b4
	// Line 404, Address: 0x16efe8, Func Offset: 0x3b8
	// Line 405, Address: 0x16efec, Func Offset: 0x3bc
	// Line 406, Address: 0x16eff0, Func Offset: 0x3c0
	// Line 408, Address: 0x16eff4, Func Offset: 0x3c4
	// Line 410, Address: 0x16effc, Func Offset: 0x3cc
	// Line 411, Address: 0x16f000, Func Offset: 0x3d0
	// Line 412, Address: 0x16f004, Func Offset: 0x3d4
	// Line 413, Address: 0x16f008, Func Offset: 0x3d8
	// Line 414, Address: 0x16f00c, Func Offset: 0x3dc
	// Line 415, Address: 0x16f010, Func Offset: 0x3e0
	// Line 416, Address: 0x16f014, Func Offset: 0x3e4
	// Line 417, Address: 0x16f018, Func Offset: 0x3e8
	// Line 426, Address: 0x16f020, Func Offset: 0x3f0
	// Line 427, Address: 0x16f02c, Func Offset: 0x3fc
	// Line 428, Address: 0x16f044, Func Offset: 0x414
	// Line 429, Address: 0x16f050, Func Offset: 0x420
	// Func End, Address: 0x16f074, Func Offset: 0x444
}

// 
// Start address: 0x16f080
void fogInitParticle()
{
	FOG_PART_DATA* pd;
	int i;
	// Line 434, Address: 0x16f080, Func Offset: 0
	// Line 436, Address: 0x16f090, Func Offset: 0x10
	// Line 437, Address: 0x16f098, Func Offset: 0x18
	// Line 438, Address: 0x16f0b0, Func Offset: 0x30
	// Line 439, Address: 0x16f0c0, Func Offset: 0x40
	// Line 440, Address: 0x16f0d4, Func Offset: 0x54
	// Func End, Address: 0x16f0ec, Func Offset: 0x6c
}

// 
// Start address: 0x16f0f0
void fog_init_part_sub(FOG_PART_DATA* pd)
{
	// Line 445, Address: 0x16f0f0, Func Offset: 0
	// Line 462, Address: 0x16f10c, Func Offset: 0x1c
	// Line 470, Address: 0x16f140, Func Offset: 0x50
	// Line 471, Address: 0x16f144, Func Offset: 0x54
	// Line 472, Address: 0x16f148, Func Offset: 0x58
	// Line 473, Address: 0x16f14c, Func Offset: 0x5c
	// Line 474, Address: 0x16f150, Func Offset: 0x60
	// Line 476, Address: 0x16f158, Func Offset: 0x68
	// Line 478, Address: 0x16f160, Func Offset: 0x70
	// Line 480, Address: 0x16f168, Func Offset: 0x78
	// Line 481, Address: 0x16f16c, Func Offset: 0x7c
	// Line 482, Address: 0x16f170, Func Offset: 0x80
	// Line 483, Address: 0x16f174, Func Offset: 0x84
	// Line 484, Address: 0x16f178, Func Offset: 0x88
	// Line 485, Address: 0x16f17c, Func Offset: 0x8c
	// Line 486, Address: 0x16f180, Func Offset: 0x90
	// Line 487, Address: 0x16f184, Func Offset: 0x94
	// Line 489, Address: 0x16f18c, Func Offset: 0x9c
	// Line 490, Address: 0x16f190, Func Offset: 0xa0
	// Line 491, Address: 0x16f194, Func Offset: 0xa4
	// Line 493, Address: 0x16f198, Func Offset: 0xa8
	// Line 494, Address: 0x16f19c, Func Offset: 0xac
	// Line 495, Address: 0x16f1a0, Func Offset: 0xb0
	// Line 496, Address: 0x16f1a4, Func Offset: 0xb4
	// Line 497, Address: 0x16f1a8, Func Offset: 0xb8
	// Line 499, Address: 0x16f1b0, Func Offset: 0xc0
	// Line 501, Address: 0x16f1b8, Func Offset: 0xc8
	// Line 502, Address: 0x16f1bc, Func Offset: 0xcc
	// Line 503, Address: 0x16f1c0, Func Offset: 0xd0
	// Line 504, Address: 0x16f1c4, Func Offset: 0xd4
	// Line 505, Address: 0x16f1c8, Func Offset: 0xd8
	// Line 506, Address: 0x16f1cc, Func Offset: 0xdc
	// Line 507, Address: 0x16f1d0, Func Offset: 0xe0
	// Line 508, Address: 0x16f1d4, Func Offset: 0xe4
	// Line 509, Address: 0x16f1d8, Func Offset: 0xe8
	// Line 515, Address: 0x16f1dc, Func Offset: 0xec
	// Func End, Address: 0x16f200, Func Offset: 0x110
}

// 
// Start address: 0x16f200
void fog_part_newpos()
{
	FOG_PART_DATA* pd;
	// Line 520, Address: 0x16f200, Func Offset: 0
	// Line 521, Address: 0x16f214, Func Offset: 0x14
	// Line 538, Address: 0x16f21c, Func Offset: 0x1c
	// Line 546, Address: 0x16f22c, Func Offset: 0x2c
	// Line 547, Address: 0x16f230, Func Offset: 0x30
	// Line 548, Address: 0x16f234, Func Offset: 0x34
	// Line 549, Address: 0x16f238, Func Offset: 0x38
	// Line 550, Address: 0x16f23c, Func Offset: 0x3c
	// Line 552, Address: 0x16f244, Func Offset: 0x44
	// Line 554, Address: 0x16f24c, Func Offset: 0x4c
	// Line 556, Address: 0x16f254, Func Offset: 0x54
	// Line 557, Address: 0x16f258, Func Offset: 0x58
	// Line 558, Address: 0x16f25c, Func Offset: 0x5c
	// Line 559, Address: 0x16f260, Func Offset: 0x60
	// Line 560, Address: 0x16f264, Func Offset: 0x64
	// Line 561, Address: 0x16f268, Func Offset: 0x68
	// Line 562, Address: 0x16f26c, Func Offset: 0x6c
	// Line 563, Address: 0x16f270, Func Offset: 0x70
	// Line 564, Address: 0x16f274, Func Offset: 0x74
	// Line 565, Address: 0x16f278, Func Offset: 0x78
	// Line 566, Address: 0x16f27c, Func Offset: 0x7c
	// Line 567, Address: 0x16f280, Func Offset: 0x80
	// Line 568, Address: 0x16f284, Func Offset: 0x84
	// Line 569, Address: 0x16f288, Func Offset: 0x88
	// Line 571, Address: 0x16f290, Func Offset: 0x90
	// Line 573, Address: 0x16f298, Func Offset: 0x98
	// Line 574, Address: 0x16f29c, Func Offset: 0x9c
	// Line 575, Address: 0x16f2a0, Func Offset: 0xa0
	// Line 576, Address: 0x16f2a4, Func Offset: 0xa4
	// Line 577, Address: 0x16f2a8, Func Offset: 0xa8
	// Line 582, Address: 0x16f2ac, Func Offset: 0xac
	// Func End, Address: 0x16f2c8, Func Offset: 0xc8
}

// 
// Start address: 0x16f2d0
void fogResetWall()
{
	// Line 588, Address: 0x16f2d0, Func Offset: 0
	// Line 589, Address: 0x16f2d8, Func Offset: 0x8
	// Func End, Address: 0x16f2e0, Func Offset: 0x10
}

// 
// Start address: 0x16f2e0
void fogSetWall(void* Vector)
{
	float cv[4];
	int i;
	FOG_WALL_DATA* wall;
	float wv[4];
	// Line 596, Address: 0x16f2e0, Func Offset: 0
	// Line 597, Address: 0x16f2f0, Func Offset: 0x10
	// Line 598, Address: 0x16f2f4, Func Offset: 0x14
	// Line 601, Address: 0x16f32c, Func Offset: 0x4c
	// Line 602, Address: 0x16f344, Func Offset: 0x64
	// Line 603, Address: 0x16f35c, Func Offset: 0x7c
	// Line 604, Address: 0x16f374, Func Offset: 0x94
	// Line 605, Address: 0x16f38c, Func Offset: 0xac
	// Line 606, Address: 0x16f3a4, Func Offset: 0xc4
	// Line 607, Address: 0x16f3b4, Func Offset: 0xd4
	// Line 608, Address: 0x16f3bc, Func Offset: 0xdc
	// Line 609, Address: 0x16f3c8, Func Offset: 0xe8
	// Line 610, Address: 0x16f3e8, Func Offset: 0x108
	// Line 611, Address: 0x16f3fc, Func Offset: 0x11c
	// Line 612, Address: 0x16f424, Func Offset: 0x144
	// Line 613, Address: 0x16f43c, Func Offset: 0x15c
	// Func End, Address: 0x16f454, Func Offset: 0x174
}

// 
// Start address: 0x16f460
void fogResetObj()
{
	// Line 619, Address: 0x16f460, Func Offset: 0
	// Line 620, Address: 0x16f468, Func Offset: 0x8
	// Func End, Address: 0x16f470, Func Offset: 0x10
}

// 
// Start address: 0x16f470
void fogSetObj(unsigned long ID, void* Center, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 629, Address: 0x16f470, Func Offset: 0
	// Line 630, Address: 0x16f490, Func Offset: 0x20
	// Line 631, Address: 0x16f4a0, Func Offset: 0x30
	// Line 632, Address: 0x16f4e8, Func Offset: 0x78
	// Line 633, Address: 0x16f4f0, Func Offset: 0x80
	// Line 634, Address: 0x16f4f8, Func Offset: 0x88
	// Line 635, Address: 0x16f4fc, Func Offset: 0x8c
	// Line 636, Address: 0x16f508, Func Offset: 0x98
	// Line 637, Address: 0x16f520, Func Offset: 0xb0
	// Line 638, Address: 0x16f524, Func Offset: 0xb4
	// Line 639, Address: 0x16f528, Func Offset: 0xb8
	// Func End, Address: 0x16f544, Func Offset: 0xd4
}

// 
// Start address: 0x16f550
void fogMoveObj(unsigned long ID, void* Center)
{
	float es;
	FOG_OBJ_DATA* od;
	// Line 647, Address: 0x16f550, Func Offset: 0
	// Line 648, Address: 0x16f560, Func Offset: 0x10
	// Line 650, Address: 0x16f568, Func Offset: 0x18
	// Line 651, Address: 0x16f570, Func Offset: 0x20
	// Line 652, Address: 0x16f574, Func Offset: 0x24
	// Line 653, Address: 0x16f588, Func Offset: 0x38
	// Line 654, Address: 0x16f58c, Func Offset: 0x3c
	// Line 655, Address: 0x16f59c, Func Offset: 0x4c
	// Func End, Address: 0x16f5b0, Func Offset: 0x60
}

// 
// Start address: 0x16f5b0
void fogSetObj2(unsigned long ID, void* Center, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 677, Address: 0x16f5b0, Func Offset: 0
	// Line 678, Address: 0x16f5d0, Func Offset: 0x20
	// Line 679, Address: 0x16f5e0, Func Offset: 0x30
	// Line 680, Address: 0x16f628, Func Offset: 0x78
	// Line 681, Address: 0x16f630, Func Offset: 0x80
	// Line 682, Address: 0x16f638, Func Offset: 0x88
	// Line 683, Address: 0x16f63c, Func Offset: 0x8c
	// Line 684, Address: 0x16f648, Func Offset: 0x98
	// Line 685, Address: 0x16f660, Func Offset: 0xb0
	// Line 686, Address: 0x16f664, Func Offset: 0xb4
	// Line 687, Address: 0x16f66c, Func Offset: 0xbc
	// Func End, Address: 0x16f688, Func Offset: 0xd8
}

// 
// Start address: 0x16f690
void fogEraseObj(unsigned long ID)
{
	FOG_OBJ_DATA* od2;
	FOG_OBJ_DATA* od;
	// Line 694, Address: 0x16f690, Func Offset: 0
	// Line 695, Address: 0x16f6a0, Func Offset: 0x10
	// Line 697, Address: 0x16f6ac, Func Offset: 0x1c
	// Line 698, Address: 0x16f6b4, Func Offset: 0x24
	// Line 699, Address: 0x16f6fc, Func Offset: 0x6c
	// Line 701, Address: 0x16f708, Func Offset: 0x78
	// Line 702, Address: 0x16f70c, Func Offset: 0x7c
	// Line 703, Address: 0x16f710, Func Offset: 0x80
	// Line 704, Address: 0x16f714, Func Offset: 0x84
	// Line 705, Address: 0x16f718, Func Offset: 0x88
	// Line 706, Address: 0x16f71c, Func Offset: 0x8c
	// Line 709, Address: 0x16f720, Func Offset: 0x90
	// Func End, Address: 0x16f734, Func Offset: 0xa4
}

// 
// Start address: 0x16f740
void fogSetObjSize(unsigned long ID, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 715, Address: 0x16f740, Func Offset: 0
	// Line 716, Address: 0x16f754, Func Offset: 0x14
	// Line 717, Address: 0x16f764, Func Offset: 0x24
	// Line 718, Address: 0x16f76c, Func Offset: 0x2c
	// Line 719, Address: 0x16f774, Func Offset: 0x34
	// Func End, Address: 0x16f788, Func Offset: 0x48
}

// 
// Start address: 0x16f790
FOG_OBJ_DATA* fogGetObj(unsigned long ID)
{
	int i;
	FOG_OBJ_DATA* pObj;
	// Line 737, Address: 0x16f790, Func Offset: 0
	// Line 738, Address: 0x16f7a0, Func Offset: 0x10
	// Line 740, Address: 0x16f7a8, Func Offset: 0x18
	// Line 741, Address: 0x16f7c0, Func Offset: 0x30
	// Line 742, Address: 0x16f7d0, Func Offset: 0x40
	// Line 744, Address: 0x16f7dc, Func Offset: 0x4c
	// Line 745, Address: 0x16f7e0, Func Offset: 0x50
	// Line 746, Address: 0x16f7f0, Func Offset: 0x60
	// Line 747, Address: 0x16f7f4, Func Offset: 0x64
	// Func End, Address: 0x16f808, Func Offset: 0x78
}

// 
// Start address: 0x16f810
void fogMoveParticle()
{
	FOG_OBJ_DATA* od;
	int p;
	float* dp;
	float* fv;
	float dm;
	float d;
	float* FVector;
	float* FVector;
	FOG_PART_DATA* pdo;
	FOG_PART_DATA* pd;
	int n2;
	int n1;
	int n;
	// Line 823, Address: 0x16f810, Func Offset: 0
	// Line 825, Address: 0x16f830, Func Offset: 0x20
	// Line 827, Address: 0x16f838, Func Offset: 0x28
	// Line 829, Address: 0x16f840, Func Offset: 0x30
	// Line 830, Address: 0x16f85c, Func Offset: 0x4c
	// Line 831, Address: 0x16f874, Func Offset: 0x64
	// Line 832, Address: 0x16f87c, Func Offset: 0x6c
	// Line 833, Address: 0x16f884, Func Offset: 0x74
	// Line 836, Address: 0x16f88c, Func Offset: 0x7c
	// Line 837, Address: 0x16f8a4, Func Offset: 0x94
	// Line 838, Address: 0x16f8a8, Func Offset: 0x98
	// Line 839, Address: 0x16f8ac, Func Offset: 0x9c
	// Line 840, Address: 0x16f8b0, Func Offset: 0xa0
	// Line 841, Address: 0x16f8b4, Func Offset: 0xa4
	// Line 842, Address: 0x16f8b8, Func Offset: 0xa8
	// Line 843, Address: 0x16f8bc, Func Offset: 0xac
	// Line 844, Address: 0x16f8c0, Func Offset: 0xb0
	// Line 845, Address: 0x16f8c4, Func Offset: 0xb4
	// Line 846, Address: 0x16f8c8, Func Offset: 0xb8
	// Line 849, Address: 0x16f8cc, Func Offset: 0xbc
	// Line 851, Address: 0x16f8d8, Func Offset: 0xc8
	// Line 853, Address: 0x16f8f0, Func Offset: 0xe0
	// Line 855, Address: 0x16f8f8, Func Offset: 0xe8
	// Line 858, Address: 0x16f8fc, Func Offset: 0xec
	// Line 859, Address: 0x16f900, Func Offset: 0xf0
	// Line 860, Address: 0x16f904, Func Offset: 0xf4
	// Line 861, Address: 0x16f908, Func Offset: 0xf8
	// Line 862, Address: 0x16f90c, Func Offset: 0xfc
	// Line 863, Address: 0x16f910, Func Offset: 0x100
	// Line 882, Address: 0x16f918, Func Offset: 0x108
	// Line 883, Address: 0x16f930, Func Offset: 0x120
	// Line 884, Address: 0x16f958, Func Offset: 0x148
	// Line 887, Address: 0x16f964, Func Offset: 0x154
	// Line 888, Address: 0x16f96c, Func Offset: 0x15c
	// Line 889, Address: 0x16f97c, Func Offset: 0x16c
	// Line 890, Address: 0x16f98c, Func Offset: 0x17c
	// Line 892, Address: 0x16f9a4, Func Offset: 0x194
	// Line 895, Address: 0x16f9d4, Func Offset: 0x1c4
	// Line 898, Address: 0x16fab0, Func Offset: 0x2a0
	// Line 900, Address: 0x16fb0c, Func Offset: 0x2fc
	// Line 905, Address: 0x16fb10, Func Offset: 0x300
	// Line 906, Address: 0x16fb1c, Func Offset: 0x30c
	// Line 907, Address: 0x16fb34, Func Offset: 0x324
	// Line 908, Address: 0x16fb54, Func Offset: 0x344
	// Line 910, Address: 0x16fb5c, Func Offset: 0x34c
	// Line 913, Address: 0x16fb78, Func Offset: 0x368
	// Line 915, Address: 0x16fb90, Func Offset: 0x380
	// Line 916, Address: 0x16fb98, Func Offset: 0x388
	// Line 917, Address: 0x16fbb8, Func Offset: 0x3a8
	// Line 918, Address: 0x16fbc8, Func Offset: 0x3b8
	// Line 919, Address: 0x16fbcc, Func Offset: 0x3bc
	// Line 923, Address: 0x16fbd0, Func Offset: 0x3c0
	// Line 930, Address: 0x16fbd8, Func Offset: 0x3c8
	// Line 945, Address: 0x16fbe0, Func Offset: 0x3d0
	// Line 946, Address: 0x16fc10, Func Offset: 0x400
	// Line 963, Address: 0x16fc20, Func Offset: 0x410
	// Line 966, Address: 0x16fc38, Func Offset: 0x428
	// Line 967, Address: 0x16fc40, Func Offset: 0x430
	// Line 968, Address: 0x16fc48, Func Offset: 0x438
	// Line 969, Address: 0x16fc4c, Func Offset: 0x43c
	// Line 970, Address: 0x16fc58, Func Offset: 0x448
	// Line 974, Address: 0x16fc64, Func Offset: 0x454
	// Line 975, Address: 0x16fc70, Func Offset: 0x460
	// Line 976, Address: 0x16fc80, Func Offset: 0x470
	// Line 977, Address: 0x16fc84, Func Offset: 0x474
	// Line 979, Address: 0x16fc88, Func Offset: 0x478
	// Line 980, Address: 0x16fc9c, Func Offset: 0x48c
	// Line 981, Address: 0x16fca0, Func Offset: 0x490
	// Line 982, Address: 0x16fcb0, Func Offset: 0x4a0
	// Line 983, Address: 0x16fcd8, Func Offset: 0x4c8
	// Line 984, Address: 0x16fce0, Func Offset: 0x4d0
	// Line 985, Address: 0x16fcf0, Func Offset: 0x4e0
	// Line 986, Address: 0x16fd18, Func Offset: 0x508
	// Line 987, Address: 0x16fd1c, Func Offset: 0x50c
	// Line 988, Address: 0x16fd2c, Func Offset: 0x51c
	// Line 989, Address: 0x16fd54, Func Offset: 0x544
	// Line 990, Address: 0x16fd60, Func Offset: 0x550
	// Line 992, Address: 0x16fd80, Func Offset: 0x570
	// Line 1008, Address: 0x16fd8c, Func Offset: 0x57c
	// Line 1010, Address: 0x16fd94, Func Offset: 0x584
	// Line 1011, Address: 0x16fd9c, Func Offset: 0x58c
	// Line 1012, Address: 0x16fdac, Func Offset: 0x59c
	// Line 1013, Address: 0x16fdbc, Func Offset: 0x5ac
	// Line 1015, Address: 0x16fdd4, Func Offset: 0x5c4
	// Line 1042, Address: 0x16fe04, Func Offset: 0x5f4
	// Line 1043, Address: 0x16fe08, Func Offset: 0x5f8
	// Line 1044, Address: 0x16fe0c, Func Offset: 0x5fc
	// Line 1045, Address: 0x16fe10, Func Offset: 0x600
	// Line 1046, Address: 0x16fe14, Func Offset: 0x604
	// Line 1047, Address: 0x16fe18, Func Offset: 0x608
	// Line 1048, Address: 0x16fe1c, Func Offset: 0x60c
	// Line 1049, Address: 0x16fe20, Func Offset: 0x610
	// Line 1050, Address: 0x16fe24, Func Offset: 0x614
	// Line 1051, Address: 0x16fe28, Func Offset: 0x618
	// Line 1052, Address: 0x16fe2c, Func Offset: 0x61c
	// Line 1053, Address: 0x16fe30, Func Offset: 0x620
	// Line 1054, Address: 0x16fe34, Func Offset: 0x624
	// Line 1055, Address: 0x16fe38, Func Offset: 0x628
	// Line 1056, Address: 0x16fe3c, Func Offset: 0x62c
	// Line 1057, Address: 0x16fe40, Func Offset: 0x630
	// Line 1061, Address: 0x16fe44, Func Offset: 0x634
	// Line 1062, Address: 0x16fe58, Func Offset: 0x648
	// Line 1065, Address: 0x16fe68, Func Offset: 0x658
	// Line 1068, Address: 0x16fe70, Func Offset: 0x660
	// Line 1069, Address: 0x16fea0, Func Offset: 0x690
	// Line 1071, Address: 0x16feb0, Func Offset: 0x6a0
	// Line 1072, Address: 0x16feb8, Func Offset: 0x6a8
	// Line 1073, Address: 0x16fed0, Func Offset: 0x6c0
	// Line 1074, Address: 0x16fee4, Func Offset: 0x6d4
	// Line 1075, Address: 0x16fee8, Func Offset: 0x6d8
	// Line 1077, Address: 0x16fef8, Func Offset: 0x6e8
	// Func End, Address: 0x16ff20, Func Offset: 0x710
}

// 
// Start address: 0x16ff20
void fog_load_objdata()
{
	// Line 1164, Address: 0x16ff20, Func Offset: 0
	// Line 1192, Address: 0x16ff54, Func Offset: 0x34
	// Line 1193, Address: 0x16ff58, Func Offset: 0x38
	// Line 1195, Address: 0x16ff60, Func Offset: 0x40
	// Line 1196, Address: 0x16ff64, Func Offset: 0x44
	// Line 1197, Address: 0x16ff68, Func Offset: 0x48
	// Line 1198, Address: 0x16ff6c, Func Offset: 0x4c
	// Line 1199, Address: 0x16ff70, Func Offset: 0x50
	// Line 1200, Address: 0x16ff74, Func Offset: 0x54
	// Line 1202, Address: 0x16ff78, Func Offset: 0x58
	// Line 1203, Address: 0x16ff7c, Func Offset: 0x5c
	// Line 1204, Address: 0x16ff80, Func Offset: 0x60
	// Line 1205, Address: 0x16ff84, Func Offset: 0x64
	// Line 1206, Address: 0x16ff88, Func Offset: 0x68
	// Line 1207, Address: 0x16ff8c, Func Offset: 0x6c
	// Line 1208, Address: 0x16ff90, Func Offset: 0x70
	// Line 1209, Address: 0x16ff94, Func Offset: 0x74
	// Line 1210, Address: 0x16ff98, Func Offset: 0x78
	// Line 1211, Address: 0x16ff9c, Func Offset: 0x7c
	// Line 1212, Address: 0x16ffa0, Func Offset: 0x80
	// Line 1213, Address: 0x16ffa4, Func Offset: 0x84
	// Line 1214, Address: 0x16ffa8, Func Offset: 0x88
	// Line 1216, Address: 0x16ffb0, Func Offset: 0x90
	// Line 1217, Address: 0x16ffb4, Func Offset: 0x94
	// Line 1218, Address: 0x16ffb8, Func Offset: 0x98
	// Line 1219, Address: 0x16ffbc, Func Offset: 0x9c
	// Line 1220, Address: 0x16ffc0, Func Offset: 0xa0
	// Line 1221, Address: 0x16ffc4, Func Offset: 0xa4
	// Line 1222, Address: 0x16ffc8, Func Offset: 0xa8
	// Line 1223, Address: 0x16ffcc, Func Offset: 0xac
	// Line 1224, Address: 0x16ffd0, Func Offset: 0xb0
	// Line 1225, Address: 0x16ffd4, Func Offset: 0xb4
	// Line 1228, Address: 0x16ffdc, Func Offset: 0xbc
	// Line 1229, Address: 0x16ffe0, Func Offset: 0xc0
	// Line 1231, Address: 0x16ffe8, Func Offset: 0xc8
	// Line 1233, Address: 0x16fff0, Func Offset: 0xd0
	// Line 1236, Address: 0x16fff8, Func Offset: 0xd8
	// Line 1237, Address: 0x16fffc, Func Offset: 0xdc
	// Line 1240, Address: 0x170004, Func Offset: 0xe4
	// Line 1241, Address: 0x170008, Func Offset: 0xe8
	// Line 1243, Address: 0x170010, Func Offset: 0xf0
	// Line 1245, Address: 0x170018, Func Offset: 0xf8
	// Line 1248, Address: 0x170020, Func Offset: 0x100
	// Line 1249, Address: 0x170024, Func Offset: 0x104
	// Line 1252, Address: 0x17002c, Func Offset: 0x10c
	// Line 1253, Address: 0x170030, Func Offset: 0x110
	// Line 1254, Address: 0x170034, Func Offset: 0x114
	// Line 1256, Address: 0x17003c, Func Offset: 0x11c
	// Line 1258, Address: 0x170044, Func Offset: 0x124
	// Line 1261, Address: 0x17004c, Func Offset: 0x12c
	// Line 1262, Address: 0x170050, Func Offset: 0x130
	// Line 1265, Address: 0x170058, Func Offset: 0x138
	// Line 1266, Address: 0x17005c, Func Offset: 0x13c
	// Line 1267, Address: 0x170060, Func Offset: 0x140
	// Line 1268, Address: 0x170064, Func Offset: 0x144
	// Line 1270, Address: 0x170068, Func Offset: 0x148
	// Line 1271, Address: 0x17006c, Func Offset: 0x14c
	// Line 1272, Address: 0x170070, Func Offset: 0x150
	// Line 1274, Address: 0x170078, Func Offset: 0x158
	// Line 1275, Address: 0x17007c, Func Offset: 0x15c
	// Line 1276, Address: 0x170080, Func Offset: 0x160
	// Line 1277, Address: 0x170084, Func Offset: 0x164
	// Line 1278, Address: 0x170088, Func Offset: 0x168
	// Line 1279, Address: 0x17008c, Func Offset: 0x16c
	// Line 1280, Address: 0x170090, Func Offset: 0x170
	// Line 1281, Address: 0x170094, Func Offset: 0x174
	// Line 1282, Address: 0x170098, Func Offset: 0x178
	// Line 1283, Address: 0x17009c, Func Offset: 0x17c
	// Line 1284, Address: 0x1700a0, Func Offset: 0x180
	// Line 1285, Address: 0x1700a4, Func Offset: 0x184
	// Line 1286, Address: 0x1700a8, Func Offset: 0x188
	// Line 1287, Address: 0x1700ac, Func Offset: 0x18c
	// Line 1290, Address: 0x1700b4, Func Offset: 0x194
	// Line 1291, Address: 0x1700b8, Func Offset: 0x198
	// Line 1292, Address: 0x1700bc, Func Offset: 0x19c
	// Line 1294, Address: 0x1700c0, Func Offset: 0x1a0
	// Line 1296, Address: 0x1700c4, Func Offset: 0x1a4
	// Line 1297, Address: 0x1700c8, Func Offset: 0x1a8
	// Line 1299, Address: 0x1700d0, Func Offset: 0x1b0
	// Line 1301, Address: 0x1700d8, Func Offset: 0x1b8
	// Line 1304, Address: 0x1700e0, Func Offset: 0x1c0
	// Line 1305, Address: 0x1700e4, Func Offset: 0x1c4
	// Line 1308, Address: 0x1700ec, Func Offset: 0x1cc
	// Line 1309, Address: 0x1700f0, Func Offset: 0x1d0
	// Line 1311, Address: 0x1700f8, Func Offset: 0x1d8
	// Line 1313, Address: 0x170100, Func Offset: 0x1e0
	// Line 1316, Address: 0x170108, Func Offset: 0x1e8
	// Line 1317, Address: 0x17010c, Func Offset: 0x1ec
	// Line 1320, Address: 0x170114, Func Offset: 0x1f4
	// Line 1321, Address: 0x170118, Func Offset: 0x1f8
	// Line 1322, Address: 0x17011c, Func Offset: 0x1fc
	// Line 1323, Address: 0x170120, Func Offset: 0x200
	// Line 1324, Address: 0x170124, Func Offset: 0x204
	// Line 1325, Address: 0x170128, Func Offset: 0x208
	// Line 1327, Address: 0x17012c, Func Offset: 0x20c
	// Line 1328, Address: 0x170130, Func Offset: 0x210
	// Line 1329, Address: 0x170134, Func Offset: 0x214
	// Line 1331, Address: 0x17013c, Func Offset: 0x21c
	// Line 1332, Address: 0x170140, Func Offset: 0x220
	// Line 1334, Address: 0x170148, Func Offset: 0x228
	// Line 1335, Address: 0x17014c, Func Offset: 0x22c
	// Line 1336, Address: 0x170150, Func Offset: 0x230
	// Line 1337, Address: 0x170154, Func Offset: 0x234
	// Line 1338, Address: 0x170158, Func Offset: 0x238
	// Line 1339, Address: 0x17015c, Func Offset: 0x23c
	// Line 1340, Address: 0x170160, Func Offset: 0x240
	// Line 1341, Address: 0x170164, Func Offset: 0x244
	// Line 1342, Address: 0x170168, Func Offset: 0x248
	// Line 1343, Address: 0x17016c, Func Offset: 0x24c
	// Line 1344, Address: 0x170170, Func Offset: 0x250
	// Line 1345, Address: 0x170174, Func Offset: 0x254
	// Line 1346, Address: 0x170178, Func Offset: 0x258
	// Line 1347, Address: 0x17017c, Func Offset: 0x25c
	// Line 1348, Address: 0x170180, Func Offset: 0x260
	// Line 1350, Address: 0x170184, Func Offset: 0x264
	// Line 1351, Address: 0x170188, Func Offset: 0x268
	// Line 1354, Address: 0x170190, Func Offset: 0x270
	// Line 1355, Address: 0x170194, Func Offset: 0x274
	// Line 1356, Address: 0x170198, Func Offset: 0x278
	// Line 1357, Address: 0x17019c, Func Offset: 0x27c
	// Line 1364, Address: 0x1701a0, Func Offset: 0x280
	// Func End, Address: 0x1701a8, Func Offset: 0x288
}

// 
// Start address: 0x1701b0
void fog_part_wall()
{
	FOG_WALL_DATA* wall;
	FOG_PART_DATA* pd;
	// Line 1370, Address: 0x1701b0, Func Offset: 0
	// Line 1371, Address: 0x1701b8, Func Offset: 0x8
	// Line 1421, Address: 0x1701c0, Func Offset: 0x10
	// Line 1442, Address: 0x1701d0, Func Offset: 0x20
	// Line 1443, Address: 0x1701d4, Func Offset: 0x24
	// Line 1444, Address: 0x1701d8, Func Offset: 0x28
	// Line 1446, Address: 0x1701dc, Func Offset: 0x2c
	// Line 1448, Address: 0x1701e0, Func Offset: 0x30
	// Line 1449, Address: 0x1701e4, Func Offset: 0x34
	// Line 1450, Address: 0x1701e8, Func Offset: 0x38
	// Line 1451, Address: 0x1701ec, Func Offset: 0x3c
	// Line 1452, Address: 0x1701f0, Func Offset: 0x40
	// Line 1453, Address: 0x1701f4, Func Offset: 0x44
	// Line 1454, Address: 0x1701f8, Func Offset: 0x48
	// Line 1455, Address: 0x1701fc, Func Offset: 0x4c
	// Line 1456, Address: 0x170200, Func Offset: 0x50
	// Line 1457, Address: 0x170204, Func Offset: 0x54
	// Line 1458, Address: 0x170208, Func Offset: 0x58
	// Line 1459, Address: 0x17020c, Func Offset: 0x5c
	// Line 1461, Address: 0x170214, Func Offset: 0x64
	// Line 1462, Address: 0x170218, Func Offset: 0x68
	// Line 1463, Address: 0x17021c, Func Offset: 0x6c
	// Line 1464, Address: 0x170220, Func Offset: 0x70
	// Line 1465, Address: 0x170224, Func Offset: 0x74
	// Line 1466, Address: 0x170228, Func Offset: 0x78
	// Line 1467, Address: 0x17022c, Func Offset: 0x7c
	// Line 1468, Address: 0x170230, Func Offset: 0x80
	// Line 1469, Address: 0x170234, Func Offset: 0x84
	// Line 1470, Address: 0x170238, Func Offset: 0x88
	// Line 1471, Address: 0x17023c, Func Offset: 0x8c
	// Line 1472, Address: 0x170240, Func Offset: 0x90
	// Line 1473, Address: 0x170244, Func Offset: 0x94
	// Line 1474, Address: 0x170248, Func Offset: 0x98
	// Line 1475, Address: 0x17024c, Func Offset: 0x9c
	// Line 1477, Address: 0x170254, Func Offset: 0xa4
	// Line 1478, Address: 0x170258, Func Offset: 0xa8
	// Line 1481, Address: 0x170260, Func Offset: 0xb0
	// Line 1482, Address: 0x170264, Func Offset: 0xb4
	// Line 1483, Address: 0x170268, Func Offset: 0xb8
	// Line 1484, Address: 0x17026c, Func Offset: 0xbc
	// Line 1485, Address: 0x170270, Func Offset: 0xc0
	// Line 1486, Address: 0x170274, Func Offset: 0xc4
	// Line 1488, Address: 0x17027c, Func Offset: 0xcc
	// Line 1489, Address: 0x170280, Func Offset: 0xd0
	// Line 1490, Address: 0x170284, Func Offset: 0xd4
	// Line 1493, Address: 0x17028c, Func Offset: 0xdc
	// Line 1494, Address: 0x170290, Func Offset: 0xe0
	// Line 1495, Address: 0x170294, Func Offset: 0xe4
	// Line 1497, Address: 0x170298, Func Offset: 0xe8
	// Line 1498, Address: 0x17029c, Func Offset: 0xec
	// Line 1499, Address: 0x1702a0, Func Offset: 0xf0
	// Line 1500, Address: 0x1702a4, Func Offset: 0xf4
	// Line 1501, Address: 0x1702a8, Func Offset: 0xf8
	// Line 1502, Address: 0x1702ac, Func Offset: 0xfc
	// Line 1503, Address: 0x1702b0, Func Offset: 0x100
	// Line 1504, Address: 0x1702b4, Func Offset: 0x104
	// Line 1505, Address: 0x1702b8, Func Offset: 0x108
	// Line 1506, Address: 0x1702bc, Func Offset: 0x10c
	// Line 1507, Address: 0x1702c0, Func Offset: 0x110
	// Line 1508, Address: 0x1702c4, Func Offset: 0x114
	// Line 1509, Address: 0x1702c8, Func Offset: 0x118
	// Line 1510, Address: 0x1702cc, Func Offset: 0x11c
	// Line 1511, Address: 0x1702d0, Func Offset: 0x120
	// Line 1512, Address: 0x1702d4, Func Offset: 0x124
	// Line 1513, Address: 0x1702d8, Func Offset: 0x128
	// Line 1516, Address: 0x1702e0, Func Offset: 0x130
	// Line 1517, Address: 0x1702e4, Func Offset: 0x134
	// Line 1519, Address: 0x1702ec, Func Offset: 0x13c
	// Line 1520, Address: 0x1702f0, Func Offset: 0x140
	// Line 1521, Address: 0x1702f4, Func Offset: 0x144
	// Line 1522, Address: 0x1702f8, Func Offset: 0x148
	// Line 1523, Address: 0x1702fc, Func Offset: 0x14c
	// Line 1528, Address: 0x170300, Func Offset: 0x150
	// Func End, Address: 0x170308, Func Offset: 0x158
}

// 
// Start address: 0x170310
void fog_part_grid()
{
	float* GridDenseNew;
	float* GridDense;
	float GridWind[4];
	FOG_PART_DATA* pd;
	// Line 1536, Address: 0x170310, Func Offset: 0
	// Line 1537, Address: 0x170328, Func Offset: 0x18
	// Line 1538, Address: 0x170330, Func Offset: 0x20
	// Line 1539, Address: 0x170334, Func Offset: 0x24
	// Line 1540, Address: 0x17033c, Func Offset: 0x2c
	// Line 2162, Address: 0x170344, Func Offset: 0x34
	// Line 2163, Address: 0x170348, Func Offset: 0x38
	// Line 2164, Address: 0x17034c, Func Offset: 0x3c
	// Line 2165, Address: 0x170350, Func Offset: 0x40
	// Line 2166, Address: 0x170354, Func Offset: 0x44
	// Line 2167, Address: 0x170358, Func Offset: 0x48
	// Line 2168, Address: 0x17035c, Func Offset: 0x4c
	// Line 2169, Address: 0x170360, Func Offset: 0x50
	// Line 2170, Address: 0x170364, Func Offset: 0x54
	// Line 2171, Address: 0x170368, Func Offset: 0x58
	// Line 2172, Address: 0x17036c, Func Offset: 0x5c
	// Line 2173, Address: 0x170370, Func Offset: 0x60
	// Line 2176, Address: 0x170378, Func Offset: 0x68
	// Line 2179, Address: 0x170380, Func Offset: 0x70
	// Line 2180, Address: 0x170384, Func Offset: 0x74
	// Line 2183, Address: 0x17038c, Func Offset: 0x7c
	// Line 2184, Address: 0x170390, Func Offset: 0x80
	// Line 2185, Address: 0x170394, Func Offset: 0x84
	// Line 2186, Address: 0x170398, Func Offset: 0x88
	// Line 2187, Address: 0x17039c, Func Offset: 0x8c
	// Line 2188, Address: 0x1703a0, Func Offset: 0x90
	// Line 2189, Address: 0x1703a4, Func Offset: 0x94
	// Line 2190, Address: 0x1703a8, Func Offset: 0x98
	// Line 2191, Address: 0x1703ac, Func Offset: 0x9c
	// Line 2192, Address: 0x1703b0, Func Offset: 0xa0
	// Line 2193, Address: 0x1703b4, Func Offset: 0xa4
	// Line 2194, Address: 0x1703b8, Func Offset: 0xa8
	// Line 2195, Address: 0x1703bc, Func Offset: 0xac
	// Line 2196, Address: 0x1703c0, Func Offset: 0xb0
	// Line 2197, Address: 0x1703c4, Func Offset: 0xb4
	// Line 2198, Address: 0x1703c8, Func Offset: 0xb8
	// Line 2199, Address: 0x1703cc, Func Offset: 0xbc
	// Line 2200, Address: 0x1703d0, Func Offset: 0xc0
	// Line 2201, Address: 0x1703d4, Func Offset: 0xc4
	// Line 2202, Address: 0x1703d8, Func Offset: 0xc8
	// Line 2203, Address: 0x1703dc, Func Offset: 0xcc
	// Line 2204, Address: 0x1703e0, Func Offset: 0xd0
	// Line 2205, Address: 0x1703e4, Func Offset: 0xd4
	// Line 2206, Address: 0x1703e8, Func Offset: 0xd8
	// Line 2207, Address: 0x1703ec, Func Offset: 0xdc
	// Line 2208, Address: 0x1703f0, Func Offset: 0xe0
	// Line 2209, Address: 0x1703f4, Func Offset: 0xe4
	// Line 2210, Address: 0x1703f8, Func Offset: 0xe8
	// Line 2211, Address: 0x1703fc, Func Offset: 0xec
	// Line 2212, Address: 0x170400, Func Offset: 0xf0
	// Line 2213, Address: 0x170404, Func Offset: 0xf4
	// Line 2214, Address: 0x170408, Func Offset: 0xf8
	// Line 2216, Address: 0x17040c, Func Offset: 0xfc
	// Line 2218, Address: 0x170410, Func Offset: 0x100
	// Line 2219, Address: 0x170414, Func Offset: 0x104
	// Line 2220, Address: 0x170418, Func Offset: 0x108
	// Line 2221, Address: 0x17041c, Func Offset: 0x10c
	// Line 2222, Address: 0x170420, Func Offset: 0x110
	// Line 2223, Address: 0x170424, Func Offset: 0x114
	// Line 2224, Address: 0x170428, Func Offset: 0x118
	// Line 2225, Address: 0x17042c, Func Offset: 0x11c
	// Line 2226, Address: 0x170430, Func Offset: 0x120
	// Line 2227, Address: 0x170434, Func Offset: 0x124
	// Line 2228, Address: 0x170438, Func Offset: 0x128
	// Line 2229, Address: 0x17043c, Func Offset: 0x12c
	// Line 2230, Address: 0x170440, Func Offset: 0x130
	// Line 2231, Address: 0x170444, Func Offset: 0x134
	// Line 2233, Address: 0x170448, Func Offset: 0x138
	// Line 2234, Address: 0x17044c, Func Offset: 0x13c
	// Line 2235, Address: 0x170450, Func Offset: 0x140
	// Line 2236, Address: 0x170454, Func Offset: 0x144
	// Line 2237, Address: 0x170458, Func Offset: 0x148
	// Line 2238, Address: 0x17045c, Func Offset: 0x14c
	// Line 2239, Address: 0x170460, Func Offset: 0x150
	// Line 2240, Address: 0x170464, Func Offset: 0x154
	// Line 2241, Address: 0x170468, Func Offset: 0x158
	// Line 2242, Address: 0x17046c, Func Offset: 0x15c
	// Line 2243, Address: 0x170470, Func Offset: 0x160
	// Line 2244, Address: 0x170474, Func Offset: 0x164
	// Line 2246, Address: 0x170478, Func Offset: 0x168
	// Line 2247, Address: 0x17047c, Func Offset: 0x16c
	// Line 2248, Address: 0x170480, Func Offset: 0x170
	// Line 2249, Address: 0x170484, Func Offset: 0x174
	// Line 2250, Address: 0x170488, Func Offset: 0x178
	// Line 2251, Address: 0x17048c, Func Offset: 0x17c
	// Line 2252, Address: 0x170490, Func Offset: 0x180
	// Line 2253, Address: 0x170494, Func Offset: 0x184
	// Line 2254, Address: 0x170498, Func Offset: 0x188
	// Line 2255, Address: 0x17049c, Func Offset: 0x18c
	// Line 2256, Address: 0x1704a0, Func Offset: 0x190
	// Line 2257, Address: 0x1704a4, Func Offset: 0x194
	// Line 2258, Address: 0x1704a8, Func Offset: 0x198
	// Line 2259, Address: 0x1704ac, Func Offset: 0x19c
	// Line 2261, Address: 0x1704b0, Func Offset: 0x1a0
	// Line 2262, Address: 0x1704b4, Func Offset: 0x1a4
	// Line 2263, Address: 0x1704b8, Func Offset: 0x1a8
	// Line 2264, Address: 0x1704bc, Func Offset: 0x1ac
	// Line 2265, Address: 0x1704c0, Func Offset: 0x1b0
	// Line 2266, Address: 0x1704c4, Func Offset: 0x1b4
	// Line 2267, Address: 0x1704c8, Func Offset: 0x1b8
	// Line 2268, Address: 0x1704cc, Func Offset: 0x1bc
	// Line 2269, Address: 0x1704d0, Func Offset: 0x1c0
	// Line 2270, Address: 0x1704d4, Func Offset: 0x1c4
	// Line 2271, Address: 0x1704d8, Func Offset: 0x1c8
	// Line 2273, Address: 0x1704dc, Func Offset: 0x1cc
	// Line 2274, Address: 0x1704e0, Func Offset: 0x1d0
	// Line 2275, Address: 0x1704e4, Func Offset: 0x1d4
	// Line 2276, Address: 0x1704e8, Func Offset: 0x1d8
	// Line 2277, Address: 0x1704ec, Func Offset: 0x1dc
	// Line 2278, Address: 0x1704f0, Func Offset: 0x1e0
	// Line 2279, Address: 0x1704f4, Func Offset: 0x1e4
	// Line 2280, Address: 0x1704f8, Func Offset: 0x1e8
	// Line 2281, Address: 0x1704fc, Func Offset: 0x1ec
	// Line 2282, Address: 0x170500, Func Offset: 0x1f0
	// Line 2283, Address: 0x170504, Func Offset: 0x1f4
	// Line 2284, Address: 0x170508, Func Offset: 0x1f8
	// Line 2285, Address: 0x17050c, Func Offset: 0x1fc
	// Line 2286, Address: 0x170510, Func Offset: 0x200
	// Line 2288, Address: 0x170514, Func Offset: 0x204
	// Line 2289, Address: 0x170518, Func Offset: 0x208
	// Line 2290, Address: 0x17051c, Func Offset: 0x20c
	// Line 2291, Address: 0x170520, Func Offset: 0x210
	// Line 2292, Address: 0x170524, Func Offset: 0x214
	// Line 2293, Address: 0x170528, Func Offset: 0x218
	// Line 2294, Address: 0x17052c, Func Offset: 0x21c
	// Line 2295, Address: 0x170530, Func Offset: 0x220
	// Line 2296, Address: 0x170534, Func Offset: 0x224
	// Line 2297, Address: 0x170538, Func Offset: 0x228
	// Line 2298, Address: 0x17053c, Func Offset: 0x22c
	// Line 2300, Address: 0x170540, Func Offset: 0x230
	// Line 2301, Address: 0x170544, Func Offset: 0x234
	// Line 2302, Address: 0x170548, Func Offset: 0x238
	// Line 2303, Address: 0x17054c, Func Offset: 0x23c
	// Line 2304, Address: 0x170550, Func Offset: 0x240
	// Line 2305, Address: 0x170554, Func Offset: 0x244
	// Line 2306, Address: 0x170558, Func Offset: 0x248
	// Line 2307, Address: 0x17055c, Func Offset: 0x24c
	// Line 2308, Address: 0x170560, Func Offset: 0x250
	// Line 2309, Address: 0x170564, Func Offset: 0x254
	// Line 2310, Address: 0x170568, Func Offset: 0x258
	// Line 2311, Address: 0x17056c, Func Offset: 0x25c
	// Line 2312, Address: 0x170570, Func Offset: 0x260
	// Line 2313, Address: 0x170574, Func Offset: 0x264
	// Line 2315, Address: 0x170578, Func Offset: 0x268
	// Line 2316, Address: 0x17057c, Func Offset: 0x26c
	// Line 2317, Address: 0x170580, Func Offset: 0x270
	// Line 2318, Address: 0x170584, Func Offset: 0x274
	// Line 2319, Address: 0x170588, Func Offset: 0x278
	// Line 2320, Address: 0x17058c, Func Offset: 0x27c
	// Line 2321, Address: 0x170590, Func Offset: 0x280
	// Line 2322, Address: 0x170594, Func Offset: 0x284
	// Line 2323, Address: 0x170598, Func Offset: 0x288
	// Line 2324, Address: 0x17059c, Func Offset: 0x28c
	// Line 2325, Address: 0x1705a0, Func Offset: 0x290
	// Line 2326, Address: 0x1705a4, Func Offset: 0x294
	// Line 2327, Address: 0x1705a8, Func Offset: 0x298
	// Line 2328, Address: 0x1705ac, Func Offset: 0x29c
	// Line 2329, Address: 0x1705b0, Func Offset: 0x2a0
	// Line 2330, Address: 0x1705b4, Func Offset: 0x2a4
	// Line 2331, Address: 0x1705b8, Func Offset: 0x2a8
	// Line 2332, Address: 0x1705bc, Func Offset: 0x2ac
	// Line 2333, Address: 0x1705c0, Func Offset: 0x2b0
	// Line 2334, Address: 0x1705c4, Func Offset: 0x2b4
	// Line 2335, Address: 0x1705c8, Func Offset: 0x2b8
	// Line 2337, Address: 0x1705cc, Func Offset: 0x2bc
	// Line 2340, Address: 0x1705d4, Func Offset: 0x2c4
	// Line 2343, Address: 0x1705dc, Func Offset: 0x2cc
	// Line 2344, Address: 0x1705e0, Func Offset: 0x2d0
	// Line 2347, Address: 0x1705e8, Func Offset: 0x2d8
	// Line 2348, Address: 0x1705ec, Func Offset: 0x2dc
	// Line 2349, Address: 0x1705f0, Func Offset: 0x2e0
	// Line 2350, Address: 0x1705f4, Func Offset: 0x2e4
	// Line 2351, Address: 0x1705f8, Func Offset: 0x2e8
	// Line 2352, Address: 0x1705fc, Func Offset: 0x2ec
	// Line 2353, Address: 0x170600, Func Offset: 0x2f0
	// Line 2354, Address: 0x170604, Func Offset: 0x2f4
	// Line 2355, Address: 0x170608, Func Offset: 0x2f8
	// Line 2356, Address: 0x17060c, Func Offset: 0x2fc
	// Line 2357, Address: 0x170610, Func Offset: 0x300
	// Line 2358, Address: 0x170614, Func Offset: 0x304
	// Line 2359, Address: 0x170618, Func Offset: 0x308
	// Line 2360, Address: 0x17061c, Func Offset: 0x30c
	// Line 2361, Address: 0x170620, Func Offset: 0x310
	// Line 2362, Address: 0x170624, Func Offset: 0x314
	// Line 2363, Address: 0x170628, Func Offset: 0x318
	// Line 2364, Address: 0x17062c, Func Offset: 0x31c
	// Line 2365, Address: 0x170630, Func Offset: 0x320
	// Line 2366, Address: 0x170634, Func Offset: 0x324
	// Line 2367, Address: 0x170638, Func Offset: 0x328
	// Line 2368, Address: 0x17063c, Func Offset: 0x32c
	// Line 2369, Address: 0x170640, Func Offset: 0x330
	// Line 2371, Address: 0x170644, Func Offset: 0x334
	// Line 2372, Address: 0x170648, Func Offset: 0x338
	// Line 2373, Address: 0x17064c, Func Offset: 0x33c
	// Line 2375, Address: 0x170650, Func Offset: 0x340
	// Line 2376, Address: 0x170654, Func Offset: 0x344
	// Line 2377, Address: 0x170658, Func Offset: 0x348
	// Line 2378, Address: 0x17065c, Func Offset: 0x34c
	// Line 2379, Address: 0x170660, Func Offset: 0x350
	// Line 2380, Address: 0x170664, Func Offset: 0x354
	// Line 2381, Address: 0x170668, Func Offset: 0x358
	// Line 2383, Address: 0x17066c, Func Offset: 0x35c
	// Line 2384, Address: 0x170670, Func Offset: 0x360
	// Line 2385, Address: 0x170674, Func Offset: 0x364
	// Line 2386, Address: 0x170678, Func Offset: 0x368
	// Line 2387, Address: 0x17067c, Func Offset: 0x36c
	// Line 2388, Address: 0x170680, Func Offset: 0x370
	// Line 2389, Address: 0x170684, Func Offset: 0x374
	// Line 2390, Address: 0x170688, Func Offset: 0x378
	// Line 2391, Address: 0x17068c, Func Offset: 0x37c
	// Line 2392, Address: 0x170690, Func Offset: 0x380
	// Line 2394, Address: 0x170694, Func Offset: 0x384
	// Line 2395, Address: 0x170698, Func Offset: 0x388
	// Line 2396, Address: 0x17069c, Func Offset: 0x38c
	// Line 2398, Address: 0x1706a0, Func Offset: 0x390
	// Line 2399, Address: 0x1706a4, Func Offset: 0x394
	// Line 2400, Address: 0x1706a8, Func Offset: 0x398
	// Line 2401, Address: 0x1706ac, Func Offset: 0x39c
	// Line 2402, Address: 0x1706b0, Func Offset: 0x3a0
	// Line 2404, Address: 0x1706b4, Func Offset: 0x3a4
	// Line 2405, Address: 0x1706b8, Func Offset: 0x3a8
	// Line 2406, Address: 0x1706bc, Func Offset: 0x3ac
	// Line 2407, Address: 0x1706c0, Func Offset: 0x3b0
	// Line 2408, Address: 0x1706c4, Func Offset: 0x3b4
	// Line 2409, Address: 0x1706c8, Func Offset: 0x3b8
	// Line 2410, Address: 0x1706cc, Func Offset: 0x3bc
	// Line 2412, Address: 0x1706d0, Func Offset: 0x3c0
	// Line 2413, Address: 0x1706d4, Func Offset: 0x3c4
	// Line 2414, Address: 0x1706d8, Func Offset: 0x3c8
	// Line 2415, Address: 0x1706dc, Func Offset: 0x3cc
	// Line 2416, Address: 0x1706e0, Func Offset: 0x3d0
	// Line 2417, Address: 0x1706e4, Func Offset: 0x3d4
	// Line 2419, Address: 0x1706e8, Func Offset: 0x3d8
	// Line 2420, Address: 0x1706ec, Func Offset: 0x3dc
	// Line 2421, Address: 0x1706f0, Func Offset: 0x3e0
	// Line 2423, Address: 0x1706f4, Func Offset: 0x3e4
	// Line 2424, Address: 0x1706f8, Func Offset: 0x3e8
	// Line 2425, Address: 0x1706fc, Func Offset: 0x3ec
	// Line 2426, Address: 0x170700, Func Offset: 0x3f0
	// Line 2427, Address: 0x170704, Func Offset: 0x3f4
	// Line 2429, Address: 0x170708, Func Offset: 0x3f8
	// Line 2430, Address: 0x17070c, Func Offset: 0x3fc
	// Line 2431, Address: 0x170710, Func Offset: 0x400
	// Line 2432, Address: 0x170714, Func Offset: 0x404
	// Line 2433, Address: 0x170718, Func Offset: 0x408
	// Line 2434, Address: 0x17071c, Func Offset: 0x40c
	// Line 2435, Address: 0x170720, Func Offset: 0x410
	// Line 2437, Address: 0x170724, Func Offset: 0x414
	// Line 2438, Address: 0x170728, Func Offset: 0x418
	// Line 2439, Address: 0x17072c, Func Offset: 0x41c
	// Line 2440, Address: 0x170730, Func Offset: 0x420
	// Line 2441, Address: 0x170734, Func Offset: 0x424
	// Line 2443, Address: 0x170738, Func Offset: 0x428
	// Line 2444, Address: 0x17073c, Func Offset: 0x42c
	// Line 2445, Address: 0x170740, Func Offset: 0x430
	// Line 2446, Address: 0x170744, Func Offset: 0x434
	// Line 2448, Address: 0x170748, Func Offset: 0x438
	// Line 2449, Address: 0x17074c, Func Offset: 0x43c
	// Line 2450, Address: 0x170750, Func Offset: 0x440
	// Line 2451, Address: 0x170754, Func Offset: 0x444
	// Line 2452, Address: 0x170758, Func Offset: 0x448
	// Line 2454, Address: 0x17075c, Func Offset: 0x44c
	// Line 2455, Address: 0x170760, Func Offset: 0x450
	// Line 2456, Address: 0x170764, Func Offset: 0x454
	// Line 2457, Address: 0x170768, Func Offset: 0x458
	// Line 2458, Address: 0x17076c, Func Offset: 0x45c
	// Line 2459, Address: 0x170770, Func Offset: 0x460
	// Line 2460, Address: 0x170774, Func Offset: 0x464
	// Line 2462, Address: 0x170778, Func Offset: 0x468
	// Line 2463, Address: 0x17077c, Func Offset: 0x46c
	// Line 2464, Address: 0x170780, Func Offset: 0x470
	// Line 2465, Address: 0x170784, Func Offset: 0x474
	// Line 2466, Address: 0x170788, Func Offset: 0x478
	// Line 2468, Address: 0x17078c, Func Offset: 0x47c
	// Line 2469, Address: 0x170790, Func Offset: 0x480
	// Line 2470, Address: 0x170794, Func Offset: 0x484
	// Line 2471, Address: 0x170798, Func Offset: 0x488
	// Line 2472, Address: 0x17079c, Func Offset: 0x48c
	// Line 2474, Address: 0x1707a0, Func Offset: 0x490
	// Line 2475, Address: 0x1707a4, Func Offset: 0x494
	// Line 2476, Address: 0x1707a8, Func Offset: 0x498
	// Line 2477, Address: 0x1707ac, Func Offset: 0x49c
	// Line 2478, Address: 0x1707b0, Func Offset: 0x4a0
	// Line 2479, Address: 0x1707b4, Func Offset: 0x4a4
	// Line 2480, Address: 0x1707b8, Func Offset: 0x4a8
	// Line 2481, Address: 0x1707bc, Func Offset: 0x4ac
	// Line 2483, Address: 0x1707c0, Func Offset: 0x4b0
	// Line 2484, Address: 0x1707c4, Func Offset: 0x4b4
	// Line 2485, Address: 0x1707c8, Func Offset: 0x4b8
	// Line 2486, Address: 0x1707cc, Func Offset: 0x4bc
	// Line 2488, Address: 0x1707d0, Func Offset: 0x4c0
	// Line 2489, Address: 0x1707d4, Func Offset: 0x4c4
	// Line 2490, Address: 0x1707d8, Func Offset: 0x4c8
	// Line 2491, Address: 0x1707dc, Func Offset: 0x4cc
	// Line 2492, Address: 0x1707e0, Func Offset: 0x4d0
	// Line 2494, Address: 0x1707e4, Func Offset: 0x4d4
	// Line 2495, Address: 0x1707e8, Func Offset: 0x4d8
	// Line 2496, Address: 0x1707ec, Func Offset: 0x4dc
	// Line 2497, Address: 0x1707f0, Func Offset: 0x4e0
	// Line 2499, Address: 0x1707f4, Func Offset: 0x4e4
	// Line 2500, Address: 0x1707f8, Func Offset: 0x4e8
	// Line 2501, Address: 0x1707fc, Func Offset: 0x4ec
	// Line 2502, Address: 0x170800, Func Offset: 0x4f0
	// Line 2503, Address: 0x170804, Func Offset: 0x4f4
	// Line 2505, Address: 0x170808, Func Offset: 0x4f8
	// Line 2506, Address: 0x17080c, Func Offset: 0x4fc
	// Line 2507, Address: 0x170810, Func Offset: 0x500
	// Line 2508, Address: 0x170814, Func Offset: 0x504
	// Line 2509, Address: 0x170818, Func Offset: 0x508
	// Line 2510, Address: 0x17081c, Func Offset: 0x50c
	// Line 2512, Address: 0x170820, Func Offset: 0x510
	// Line 2513, Address: 0x170824, Func Offset: 0x514
	// Line 2514, Address: 0x170828, Func Offset: 0x518
	// Line 2516, Address: 0x17082c, Func Offset: 0x51c
	// Line 2517, Address: 0x170830, Func Offset: 0x520
	// Line 2518, Address: 0x170834, Func Offset: 0x524
	// Line 2519, Address: 0x170838, Func Offset: 0x528
	// Line 2520, Address: 0x17083c, Func Offset: 0x52c
	// Line 2522, Address: 0x170840, Func Offset: 0x530
	// Line 2523, Address: 0x170844, Func Offset: 0x534
	// Line 2524, Address: 0x170848, Func Offset: 0x538
	// Line 2525, Address: 0x17084c, Func Offset: 0x53c
	// Line 2526, Address: 0x170850, Func Offset: 0x540
	// Line 2527, Address: 0x170854, Func Offset: 0x544
	// Line 2528, Address: 0x170858, Func Offset: 0x548
	// Line 2529, Address: 0x17085c, Func Offset: 0x54c
	// Line 2531, Address: 0x170860, Func Offset: 0x550
	// Line 2532, Address: 0x170864, Func Offset: 0x554
	// Line 2533, Address: 0x170868, Func Offset: 0x558
	// Line 2534, Address: 0x17086c, Func Offset: 0x55c
	// Line 2536, Address: 0x170870, Func Offset: 0x560
	// Line 2537, Address: 0x170874, Func Offset: 0x564
	// Line 2538, Address: 0x170878, Func Offset: 0x568
	// Line 2539, Address: 0x17087c, Func Offset: 0x56c
	// Line 2540, Address: 0x170880, Func Offset: 0x570
	// Line 2541, Address: 0x170884, Func Offset: 0x574
	// Line 2542, Address: 0x170888, Func Offset: 0x578
	// Line 2544, Address: 0x17088c, Func Offset: 0x57c
	// Line 2545, Address: 0x170890, Func Offset: 0x580
	// Line 2546, Address: 0x170894, Func Offset: 0x584
	// Line 2547, Address: 0x170898, Func Offset: 0x588
	// Line 2549, Address: 0x17089c, Func Offset: 0x58c
	// Line 2550, Address: 0x1708a0, Func Offset: 0x590
	// Line 2551, Address: 0x1708a4, Func Offset: 0x594
	// Line 2552, Address: 0x1708a8, Func Offset: 0x598
	// Line 2553, Address: 0x1708ac, Func Offset: 0x59c
	// Line 2555, Address: 0x1708b0, Func Offset: 0x5a0
	// Line 2556, Address: 0x1708b4, Func Offset: 0x5a4
	// Line 2557, Address: 0x1708b8, Func Offset: 0x5a8
	// Line 2558, Address: 0x1708bc, Func Offset: 0x5ac
	// Line 2560, Address: 0x1708c0, Func Offset: 0x5b0
	// Line 2561, Address: 0x1708c4, Func Offset: 0x5b4
	// Line 2562, Address: 0x1708c8, Func Offset: 0x5b8
	// Line 2563, Address: 0x1708cc, Func Offset: 0x5bc
	// Line 2564, Address: 0x1708d0, Func Offset: 0x5c0
	// Line 2566, Address: 0x1708d4, Func Offset: 0x5c4
	// Line 2567, Address: 0x1708d8, Func Offset: 0x5c8
	// Line 2568, Address: 0x1708dc, Func Offset: 0x5cc
	// Line 2569, Address: 0x1708e0, Func Offset: 0x5d0
	// Line 2571, Address: 0x1708e4, Func Offset: 0x5d4
	// Line 2572, Address: 0x1708e8, Func Offset: 0x5d8
	// Line 2573, Address: 0x1708ec, Func Offset: 0x5dc
	// Line 2574, Address: 0x1708f0, Func Offset: 0x5e0
	// Line 2575, Address: 0x1708f4, Func Offset: 0x5e4
	// Line 2576, Address: 0x1708f8, Func Offset: 0x5e8
	// Line 2577, Address: 0x1708fc, Func Offset: 0x5ec
	// Line 2578, Address: 0x170900, Func Offset: 0x5f0
	// Line 2579, Address: 0x170904, Func Offset: 0x5f4
	// Line 2580, Address: 0x170908, Func Offset: 0x5f8
	// Line 2581, Address: 0x17090c, Func Offset: 0x5fc
	// Line 2582, Address: 0x170910, Func Offset: 0x600
	// Line 2583, Address: 0x170914, Func Offset: 0x604
	// Line 2584, Address: 0x170918, Func Offset: 0x608
	// Line 2585, Address: 0x17091c, Func Offset: 0x60c
	// Line 2586, Address: 0x170920, Func Offset: 0x610
	// Line 2587, Address: 0x170924, Func Offset: 0x614
	// Line 2588, Address: 0x170928, Func Offset: 0x618
	// Line 2589, Address: 0x17092c, Func Offset: 0x61c
	// Line 2590, Address: 0x170930, Func Offset: 0x620
	// Line 2591, Address: 0x170934, Func Offset: 0x624
	// Line 2599, Address: 0x170938, Func Offset: 0x628
	// Func End, Address: 0x170958, Func Offset: 0x648
}

// 
// Start address: 0x170960
void fog_part_obj()
{
	FOG_OBJ_DATA* od;
	FOG_PART_DATA* pd;
	// Line 2605, Address: 0x170960, Func Offset: 0
	// Line 2606, Address: 0x170968, Func Offset: 0x8
	// Line 2640, Address: 0x17096c, Func Offset: 0xc
	// Line 2659, Address: 0x17097c, Func Offset: 0x1c
	// Line 2660, Address: 0x170980, Func Offset: 0x20
	// Line 2661, Address: 0x170984, Func Offset: 0x24
	// Line 2662, Address: 0x170988, Func Offset: 0x28
	// Line 2663, Address: 0x17098c, Func Offset: 0x2c
	// Line 2664, Address: 0x170990, Func Offset: 0x30
	// Line 2665, Address: 0x170994, Func Offset: 0x34
	// Line 2666, Address: 0x170998, Func Offset: 0x38
	// Line 2668, Address: 0x17099c, Func Offset: 0x3c
	// Line 2669, Address: 0x1709a0, Func Offset: 0x40
	// Line 2670, Address: 0x1709a4, Func Offset: 0x44
	// Line 2671, Address: 0x1709a8, Func Offset: 0x48
	// Line 2673, Address: 0x1709b0, Func Offset: 0x50
	// Line 2674, Address: 0x1709b4, Func Offset: 0x54
	// Line 2675, Address: 0x1709b8, Func Offset: 0x58
	// Line 2676, Address: 0x1709bc, Func Offset: 0x5c
	// Line 2677, Address: 0x1709c0, Func Offset: 0x60
	// Line 2678, Address: 0x1709c4, Func Offset: 0x64
	// Line 2679, Address: 0x1709c8, Func Offset: 0x68
	// Line 2680, Address: 0x1709cc, Func Offset: 0x6c
	// Line 2681, Address: 0x1709d0, Func Offset: 0x70
	// Line 2682, Address: 0x1709d4, Func Offset: 0x74
	// Line 2683, Address: 0x1709d8, Func Offset: 0x78
	// Line 2685, Address: 0x1709e0, Func Offset: 0x80
	// Line 2686, Address: 0x1709e4, Func Offset: 0x84
	// Line 2687, Address: 0x1709e8, Func Offset: 0x88
	// Line 2688, Address: 0x1709ec, Func Offset: 0x8c
	// Line 2689, Address: 0x1709f0, Func Offset: 0x90
	// Line 2690, Address: 0x1709f4, Func Offset: 0x94
	// Line 2691, Address: 0x1709f8, Func Offset: 0x98
	// Line 2692, Address: 0x1709fc, Func Offset: 0x9c
	// Line 2693, Address: 0x170a00, Func Offset: 0xa0
	// Line 2694, Address: 0x170a04, Func Offset: 0xa4
	// Line 2695, Address: 0x170a08, Func Offset: 0xa8
	// Line 2696, Address: 0x170a0c, Func Offset: 0xac
	// Line 2697, Address: 0x170a10, Func Offset: 0xb0
	// Line 2698, Address: 0x170a14, Func Offset: 0xb4
	// Line 2699, Address: 0x170a18, Func Offset: 0xb8
	// Line 2701, Address: 0x170a20, Func Offset: 0xc0
	// Line 2702, Address: 0x170a24, Func Offset: 0xc4
	// Line 2704, Address: 0x170a28, Func Offset: 0xc8
	// Line 2705, Address: 0x170a2c, Func Offset: 0xcc
	// Line 2706, Address: 0x170a30, Func Offset: 0xd0
	// Line 2707, Address: 0x170a34, Func Offset: 0xd4
	// Line 2708, Address: 0x170a38, Func Offset: 0xd8
	// Line 2709, Address: 0x170a3c, Func Offset: 0xdc
	// Line 2710, Address: 0x170a40, Func Offset: 0xe0
	// Line 2711, Address: 0x170a44, Func Offset: 0xe4
	// Line 2714, Address: 0x170a4c, Func Offset: 0xec
	// Line 2715, Address: 0x170a50, Func Offset: 0xf0
	// Line 2717, Address: 0x170a54, Func Offset: 0xf4
	// Line 2718, Address: 0x170a58, Func Offset: 0xf8
	// Line 2720, Address: 0x170a60, Func Offset: 0x100
	// Line 2721, Address: 0x170a64, Func Offset: 0x104
	// Line 2726, Address: 0x170a68, Func Offset: 0x108
	// Func End, Address: 0x170a70, Func Offset: 0x110
}

// 
// Start address: 0x170a70
void fog_part_obj2()
{
	FOG_OBJ_DATA* od;
	FOG_PART_DATA* pd;
	// Line 2732, Address: 0x170a70, Func Offset: 0
	// Line 2733, Address: 0x170a78, Func Offset: 0x8
	// Line 2773, Address: 0x170a80, Func Offset: 0x10
	// Line 2792, Address: 0x170a90, Func Offset: 0x20
	// Line 2793, Address: 0x170a94, Func Offset: 0x24
	// Line 2794, Address: 0x170a98, Func Offset: 0x28
	// Line 2795, Address: 0x170a9c, Func Offset: 0x2c
	// Line 2796, Address: 0x170aa0, Func Offset: 0x30
	// Line 2797, Address: 0x170aa4, Func Offset: 0x34
	// Line 2798, Address: 0x170aa8, Func Offset: 0x38
	// Line 2799, Address: 0x170aac, Func Offset: 0x3c
	// Line 2801, Address: 0x170ab0, Func Offset: 0x40
	// Line 2802, Address: 0x170ab4, Func Offset: 0x44
	// Line 2803, Address: 0x170ab8, Func Offset: 0x48
	// Line 2804, Address: 0x170abc, Func Offset: 0x4c
	// Line 2806, Address: 0x170ac4, Func Offset: 0x54
	// Line 2807, Address: 0x170ac8, Func Offset: 0x58
	// Line 2808, Address: 0x170acc, Func Offset: 0x5c
	// Line 2810, Address: 0x170ad4, Func Offset: 0x64
	// Line 2811, Address: 0x170ad8, Func Offset: 0x68
	// Line 2812, Address: 0x170adc, Func Offset: 0x6c
	// Line 2813, Address: 0x170ae0, Func Offset: 0x70
	// Line 2814, Address: 0x170ae4, Func Offset: 0x74
	// Line 2815, Address: 0x170ae8, Func Offset: 0x78
	// Line 2816, Address: 0x170aec, Func Offset: 0x7c
	// Line 2817, Address: 0x170af0, Func Offset: 0x80
	// Line 2818, Address: 0x170af4, Func Offset: 0x84
	// Line 2820, Address: 0x170afc, Func Offset: 0x8c
	// Line 2821, Address: 0x170b00, Func Offset: 0x90
	// Line 2822, Address: 0x170b04, Func Offset: 0x94
	// Line 2823, Address: 0x170b08, Func Offset: 0x98
	// Line 2824, Address: 0x170b0c, Func Offset: 0x9c
	// Line 2825, Address: 0x170b10, Func Offset: 0xa0
	// Line 2826, Address: 0x170b14, Func Offset: 0xa4
	// Line 2827, Address: 0x170b18, Func Offset: 0xa8
	// Line 2828, Address: 0x170b1c, Func Offset: 0xac
	// Line 2829, Address: 0x170b20, Func Offset: 0xb0
	// Line 2830, Address: 0x170b24, Func Offset: 0xb4
	// Line 2831, Address: 0x170b28, Func Offset: 0xb8
	// Line 2832, Address: 0x170b2c, Func Offset: 0xbc
	// Line 2833, Address: 0x170b30, Func Offset: 0xc0
	// Line 2834, Address: 0x170b34, Func Offset: 0xc4
	// Line 2836, Address: 0x170b3c, Func Offset: 0xcc
	// Line 2837, Address: 0x170b40, Func Offset: 0xd0
	// Line 2839, Address: 0x170b44, Func Offset: 0xd4
	// Line 2840, Address: 0x170b48, Func Offset: 0xd8
	// Line 2841, Address: 0x170b4c, Func Offset: 0xdc
	// Line 2842, Address: 0x170b50, Func Offset: 0xe0
	// Line 2843, Address: 0x170b54, Func Offset: 0xe4
	// Line 2844, Address: 0x170b58, Func Offset: 0xe8
	// Line 2845, Address: 0x170b5c, Func Offset: 0xec
	// Line 2848, Address: 0x170b64, Func Offset: 0xf4
	// Line 2849, Address: 0x170b68, Func Offset: 0xf8
	// Line 2851, Address: 0x170b6c, Func Offset: 0xfc
	// Line 2852, Address: 0x170b70, Func Offset: 0x100
	// Line 2854, Address: 0x170b78, Func Offset: 0x108
	// Line 2855, Address: 0x170b7c, Func Offset: 0x10c
	// Line 2860, Address: 0x170b80, Func Offset: 0x110
	// Func End, Address: 0x170b88, Func Offset: 0x118
}

// 
// Start address: 0x170b90
void fog_part_alp()
{
	FOG_PART_DATA* pd;
	// Line 2865, Address: 0x170b90, Func Offset: 0
	// Line 2866, Address: 0x170b9c, Func Offset: 0xc
	// Line 2894, Address: 0x170ba4, Func Offset: 0x14
	// Line 2895, Address: 0x170ba8, Func Offset: 0x18
	// Line 2896, Address: 0x170bac, Func Offset: 0x1c
	// Line 2897, Address: 0x170bb0, Func Offset: 0x20
	// Line 2898, Address: 0x170bb4, Func Offset: 0x24
	// Line 2899, Address: 0x170bb8, Func Offset: 0x28
	// Line 2901, Address: 0x170bc0, Func Offset: 0x30
	// Line 2902, Address: 0x170bc4, Func Offset: 0x34
	// Line 2904, Address: 0x170bcc, Func Offset: 0x3c
	// Line 2905, Address: 0x170bd0, Func Offset: 0x40
	// Line 2907, Address: 0x170bd4, Func Offset: 0x44
	// Line 2908, Address: 0x170bd8, Func Offset: 0x48
	// Line 2909, Address: 0x170bdc, Func Offset: 0x4c
	// Line 2912, Address: 0x170be4, Func Offset: 0x54
	// Line 2913, Address: 0x170be8, Func Offset: 0x58
	// Line 2914, Address: 0x170bec, Func Offset: 0x5c
	// Line 2915, Address: 0x170bf0, Func Offset: 0x60
	// Line 2917, Address: 0x170bf8, Func Offset: 0x68
	// Line 2918, Address: 0x170bfc, Func Offset: 0x6c
	// Line 2919, Address: 0x170c00, Func Offset: 0x70
	// Line 2920, Address: 0x170c04, Func Offset: 0x74
	// Line 2921, Address: 0x170c08, Func Offset: 0x78
	// Line 2922, Address: 0x170c0c, Func Offset: 0x7c
	// Line 2923, Address: 0x170c10, Func Offset: 0x80
	// Line 2924, Address: 0x170c14, Func Offset: 0x84
	// Line 2925, Address: 0x170c18, Func Offset: 0x88
	// Line 2926, Address: 0x170c1c, Func Offset: 0x8c
	// Line 2927, Address: 0x170c20, Func Offset: 0x90
	// Line 2932, Address: 0x170c24, Func Offset: 0x94
	// Func End, Address: 0x170c38, Func Offset: 0xa8
}

// 
// Start address: 0x170c40
void fog_part_clamp()
{
	FOG_PART_DATA* pd;
	// Line 2938, Address: 0x170c40, Func Offset: 0
	// Line 3026, Address: 0x170c48, Func Offset: 0x8
	// Line 3038, Address: 0x170c58, Func Offset: 0x18
	// Line 3039, Address: 0x170c5c, Func Offset: 0x1c
	// Line 3040, Address: 0x170c60, Func Offset: 0x20
	// Line 3041, Address: 0x170c64, Func Offset: 0x24
	// Line 3042, Address: 0x170c68, Func Offset: 0x28
	// Line 3043, Address: 0x170c6c, Func Offset: 0x2c
	// Line 3046, Address: 0x170c74, Func Offset: 0x34
	// Line 3047, Address: 0x170c78, Func Offset: 0x38
	// Line 3048, Address: 0x170c7c, Func Offset: 0x3c
	// Line 3050, Address: 0x170c84, Func Offset: 0x44
	// Line 3051, Address: 0x170c88, Func Offset: 0x48
	// Line 3053, Address: 0x170c8c, Func Offset: 0x4c
	// Line 3055, Address: 0x170c94, Func Offset: 0x54
	// Line 3056, Address: 0x170c98, Func Offset: 0x58
	// Line 3058, Address: 0x170c9c, Func Offset: 0x5c
	// Line 3059, Address: 0x170ca0, Func Offset: 0x60
	// Line 3061, Address: 0x170ca8, Func Offset: 0x68
	// Line 3062, Address: 0x170cac, Func Offset: 0x6c
	// Line 3064, Address: 0x170cb0, Func Offset: 0x70
	// Line 3065, Address: 0x170cb4, Func Offset: 0x74
	// Line 3066, Address: 0x170cb8, Func Offset: 0x78
	// Line 3067, Address: 0x170cbc, Func Offset: 0x7c
	// Line 3068, Address: 0x170cc0, Func Offset: 0x80
	// Line 3070, Address: 0x170cc8, Func Offset: 0x88
	// Line 3071, Address: 0x170ccc, Func Offset: 0x8c
	// Line 3073, Address: 0x170cd0, Func Offset: 0x90
	// Line 3075, Address: 0x170cd8, Func Offset: 0x98
	// Line 3076, Address: 0x170cdc, Func Offset: 0x9c
	// Line 3078, Address: 0x170ce0, Func Offset: 0xa0
	// Line 3079, Address: 0x170ce4, Func Offset: 0xa4
	// Line 3081, Address: 0x170cec, Func Offset: 0xac
	// Line 3082, Address: 0x170cf0, Func Offset: 0xb0
	// Line 3084, Address: 0x170cf4, Func Offset: 0xb4
	// Line 3085, Address: 0x170cf8, Func Offset: 0xb8
	// Line 3086, Address: 0x170cfc, Func Offset: 0xbc
	// Line 3087, Address: 0x170d00, Func Offset: 0xc0
	// Line 3088, Address: 0x170d04, Func Offset: 0xc4
	// Line 3089, Address: 0x170d08, Func Offset: 0xc8
	// Line 3090, Address: 0x170d0c, Func Offset: 0xcc
	// Line 3091, Address: 0x170d10, Func Offset: 0xd0
	// Line 3092, Address: 0x170d14, Func Offset: 0xd4
	// Line 3093, Address: 0x170d18, Func Offset: 0xd8
	// Line 3096, Address: 0x170d20, Func Offset: 0xe0
	// Line 3099, Address: 0x170d28, Func Offset: 0xe8
	// Line 3100, Address: 0x170d2c, Func Offset: 0xec
	// Line 3103, Address: 0x170d34, Func Offset: 0xf4
	// Line 3104, Address: 0x170d38, Func Offset: 0xf8
	// Line 3105, Address: 0x170d3c, Func Offset: 0xfc
	// Line 3106, Address: 0x170d40, Func Offset: 0x100
	// Line 3107, Address: 0x170d44, Func Offset: 0x104
	// Line 3108, Address: 0x170d48, Func Offset: 0x108
	// Line 3109, Address: 0x170d4c, Func Offset: 0x10c
	// Line 3110, Address: 0x170d50, Func Offset: 0x110
	// Line 3111, Address: 0x170d54, Func Offset: 0x114
	// Line 3114, Address: 0x170d5c, Func Offset: 0x11c
	// Line 3117, Address: 0x170d64, Func Offset: 0x124
	// Line 3118, Address: 0x170d68, Func Offset: 0x128
	// Line 3121, Address: 0x170d70, Func Offset: 0x130
	// Line 3122, Address: 0x170d74, Func Offset: 0x134
	// Line 3123, Address: 0x170d78, Func Offset: 0x138
	// Line 3124, Address: 0x170d7c, Func Offset: 0x13c
	// Line 3128, Address: 0x170d80, Func Offset: 0x140
	// Func End, Address: 0x170d88, Func Offset: 0x148
}

// 
// Start address: 0x170d90
void fogMakePacket()
{
	float near_w;
	// Line 3149, Address: 0x170d90, Func Offset: 0
	// Line 3163, Address: 0x170db0, Func Offset: 0x20
	// Line 3165, Address: 0x170df8, Func Offset: 0x68
	// Line 3168, Address: 0x170e10, Func Offset: 0x80
	// Line 3171, Address: 0x170e2c, Func Offset: 0x9c
	// Line 3172, Address: 0x170e44, Func Offset: 0xb4
	// Line 3175, Address: 0x170e54, Func Offset: 0xc4
	// Line 3177, Address: 0x170e74, Func Offset: 0xe4
	// Line 3178, Address: 0x170ea4, Func Offset: 0x114
	// Line 3179, Address: 0x170ed0, Func Offset: 0x140
	// Line 3180, Address: 0x170ed8, Func Offset: 0x148
	// Line 3182, Address: 0x170ef0, Func Offset: 0x160
	// Line 3325, Address: 0x170ef8, Func Offset: 0x168
	// Line 3360, Address: 0x170f34, Func Offset: 0x1a4
	// Line 3361, Address: 0x170f38, Func Offset: 0x1a8
	// Line 3362, Address: 0x170f3c, Func Offset: 0x1ac
	// Line 3363, Address: 0x170f40, Func Offset: 0x1b0
	// Line 3364, Address: 0x170f44, Func Offset: 0x1b4
	// Line 3365, Address: 0x170f48, Func Offset: 0x1b8
	// Line 3366, Address: 0x170f4c, Func Offset: 0x1bc
	// Line 3367, Address: 0x170f50, Func Offset: 0x1c0
	// Line 3368, Address: 0x170f54, Func Offset: 0x1c4
	// Line 3369, Address: 0x170f58, Func Offset: 0x1c8
	// Line 3370, Address: 0x170f5c, Func Offset: 0x1cc
	// Line 3371, Address: 0x170f60, Func Offset: 0x1d0
	// Line 3372, Address: 0x170f64, Func Offset: 0x1d4
	// Line 3373, Address: 0x170f68, Func Offset: 0x1d8
	// Line 3374, Address: 0x170f6c, Func Offset: 0x1dc
	// Line 3375, Address: 0x170f70, Func Offset: 0x1e0
	// Line 3376, Address: 0x170f74, Func Offset: 0x1e4
	// Line 3377, Address: 0x170f78, Func Offset: 0x1e8
	// Line 3378, Address: 0x170f7c, Func Offset: 0x1ec
	// Line 3379, Address: 0x170f80, Func Offset: 0x1f0
	// Line 3380, Address: 0x170f84, Func Offset: 0x1f4
	// Line 3381, Address: 0x170f88, Func Offset: 0x1f8
	// Line 3382, Address: 0x170f8c, Func Offset: 0x1fc
	// Line 3383, Address: 0x170f90, Func Offset: 0x200
	// Line 3384, Address: 0x170f94, Func Offset: 0x204
	// Line 3385, Address: 0x170f98, Func Offset: 0x208
	// Line 3386, Address: 0x170f9c, Func Offset: 0x20c
	// Line 3387, Address: 0x170fa0, Func Offset: 0x210
	// Line 3388, Address: 0x170fa4, Func Offset: 0x214
	// Line 3389, Address: 0x170fa8, Func Offset: 0x218
	// Line 3390, Address: 0x170fac, Func Offset: 0x21c
	// Line 3391, Address: 0x170fb0, Func Offset: 0x220
	// Line 3392, Address: 0x170fb4, Func Offset: 0x224
	// Line 3393, Address: 0x170fb8, Func Offset: 0x228
	// Line 3394, Address: 0x170fbc, Func Offset: 0x22c
	// Line 3395, Address: 0x170fc0, Func Offset: 0x230
	// Line 3396, Address: 0x170fc4, Func Offset: 0x234
	// Line 3397, Address: 0x170fc8, Func Offset: 0x238
	// Line 3398, Address: 0x170fcc, Func Offset: 0x23c
	// Line 3399, Address: 0x170fd0, Func Offset: 0x240
	// Line 3400, Address: 0x170fd4, Func Offset: 0x244
	// Line 3401, Address: 0x170fd8, Func Offset: 0x248
	// Line 3402, Address: 0x170fdc, Func Offset: 0x24c
	// Line 3403, Address: 0x170fe0, Func Offset: 0x250
	// Line 3404, Address: 0x170fe4, Func Offset: 0x254
	// Line 3406, Address: 0x170fe8, Func Offset: 0x258
	// Line 3407, Address: 0x170fec, Func Offset: 0x25c
	// Line 3408, Address: 0x170ff0, Func Offset: 0x260
	// Line 3409, Address: 0x170ff4, Func Offset: 0x264
	// Line 3410, Address: 0x170ff8, Func Offset: 0x268
	// Line 3411, Address: 0x170ffc, Func Offset: 0x26c
	// Line 3412, Address: 0x171000, Func Offset: 0x270
	// Line 3413, Address: 0x171004, Func Offset: 0x274
	// Line 3414, Address: 0x171008, Func Offset: 0x278
	// Line 3415, Address: 0x17100c, Func Offset: 0x27c
	// Line 3416, Address: 0x171010, Func Offset: 0x280
	// Line 3417, Address: 0x171014, Func Offset: 0x284
	// Line 3418, Address: 0x171018, Func Offset: 0x288
	// Line 3421, Address: 0x171020, Func Offset: 0x290
	// Line 3422, Address: 0x171024, Func Offset: 0x294
	// Line 3423, Address: 0x171028, Func Offset: 0x298
	// Line 3424, Address: 0x17102c, Func Offset: 0x29c
	// Line 3425, Address: 0x171030, Func Offset: 0x2a0
	// Line 3426, Address: 0x171034, Func Offset: 0x2a4
	// Line 3427, Address: 0x171038, Func Offset: 0x2a8
	// Line 3428, Address: 0x17103c, Func Offset: 0x2ac
	// Line 3429, Address: 0x171040, Func Offset: 0x2b0
	// Line 3430, Address: 0x171044, Func Offset: 0x2b4
	// Line 3431, Address: 0x171048, Func Offset: 0x2b8
	// Line 3432, Address: 0x17104c, Func Offset: 0x2bc
	// Line 3433, Address: 0x171050, Func Offset: 0x2c0
	// Line 3435, Address: 0x171058, Func Offset: 0x2c8
	// Line 3437, Address: 0x171060, Func Offset: 0x2d0
	// Line 3438, Address: 0x171064, Func Offset: 0x2d4
	// Line 3439, Address: 0x171068, Func Offset: 0x2d8
	// Line 3440, Address: 0x17106c, Func Offset: 0x2dc
	// Line 3441, Address: 0x171070, Func Offset: 0x2e0
	// Line 3442, Address: 0x171074, Func Offset: 0x2e4
	// Line 3443, Address: 0x171078, Func Offset: 0x2e8
	// Line 3444, Address: 0x17107c, Func Offset: 0x2ec
	// Line 3445, Address: 0x171080, Func Offset: 0x2f0
	// Line 3446, Address: 0x171084, Func Offset: 0x2f4
	// Line 3447, Address: 0x171088, Func Offset: 0x2f8
	// Line 3448, Address: 0x17108c, Func Offset: 0x2fc
	// Line 3452, Address: 0x171094, Func Offset: 0x304
	// Line 3453, Address: 0x171098, Func Offset: 0x308
	// Line 3454, Address: 0x17109c, Func Offset: 0x30c
	// Line 3456, Address: 0x1710a4, Func Offset: 0x314
	// Line 3457, Address: 0x1710a8, Func Offset: 0x318
	// Line 3458, Address: 0x1710ac, Func Offset: 0x31c
	// Line 3459, Address: 0x1710b0, Func Offset: 0x320
	// Line 3461, Address: 0x1710b8, Func Offset: 0x328
	// Line 3462, Address: 0x1710bc, Func Offset: 0x32c
	// Line 3463, Address: 0x1710c0, Func Offset: 0x330
	// Line 3464, Address: 0x1710c4, Func Offset: 0x334
	// Line 3465, Address: 0x1710c8, Func Offset: 0x338
	// Line 3467, Address: 0x1710d0, Func Offset: 0x340
	// Line 3470, Address: 0x1710d4, Func Offset: 0x344
	// Line 3471, Address: 0x1710d8, Func Offset: 0x348
	// Line 3472, Address: 0x1710dc, Func Offset: 0x34c
	// Line 3473, Address: 0x1710e0, Func Offset: 0x350
	// Line 3475, Address: 0x1710e8, Func Offset: 0x358
	// Line 3476, Address: 0x1710ec, Func Offset: 0x35c
	// Line 3478, Address: 0x1710f0, Func Offset: 0x360
	// Line 3480, Address: 0x1710f4, Func Offset: 0x364
	// Line 3481, Address: 0x1710f8, Func Offset: 0x368
	// Line 3482, Address: 0x1710fc, Func Offset: 0x36c
	// Line 3484, Address: 0x171100, Func Offset: 0x370
	// Line 3485, Address: 0x171104, Func Offset: 0x374
	// Line 3486, Address: 0x171108, Func Offset: 0x378
	// Line 3487, Address: 0x17110c, Func Offset: 0x37c
	// Line 3488, Address: 0x171110, Func Offset: 0x380
	// Line 3489, Address: 0x171114, Func Offset: 0x384
	// Line 3490, Address: 0x171118, Func Offset: 0x388
	// Line 3491, Address: 0x17111c, Func Offset: 0x38c
	// Line 3492, Address: 0x171120, Func Offset: 0x390
	// Line 3495, Address: 0x171128, Func Offset: 0x398
	// Line 3496, Address: 0x17112c, Func Offset: 0x39c
	// Line 3497, Address: 0x171130, Func Offset: 0x3a0
	// Line 3498, Address: 0x171134, Func Offset: 0x3a4
	// Line 3499, Address: 0x171138, Func Offset: 0x3a8
	// Line 3500, Address: 0x17113c, Func Offset: 0x3ac
	// Line 3501, Address: 0x171140, Func Offset: 0x3b0
	// Line 3502, Address: 0x171144, Func Offset: 0x3b4
	// Line 3503, Address: 0x171148, Func Offset: 0x3b8
	// Line 3504, Address: 0x17114c, Func Offset: 0x3bc
	// Line 3505, Address: 0x171150, Func Offset: 0x3c0
	// Line 3506, Address: 0x171154, Func Offset: 0x3c4
	// Line 3507, Address: 0x171158, Func Offset: 0x3c8
	// Line 3508, Address: 0x17115c, Func Offset: 0x3cc
	// Line 3509, Address: 0x171160, Func Offset: 0x3d0
	// Line 3510, Address: 0x171164, Func Offset: 0x3d4
	// Line 3511, Address: 0x171168, Func Offset: 0x3d8
	// Line 3512, Address: 0x17116c, Func Offset: 0x3dc
	// Line 3515, Address: 0x171174, Func Offset: 0x3e4
	// Line 3516, Address: 0x171178, Func Offset: 0x3e8
	// Line 3517, Address: 0x17117c, Func Offset: 0x3ec
	// Line 3518, Address: 0x171180, Func Offset: 0x3f0
	// Line 3519, Address: 0x171184, Func Offset: 0x3f4
	// Line 3520, Address: 0x171188, Func Offset: 0x3f8
	// Line 3521, Address: 0x17118c, Func Offset: 0x3fc
	// Line 3522, Address: 0x171190, Func Offset: 0x400
	// Line 3523, Address: 0x171194, Func Offset: 0x404
	// Line 3524, Address: 0x171198, Func Offset: 0x408
	// Line 3525, Address: 0x17119c, Func Offset: 0x40c
	// Line 3526, Address: 0x1711a0, Func Offset: 0x410
	// Line 3527, Address: 0x1711a4, Func Offset: 0x414
	// Line 3528, Address: 0x1711a8, Func Offset: 0x418
	// Line 3529, Address: 0x1711ac, Func Offset: 0x41c
	// Line 3530, Address: 0x1711b0, Func Offset: 0x420
	// Line 3531, Address: 0x1711b4, Func Offset: 0x424
	// Line 3532, Address: 0x1711b8, Func Offset: 0x428
	// Line 3533, Address: 0x1711bc, Func Offset: 0x42c
	// Line 3534, Address: 0x1711c0, Func Offset: 0x430
	// Line 3535, Address: 0x1711c4, Func Offset: 0x434
	// Line 3536, Address: 0x1711c8, Func Offset: 0x438
	// Line 3537, Address: 0x1711cc, Func Offset: 0x43c
	// Line 3538, Address: 0x1711d0, Func Offset: 0x440
	// Line 3539, Address: 0x1711d4, Func Offset: 0x444
	// Line 3540, Address: 0x1711d8, Func Offset: 0x448
	// Line 3541, Address: 0x1711dc, Func Offset: 0x44c
	// Line 3542, Address: 0x1711e0, Func Offset: 0x450
	// Line 3543, Address: 0x1711e4, Func Offset: 0x454
	// Line 3544, Address: 0x1711e8, Func Offset: 0x458
	// Line 3545, Address: 0x1711ec, Func Offset: 0x45c
	// Line 3546, Address: 0x1711f0, Func Offset: 0x460
	// Line 3547, Address: 0x1711f4, Func Offset: 0x464
	// Line 3548, Address: 0x1711f8, Func Offset: 0x468
	// Line 3549, Address: 0x1711fc, Func Offset: 0x46c
	// Line 3550, Address: 0x171200, Func Offset: 0x470
	// Line 3551, Address: 0x171204, Func Offset: 0x474
	// Line 3552, Address: 0x171208, Func Offset: 0x478
	// Line 3553, Address: 0x17120c, Func Offset: 0x47c
	// Line 3554, Address: 0x171210, Func Offset: 0x480
	// Line 3556, Address: 0x171214, Func Offset: 0x484
	// Line 3557, Address: 0x171218, Func Offset: 0x488
	// Line 3558, Address: 0x17121c, Func Offset: 0x48c
	// Line 3559, Address: 0x171220, Func Offset: 0x490
	// Line 3560, Address: 0x171224, Func Offset: 0x494
	// Line 3561, Address: 0x171228, Func Offset: 0x498
	// Line 3562, Address: 0x17122c, Func Offset: 0x49c
	// Line 3563, Address: 0x171230, Func Offset: 0x4a0
	// Line 3564, Address: 0x171234, Func Offset: 0x4a4
	// Line 3565, Address: 0x171238, Func Offset: 0x4a8
	// Line 3566, Address: 0x17123c, Func Offset: 0x4ac
	// Line 3567, Address: 0x171240, Func Offset: 0x4b0
	// Line 3568, Address: 0x171244, Func Offset: 0x4b4
	// Line 3569, Address: 0x171248, Func Offset: 0x4b8
	// Line 3570, Address: 0x17124c, Func Offset: 0x4bc
	// Line 3571, Address: 0x171250, Func Offset: 0x4c0
	// Line 3572, Address: 0x171254, Func Offset: 0x4c4
	// Line 3573, Address: 0x171258, Func Offset: 0x4c8
	// Line 3574, Address: 0x17125c, Func Offset: 0x4cc
	// Line 3575, Address: 0x171260, Func Offset: 0x4d0
	// Line 3576, Address: 0x171264, Func Offset: 0x4d4
	// Line 3579, Address: 0x17126c, Func Offset: 0x4dc
	// Line 3582, Address: 0x171274, Func Offset: 0x4e4
	// Line 3583, Address: 0x171278, Func Offset: 0x4e8
	// Line 3584, Address: 0x17127c, Func Offset: 0x4ec
	// Line 3585, Address: 0x171280, Func Offset: 0x4f0
	// Line 3586, Address: 0x171284, Func Offset: 0x4f4
	// Line 3587, Address: 0x171288, Func Offset: 0x4f8
	// Line 3588, Address: 0x17128c, Func Offset: 0x4fc
	// Line 3589, Address: 0x171290, Func Offset: 0x500
	// Line 3590, Address: 0x171294, Func Offset: 0x504
	// Line 3591, Address: 0x171298, Func Offset: 0x508
	// Line 3592, Address: 0x17129c, Func Offset: 0x50c
	// Line 3593, Address: 0x1712a0, Func Offset: 0x510
	// Line 3594, Address: 0x1712a4, Func Offset: 0x514
	// Line 3595, Address: 0x1712a8, Func Offset: 0x518
	// Line 3596, Address: 0x1712ac, Func Offset: 0x51c
	// Line 3597, Address: 0x1712b0, Func Offset: 0x520
	// Line 3598, Address: 0x1712b4, Func Offset: 0x524
	// Line 3600, Address: 0x1712b8, Func Offset: 0x528
	// Line 3601, Address: 0x1712bc, Func Offset: 0x52c
	// Line 3603, Address: 0x1712c4, Func Offset: 0x534
	// Line 3604, Address: 0x1712c8, Func Offset: 0x538
	// Line 3605, Address: 0x1712cc, Func Offset: 0x53c
	// Line 3606, Address: 0x1712d0, Func Offset: 0x540
	// Line 3608, Address: 0x1712d4, Func Offset: 0x544
	// Line 3609, Address: 0x1712d8, Func Offset: 0x548
	// Line 3610, Address: 0x1712dc, Func Offset: 0x54c
	// Line 3611, Address: 0x1712e0, Func Offset: 0x550
	// Line 3612, Address: 0x1712e4, Func Offset: 0x554
	// Line 3613, Address: 0x1712e8, Func Offset: 0x558
	// Line 3614, Address: 0x1712ec, Func Offset: 0x55c
	// Line 3615, Address: 0x1712f0, Func Offset: 0x560
	// Line 3616, Address: 0x1712f4, Func Offset: 0x564
	// Line 3617, Address: 0x1712f8, Func Offset: 0x568
	// Line 3618, Address: 0x171300, Func Offset: 0x570
	// Line 3619, Address: 0x171304, Func Offset: 0x574
	// Line 3620, Address: 0x171308, Func Offset: 0x578
	// Line 3623, Address: 0x17130c, Func Offset: 0x57c
	// Line 3624, Address: 0x171310, Func Offset: 0x580
	// Line 3625, Address: 0x171314, Func Offset: 0x584
	// Line 3626, Address: 0x171318, Func Offset: 0x588
	// Line 3627, Address: 0x17131c, Func Offset: 0x58c
	// Line 3628, Address: 0x171320, Func Offset: 0x590
	// Line 3629, Address: 0x171324, Func Offset: 0x594
	// Line 3630, Address: 0x171328, Func Offset: 0x598
	// Line 3631, Address: 0x17132c, Func Offset: 0x59c
	// Line 3633, Address: 0x171334, Func Offset: 0x5a4
	// Line 3636, Address: 0x171338, Func Offset: 0x5a8
	// Line 3637, Address: 0x17133c, Func Offset: 0x5ac
	// Line 3647, Address: 0x171344, Func Offset: 0x5b4
	// Func End, Address: 0x17136c, Func Offset: 0x5dc
}

// 
// Start address: 0x171370
void fogSetColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	// Line 4006, Address: 0x171370, Func Offset: 0
	// Line 4007, Address: 0x171384, Func Offset: 0x14
	// Line 4009, Address: 0x1713c4, Func Offset: 0x54
	// Func End, Address: 0x1713d0, Func Offset: 0x60
}

// 
// Start address: 0x1713d0
void fogSetPartNum(int PartNum)
{
	int i;
	// Line 4028, Address: 0x1713d0, Func Offset: 0
	// Line 4029, Address: 0x1713e0, Func Offset: 0x10
	// Line 4030, Address: 0x1713ec, Func Offset: 0x1c
	// Line 4031, Address: 0x1713f4, Func Offset: 0x24
	// Line 4033, Address: 0x1713fc, Func Offset: 0x2c
	// Line 4034, Address: 0x171414, Func Offset: 0x44
	// Line 4036, Address: 0x171434, Func Offset: 0x64
	// Line 4037, Address: 0x17144c, Func Offset: 0x7c
	// Line 4038, Address: 0x17146c, Func Offset: 0x9c
	// Line 4040, Address: 0x171480, Func Offset: 0xb0
	// Line 4041, Address: 0x17148c, Func Offset: 0xbc
	// Line 4042, Address: 0x1714b0, Func Offset: 0xe0
	// Func End, Address: 0x1714c4, Func Offset: 0xf4
}

// 
// Start address: 0x1714d0
void fogSetProjection(float Projection)
{
	// Line 4062, Address: 0x1714d0, Func Offset: 0
	// Line 4063, Address: 0x1714d8, Func Offset: 0x8
	// Line 4064, Address: 0x1714e4, Func Offset: 0x14
	// Line 4066, Address: 0x171504, Func Offset: 0x34
	// Func End, Address: 0x171510, Func Offset: 0x40
}

// 
// Start address: 0x171510
void fogSetFloorY(float FloorY)
{
	// Line 4072, Address: 0x171510, Func Offset: 0
	// Line 4073, Address: 0x171518, Func Offset: 0x8
	// Line 4074, Address: 0x171524, Func Offset: 0x14
	// Line 4075, Address: 0x171530, Func Offset: 0x20
	// Func End, Address: 0x17153c, Func Offset: 0x2c
}

// 
// Start address: 0x171540
void fogSetWorldScreenM(void* WorldScreenM)
{
	// Line 4128, Address: 0x171540, Func Offset: 0
	// Line 4129, Address: 0x171568, Func Offset: 0x28
	// Func End, Address: 0x171570, Func Offset: 0x30
}

// 
// Start address: 0x171570
void fogSetWorldViewM(void* WorldViewM)
{
	// Line 4134, Address: 0x171570, Func Offset: 0
	// Line 4135, Address: 0x171594, Func Offset: 0x24
	// Func End, Address: 0x17159c, Func Offset: 0x2c
}

// 
// Start address: 0x1715a0
void fogSetWorldPosV(void* WorldPosV)
{
	float d;
	float* FVector;
	// Line 4142, Address: 0x1715a0, Func Offset: 0
	// Line 4144, Address: 0x1715a8, Func Offset: 0x8
	// Line 4146, Address: 0x1715b8, Func Offset: 0x18
	// Line 4147, Address: 0x1715d0, Func Offset: 0x30
	// Line 4148, Address: 0x1715ec, Func Offset: 0x4c
	// Line 4149, Address: 0x171608, Func Offset: 0x68
	// Line 4150, Address: 0x17162c, Func Offset: 0x8c
	// Line 4151, Address: 0x17164c, Func Offset: 0xac
	// Line 4152, Address: 0x171654, Func Offset: 0xb4
	// Line 4154, Address: 0x171664, Func Offset: 0xc4
	// Func End, Address: 0x17166c, Func Offset: 0xcc
}

// 
// Start address: 0x171670
void fogSetCameraPosV(void* CameraPosV)
{
	// Line 4161, Address: 0x171670, Func Offset: 0
	// Line 4162, Address: 0x171680, Func Offset: 0x10
	// Func End, Address: 0x171688, Func Offset: 0x18
}

// 
// Start address: 0x171690
void fogSetLocalPosV()
{
	float d;
	float* FVector;
	// Line 4169, Address: 0x171690, Func Offset: 0
	// Line 4171, Address: 0x171698, Func Offset: 0x8
	// Line 4172, Address: 0x1716b8, Func Offset: 0x28
	// Line 4173, Address: 0x1716d4, Func Offset: 0x44
	// Line 4174, Address: 0x1716f0, Func Offset: 0x60
	// Line 4175, Address: 0x171714, Func Offset: 0x84
	// Line 4176, Address: 0x171734, Func Offset: 0xa4
	// Line 4177, Address: 0x17173c, Func Offset: 0xac
	// Line 4178, Address: 0x171754, Func Offset: 0xc4
	// Line 4180, Address: 0x171774, Func Offset: 0xe4
	// Func End, Address: 0x17177c, Func Offset: 0xec
}

// 
// Start address: 0x171780
void fogSetSpeedLevel(float SpeedLevel)
{
	// Line 4266, Address: 0x171780, Func Offset: 0
	// Line 4267, Address: 0x171788, Func Offset: 0x8
	// Line 4269, Address: 0x171794, Func Offset: 0x14
	// Func End, Address: 0x1717a0, Func Offset: 0x20
}

// 
// Start address: 0x1717a0
unsigned long* fogTex0Adr()
{
	// Line 4274, Address: 0x1717a0, Func Offset: 0
	// Line 4275, Address: 0x1717a8, Func Offset: 0x8
	// Func End, Address: 0x1717b0, Func Offset: 0x10
}

