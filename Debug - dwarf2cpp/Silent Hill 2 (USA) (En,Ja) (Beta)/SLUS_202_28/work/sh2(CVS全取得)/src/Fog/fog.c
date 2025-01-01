typedef struct FOG_OBJ_DATA;
typedef struct SPACK_DATA;
typedef struct FOG_PART_DATA;
typedef struct SPACK_OT_DATA;
typedef struct FOG_ASM_DATA2;
typedef struct FOG_WORK;
typedef struct SPACK_ENV_DATA;
typedef struct shBattleFight;
typedef struct SPACK_STATIC_DATA;
typedef struct shBattleShot;
typedef struct FOG_ASM_DATA3;
typedef struct FOG_ASM_DATA_P;
typedef struct FOG_COLIS_HEAD;
typedef struct FOG_AREA_DATA;
typedef struct FOG_ENV_DATA;
typedef struct shAttackInfo;
typedef struct FOG_PACK_WORK;
typedef struct FOG_WALL_DATA;
typedef union _anon0;
typedef struct FOG_ASM_DATA1;
typedef struct FOG_BLOW_POINT;
typedef struct FOG_WORK2;


typedef FOG_PART_DATA type_0[700];
typedef float type_1[8];
typedef float type_2[8][8];
typedef float type_3[8][8][8];
typedef FOG_WALL_DATA type_4[188];
typedef FOG_OBJ_DATA type_5[168];
typedef unsigned char type_6[14];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[97];
typedef <unknown fundamental type (0xa510)> type_11[6400];
typedef unsigned char type_12[20];
typedef unsigned long type_13[2];
typedef unsigned long type_14[2];
typedef shAttackInfo type_15[66];
typedef unsigned char type_16[14];
typedef int type_17[16];
typedef unsigned char type_18[69];

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
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
	void* old_lastpos;
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
	float proj;
};

struct FOG_WORK
{
	FOG_PART_DATA Part[700];
	float GridDense[8][8][8];
	FOG_WALL_DATA Wall[188];
	FOG_OBJ_DATA Obj[168];
	float WorldScreenM[4][4];
	float WorldViewM[4][4];
	float CameraPosV[4];
	float OldCameraV[4];
	float WorldPosV[4];
	float LocalPosV[4];
	float MapPosV[4];
	float LightPosV[4];
	float WindV[4];
	float fewdense[4];
	float StayPoint[4];
	float LimitY;
	float LimitY2;
	float WaterY;
	float SpeedLevel;
	float sc_degree[4];
	float sc_tdx;
	float sc_tdy;
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
	int WindTimer;
	FOG_COLIS_HEAD* ColisHead;
	FOG_AREA_DATA* AreaTop;
	FOG_ENV_DATA* EnvTop;
	FOG_ENV_DATA* EnvNow;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct FOG_ASM_DATA3
{
	float maxpos;
	float r_screendiv;
	float movespeed;
	float r_double;
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

struct FOG_COLIS_HEAD
{
	unsigned short wall1;
	unsigned short wall2;
	unsigned short obj1;
	unsigned short obj2;
	unsigned short area;
	unsigned short env;
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
	<unknown fundamental type (0xa510)>* pk_screen;
	unsigned long* pk_tex0;
	unsigned int* pk_vifmark;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	float pad2;
	float pad3;
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
	float higher_y2;
};

struct FOG_BLOW_POINT
{
	float pos[4];
	float vec[4];
};

struct FOG_WORK2
{
	short PartNum;
	short BlowPointNum;
	int BlowPointID;
	FOG_BLOW_POINT* BlowPoint;
	int BlowTimer[16];
	int BlowInterval;
	float Gravity;
	float Expand;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
FOG_ASM_DATA1 fog_asm_data1;
FOG_ASM_DATA2 fog_asm_data2;
FOG_ASM_DATA_P fog_asm_data_p;
FOG_ASM_DATA3 fog_asm_data3;
FOG_PACK_WORK pwork;
FOG_WORK2 fwork2;
FOG_WORK fwork;
SPACK_DATA spack;

void fogInit();
void fog_set_defpacket();
void fogSetEnvironment(FOG_ENV_DATA* edata);
void fogInitScreen();
void fogInitWind();
void fogChangeWind(int wind);
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
void fog_set_stay();
void fog_part_wall();
void fog_part_grid();
void fog_part_obj();
void fog_part_obj2();
void fog_part_alp();
void fog_part_clamp();
void fogMakePacket();
void fog_view_screen_fog();
void fogSetColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
void fogSetPartNum(int PartNum);
void fogSetProjection(float Projection);
void fogSetFloorY(float FloorY);
void fogSetWorldScreenM(void* WorldScreenM);
void fogSetWorldViewM(void* WorldViewM);
void fogSetWorldPosV(void* WorldPosV);
void fogSetStayPos(void* WorldPosV);
void fogResetStayPos();
void fogSetStayPoint(void* StayPoint);
void fogResetStayPoint();
void fogSetCameraPosV(void* CameraPosV);
void fogSetLocalPosV();
void fogSetSpeedLevel(float SpeedLevel);
unsigned long* fogTex0Adr();

// 
// Start address: 0x1687d0
void fogInit()
{
	// Line 85, Address: 0x1687d0, Func Offset: 0
	// Line 86, Address: 0x1687d8, Func Offset: 0x8
	// Line 87, Address: 0x1687f0, Func Offset: 0x20
	// Line 89, Address: 0x168804, Func Offset: 0x34
	// Line 90, Address: 0x168814, Func Offset: 0x44
	// Line 93, Address: 0x16881c, Func Offset: 0x4c
	// Line 95, Address: 0x168834, Func Offset: 0x64
	// Line 96, Address: 0x16883c, Func Offset: 0x6c
	// Line 98, Address: 0x168844, Func Offset: 0x74
	// Line 100, Address: 0x16885c, Func Offset: 0x8c
	// Line 101, Address: 0x168864, Func Offset: 0x94
	// Func End, Address: 0x168874, Func Offset: 0xa4
}

// 
// Start address: 0x168880
void fog_set_defpacket()
{
	<unknown fundamental type (0xa510)>* epos;
	<unknown fundamental type (0xa510)>* pos;
	int i;
	unsigned long giftag2[2];
	unsigned long giftag[2];
	// Line 105, Address: 0x168880, Func Offset: 0
	// Line 106, Address: 0x168890, Func Offset: 0x10
	// Line 108, Address: 0x1688a4, Func Offset: 0x24
	// Line 114, Address: 0x1688b8, Func Offset: 0x38
	// Line 115, Address: 0x1688dc, Func Offset: 0x5c
	// Line 116, Address: 0x1688f4, Func Offset: 0x74
	// Line 117, Address: 0x1688fc, Func Offset: 0x7c
	// Line 119, Address: 0x168908, Func Offset: 0x88
	// Line 120, Address: 0x168914, Func Offset: 0x94
	// Line 122, Address: 0x168920, Func Offset: 0xa0
	// Line 126, Address: 0x16893c, Func Offset: 0xbc
	// Line 127, Address: 0x168968, Func Offset: 0xe8
	// Line 128, Address: 0x16897c, Func Offset: 0xfc
	// Line 129, Address: 0x1689a8, Func Offset: 0x128
	// Line 130, Address: 0x1689bc, Func Offset: 0x13c
	// Line 131, Address: 0x1689c4, Func Offset: 0x144
	// Line 132, Address: 0x1689d0, Func Offset: 0x150
	// Line 134, Address: 0x1689e4, Func Offset: 0x164
	// Line 135, Address: 0x1689ec, Func Offset: 0x16c
	// Line 136, Address: 0x1689f8, Func Offset: 0x178
	// Line 138, Address: 0x168a04, Func Offset: 0x184
	// Line 142, Address: 0x168a20, Func Offset: 0x1a0
	// Line 143, Address: 0x168a4c, Func Offset: 0x1cc
	// Line 144, Address: 0x168a60, Func Offset: 0x1e0
	// Line 146, Address: 0x168a90, Func Offset: 0x210
	// Line 147, Address: 0x168aa4, Func Offset: 0x224
	// Line 149, Address: 0x168ad4, Func Offset: 0x254
	// Line 150, Address: 0x168adc, Func Offset: 0x25c
	// Line 152, Address: 0x168ae8, Func Offset: 0x268
	// Line 153, Address: 0x168af0, Func Offset: 0x270
	// Line 154, Address: 0x168afc, Func Offset: 0x27c
	// Line 155, Address: 0x168b14, Func Offset: 0x294
	// Line 156, Address: 0x168b48, Func Offset: 0x2c8
	// Line 157, Address: 0x168b7c, Func Offset: 0x2fc
	// Line 159, Address: 0x168bb4, Func Offset: 0x334
	// Line 163, Address: 0x168bf8, Func Offset: 0x378
	// Line 164, Address: 0x168c00, Func Offset: 0x380
	// Line 166, Address: 0x168c0c, Func Offset: 0x38c
	// Line 167, Address: 0x168c10, Func Offset: 0x390
	// Line 168, Address: 0x168c1c, Func Offset: 0x39c
	// Line 169, Address: 0x168c30, Func Offset: 0x3b0
	// Line 171, Address: 0x168c40, Func Offset: 0x3c0
	// Line 172, Address: 0x168c6c, Func Offset: 0x3ec
	// Line 173, Address: 0x168ca0, Func Offset: 0x420
	// Line 174, Address: 0x168cd8, Func Offset: 0x458
	// Line 175, Address: 0x168d18, Func Offset: 0x498
	// Line 183, Address: 0x168d50, Func Offset: 0x4d0
	// Line 184, Address: 0x168d58, Func Offset: 0x4d8
	// Line 185, Address: 0x168d64, Func Offset: 0x4e4
	// Line 188, Address: 0x168d74, Func Offset: 0x4f4
	// Line 189, Address: 0x168dac, Func Offset: 0x52c
	// Func End, Address: 0x168dc4, Func Offset: 0x544
}

// 
// Start address: 0x168dd0
void fogSetEnvironment(FOG_ENV_DATA* edata)
{
	int old;
	char Double;
	unsigned char f2;
	unsigned char f;
	float m;
	float d;
	// Line 195, Address: 0x168dd0, Func Offset: 0
	// Line 199, Address: 0x168df0, Func Offset: 0x20
	// Line 200, Address: 0x168e10, Func Offset: 0x40
	// Line 201, Address: 0x168e34, Func Offset: 0x64
	// Line 203, Address: 0x168e44, Func Offset: 0x74
	// Line 205, Address: 0x168e4c, Func Offset: 0x7c
	// Line 206, Address: 0x168e54, Func Offset: 0x84
	// Line 207, Address: 0x168e5c, Func Offset: 0x8c
	// Line 208, Address: 0x168e64, Func Offset: 0x94
	// Line 209, Address: 0x168e6c, Func Offset: 0x9c
	// Line 211, Address: 0x168e74, Func Offset: 0xa4
	// Line 212, Address: 0x168e78, Func Offset: 0xa8
	// Line 213, Address: 0x168e88, Func Offset: 0xb8
	// Line 214, Address: 0x168e8c, Func Offset: 0xbc
	// Line 215, Address: 0x168ec4, Func Offset: 0xf4
	// Line 216, Address: 0x168ecc, Func Offset: 0xfc
	// Line 217, Address: 0x168ed4, Func Offset: 0x104
	// Line 218, Address: 0x168eec, Func Offset: 0x11c
	// Line 219, Address: 0x168f04, Func Offset: 0x134
	// Line 220, Address: 0x168f10, Func Offset: 0x140
	// Line 221, Address: 0x168f18, Func Offset: 0x148
	// Line 222, Address: 0x168f28, Func Offset: 0x158
	// Line 223, Address: 0x168f30, Func Offset: 0x160
	// Line 224, Address: 0x168f38, Func Offset: 0x168
	// Line 225, Address: 0x168f50, Func Offset: 0x180
	// Line 226, Address: 0x168f58, Func Offset: 0x188
	// Line 227, Address: 0x168f70, Func Offset: 0x1a0
	// Line 228, Address: 0x168f80, Func Offset: 0x1b0
	// Line 229, Address: 0x168f88, Func Offset: 0x1b8
	// Line 230, Address: 0x168f90, Func Offset: 0x1c0
	// Line 231, Address: 0x168f9c, Func Offset: 0x1cc
	// Line 232, Address: 0x168fac, Func Offset: 0x1dc
	// Line 233, Address: 0x168fb4, Func Offset: 0x1e4
	// Line 234, Address: 0x168fbc, Func Offset: 0x1ec
	// Line 236, Address: 0x168fd4, Func Offset: 0x204
	// Line 237, Address: 0x168fec, Func Offset: 0x21c
	// Line 238, Address: 0x168ff8, Func Offset: 0x228
	// Line 239, Address: 0x169008, Func Offset: 0x238
	// Line 240, Address: 0x16901c, Func Offset: 0x24c
	// Line 241, Address: 0x169024, Func Offset: 0x254
	// Line 242, Address: 0x16902c, Func Offset: 0x25c
	// Line 246, Address: 0x169034, Func Offset: 0x264
	// Line 247, Address: 0x169044, Func Offset: 0x274
	// Line 248, Address: 0x16905c, Func Offset: 0x28c
	// Line 249, Address: 0x16907c, Func Offset: 0x2ac
	// Line 250, Address: 0x1690a8, Func Offset: 0x2d8
	// Line 251, Address: 0x1690b0, Func Offset: 0x2e0
	// Line 253, Address: 0x1690c0, Func Offset: 0x2f0
	// Line 254, Address: 0x1690cc, Func Offset: 0x2fc
	// Line 255, Address: 0x1690d4, Func Offset: 0x304
	// Line 256, Address: 0x1690e0, Func Offset: 0x310
	// Line 257, Address: 0x1690f8, Func Offset: 0x328
	// Line 258, Address: 0x169114, Func Offset: 0x344
	// Line 259, Address: 0x16911c, Func Offset: 0x34c
	// Line 260, Address: 0x169124, Func Offset: 0x354
	// Line 262, Address: 0x16912c, Func Offset: 0x35c
	// Line 263, Address: 0x169148, Func Offset: 0x378
	// Line 264, Address: 0x169154, Func Offset: 0x384
	// Line 265, Address: 0x169178, Func Offset: 0x3a8
	// Line 266, Address: 0x169198, Func Offset: 0x3c8
	// Line 267, Address: 0x1691b4, Func Offset: 0x3e4
	// Line 268, Address: 0x1691e4, Func Offset: 0x414
	// Line 269, Address: 0x1691f0, Func Offset: 0x420
	// Line 270, Address: 0x16922c, Func Offset: 0x45c
	// Line 271, Address: 0x169234, Func Offset: 0x464
	// Line 272, Address: 0x169250, Func Offset: 0x480
	// Line 273, Address: 0x16925c, Func Offset: 0x48c
	// Line 274, Address: 0x169280, Func Offset: 0x4b0
	// Line 275, Address: 0x1692a0, Func Offset: 0x4d0
	// Line 276, Address: 0x1692a8, Func Offset: 0x4d8
	// Line 278, Address: 0x1692b4, Func Offset: 0x4e4
	// Line 279, Address: 0x1692cc, Func Offset: 0x4fc
	// Line 280, Address: 0x1692dc, Func Offset: 0x50c
	// Func End, Address: 0x169300, Func Offset: 0x530
}

// 
// Start address: 0x169300
void fogInitScreen()
{
	// Line 285, Address: 0x169300, Func Offset: 0
	// Line 286, Address: 0x169308, Func Offset: 0x8
	// Line 287, Address: 0x169310, Func Offset: 0x10
	// Line 288, Address: 0x169318, Func Offset: 0x18
	// Line 289, Address: 0x169320, Func Offset: 0x20
	// Func End, Address: 0x169330, Func Offset: 0x30
}

// 
// Start address: 0x169330
void fogInitWind()
{
	// Line 294, Address: 0x169330, Func Offset: 0
	// Line 295, Address: 0x169338, Func Offset: 0x8
	// Line 296, Address: 0x169344, Func Offset: 0x14
	// Line 297, Address: 0x169354, Func Offset: 0x24
	// Line 298, Address: 0x16936c, Func Offset: 0x3c
	// Func End, Address: 0x16937c, Func Offset: 0x4c
}

// 
// Start address: 0x169380
void fogChangeWind(int wind)
{
	float a2;
	float a1;
	float WindRandom;
	float WindSpeed;
	float* Wind2;
	float* Wind;
	// Line 304, Address: 0x169380, Func Offset: 0
	// Line 305, Address: 0x169398, Func Offset: 0x18
	// Line 306, Address: 0x1693a0, Func Offset: 0x20
	// Line 307, Address: 0x1693a4, Func Offset: 0x24
	// Line 308, Address: 0x1693b0, Func Offset: 0x30
	// Line 310, Address: 0x1693bc, Func Offset: 0x3c
	// Line 313, Address: 0x1693e4, Func Offset: 0x64
	// Line 314, Address: 0x169400, Func Offset: 0x80
	// Line 315, Address: 0x169404, Func Offset: 0x84
	// Line 316, Address: 0x169420, Func Offset: 0xa0
	// Line 318, Address: 0x169428, Func Offset: 0xa8
	// Line 319, Address: 0x16942c, Func Offset: 0xac
	// Line 320, Address: 0x169430, Func Offset: 0xb0
	// Line 322, Address: 0x169438, Func Offset: 0xb8
	// Line 323, Address: 0x169454, Func Offset: 0xd4
	// Line 324, Address: 0x169458, Func Offset: 0xd8
	// Line 325, Address: 0x169474, Func Offset: 0xf4
	// Line 326, Address: 0x169480, Func Offset: 0x100
	// Line 327, Address: 0x169484, Func Offset: 0x104
	// Line 329, Address: 0x16948c, Func Offset: 0x10c
	// Line 330, Address: 0x1694dc, Func Offset: 0x15c
	// Line 331, Address: 0x1694fc, Func Offset: 0x17c
	// Line 333, Address: 0x169504, Func Offset: 0x184
	// Line 334, Address: 0x169554, Func Offset: 0x1d4
	// Line 335, Address: 0x169574, Func Offset: 0x1f4
	// Line 337, Address: 0x16957c, Func Offset: 0x1fc
	// Line 338, Address: 0x1695d8, Func Offset: 0x258
	// Line 339, Address: 0x1695f8, Func Offset: 0x278
	// Line 341, Address: 0x169600, Func Offset: 0x280
	// Line 342, Address: 0x16965c, Func Offset: 0x2dc
	// Line 343, Address: 0x16967c, Func Offset: 0x2fc
	// Line 345, Address: 0x169684, Func Offset: 0x304
	// Line 346, Address: 0x1696e0, Func Offset: 0x360
	// Line 347, Address: 0x169700, Func Offset: 0x380
	// Line 349, Address: 0x169708, Func Offset: 0x388
	// Line 350, Address: 0x169764, Func Offset: 0x3e4
	// Line 351, Address: 0x169784, Func Offset: 0x404
	// Line 353, Address: 0x16978c, Func Offset: 0x40c
	// Line 354, Address: 0x1697e8, Func Offset: 0x468
	// Line 355, Address: 0x169808, Func Offset: 0x488
	// Line 357, Address: 0x169810, Func Offset: 0x490
	// Line 358, Address: 0x16986c, Func Offset: 0x4ec
	// Line 359, Address: 0x16988c, Func Offset: 0x50c
	// Line 361, Address: 0x169894, Func Offset: 0x514
	// Line 362, Address: 0x1698c4, Func Offset: 0x544
	// Line 363, Address: 0x1698c8, Func Offset: 0x548
	// Line 365, Address: 0x1698d0, Func Offset: 0x550
	// Line 366, Address: 0x1698d4, Func Offset: 0x554
	// Line 368, Address: 0x1698dc, Func Offset: 0x55c
	// Line 369, Address: 0x1698e4, Func Offset: 0x564
	// Line 370, Address: 0x1698e8, Func Offset: 0x568
	// Line 371, Address: 0x1698ec, Func Offset: 0x56c
	// Line 372, Address: 0x1698f8, Func Offset: 0x578
	// Line 374, Address: 0x169900, Func Offset: 0x580
	// Line 375, Address: 0x169928, Func Offset: 0x5a8
	// Line 376, Address: 0x16995c, Func Offset: 0x5dc
	// Line 377, Address: 0x16998c, Func Offset: 0x60c
	// Line 378, Address: 0x169994, Func Offset: 0x614
	// Line 380, Address: 0x16999c, Func Offset: 0x61c
	// Line 381, Address: 0x1699e8, Func Offset: 0x668
	// Line 382, Address: 0x1699f4, Func Offset: 0x674
	// Line 383, Address: 0x169a00, Func Offset: 0x680
	// Line 384, Address: 0x169a04, Func Offset: 0x684
	// Line 386, Address: 0x169a0c, Func Offset: 0x68c
	// Line 387, Address: 0x169a28, Func Offset: 0x6a8
	// Line 388, Address: 0x169a2c, Func Offset: 0x6ac
	// Line 389, Address: 0x169a48, Func Offset: 0x6c8
	// Line 390, Address: 0x169a54, Func Offset: 0x6d4
	// Line 391, Address: 0x169a58, Func Offset: 0x6d8
	// Line 393, Address: 0x169a60, Func Offset: 0x6e0
	// Line 394, Address: 0x169a7c, Func Offset: 0x6fc
	// Line 395, Address: 0x169a9c, Func Offset: 0x71c
	// Line 396, Address: 0x169ac0, Func Offset: 0x740
	// Line 397, Address: 0x169acc, Func Offset: 0x74c
	// Line 399, Address: 0x169ad4, Func Offset: 0x754
	// Line 400, Address: 0x169af0, Func Offset: 0x770
	// Line 401, Address: 0x169b10, Func Offset: 0x790
	// Line 403, Address: 0x169b2c, Func Offset: 0x7ac
	// Line 404, Address: 0x169b30, Func Offset: 0x7b0
	// Line 405, Address: 0x169b50, Func Offset: 0x7d0
	// Line 406, Address: 0x169b64, Func Offset: 0x7e4
	// Line 407, Address: 0x169b78, Func Offset: 0x7f8
	// Line 408, Address: 0x169b98, Func Offset: 0x818
	// Line 409, Address: 0x169bac, Func Offset: 0x82c
	// Line 410, Address: 0x169bbc, Func Offset: 0x83c
	// Line 411, Address: 0x169c08, Func Offset: 0x888
	// Line 412, Address: 0x169c1c, Func Offset: 0x89c
	// Line 413, Address: 0x169c28, Func Offset: 0x8a8
	// Line 414, Address: 0x169c34, Func Offset: 0x8b4
	// Line 415, Address: 0x169c5c, Func Offset: 0x8dc
	// Line 416, Address: 0x169c98, Func Offset: 0x918
	// Line 417, Address: 0x169cc0, Func Offset: 0x940
	// Line 418, Address: 0x169cc8, Func Offset: 0x948
	// Line 421, Address: 0x169cd0, Func Offset: 0x950
	// Line 422, Address: 0x169ce0, Func Offset: 0x960
	// Line 423, Address: 0x169d18, Func Offset: 0x998
	// Line 424, Address: 0x169d5c, Func Offset: 0x9dc
	// Line 426, Address: 0x169d68, Func Offset: 0x9e8
	// Func End, Address: 0x169d88, Func Offset: 0xa08
}

// 
// Start address: 0x169d90
void fogInitParticle()
{
	FOG_PART_DATA* pd;
	int i;
	// Line 431, Address: 0x169d90, Func Offset: 0
	// Line 433, Address: 0x169da0, Func Offset: 0x10
	// Line 434, Address: 0x169da8, Func Offset: 0x18
	// Line 435, Address: 0x169db8, Func Offset: 0x28
	// Line 436, Address: 0x169dc8, Func Offset: 0x38
	// Line 437, Address: 0x169ddc, Func Offset: 0x4c
	// Line 438, Address: 0x169de8, Func Offset: 0x58
	// Line 439, Address: 0x169df4, Func Offset: 0x64
	// Line 440, Address: 0x169e04, Func Offset: 0x74
	// Line 441, Address: 0x169e14, Func Offset: 0x84
	// Func End, Address: 0x169e2c, Func Offset: 0x9c
}

// 
// Start address: 0x169e30
void fog_init_part_sub(FOG_PART_DATA* pd)
{
	// Line 446, Address: 0x169e30, Func Offset: 0
	// Line 463, Address: 0x169e4c, Func Offset: 0x1c
	// Line 471, Address: 0x169e74, Func Offset: 0x44
	// Line 472, Address: 0x169e78, Func Offset: 0x48
	// Line 473, Address: 0x169e7c, Func Offset: 0x4c
	// Line 474, Address: 0x169e80, Func Offset: 0x50
	// Line 475, Address: 0x169e84, Func Offset: 0x54
	// Line 477, Address: 0x169e8c, Func Offset: 0x5c
	// Line 479, Address: 0x169e94, Func Offset: 0x64
	// Line 481, Address: 0x169e9c, Func Offset: 0x6c
	// Line 482, Address: 0x169ea0, Func Offset: 0x70
	// Line 483, Address: 0x169ea4, Func Offset: 0x74
	// Line 484, Address: 0x169ea8, Func Offset: 0x78
	// Line 485, Address: 0x169eac, Func Offset: 0x7c
	// Line 486, Address: 0x169eb0, Func Offset: 0x80
	// Line 487, Address: 0x169eb4, Func Offset: 0x84
	// Line 488, Address: 0x169eb8, Func Offset: 0x88
	// Line 490, Address: 0x169ec0, Func Offset: 0x90
	// Line 491, Address: 0x169ec4, Func Offset: 0x94
	// Line 492, Address: 0x169ec8, Func Offset: 0x98
	// Line 494, Address: 0x169ecc, Func Offset: 0x9c
	// Line 495, Address: 0x169ed0, Func Offset: 0xa0
	// Line 496, Address: 0x169ed4, Func Offset: 0xa4
	// Line 497, Address: 0x169ed8, Func Offset: 0xa8
	// Line 498, Address: 0x169edc, Func Offset: 0xac
	// Line 500, Address: 0x169ee4, Func Offset: 0xb4
	// Line 502, Address: 0x169eec, Func Offset: 0xbc
	// Line 503, Address: 0x169ef0, Func Offset: 0xc0
	// Line 504, Address: 0x169ef4, Func Offset: 0xc4
	// Line 505, Address: 0x169ef8, Func Offset: 0xc8
	// Line 506, Address: 0x169efc, Func Offset: 0xcc
	// Line 507, Address: 0x169f00, Func Offset: 0xd0
	// Line 508, Address: 0x169f04, Func Offset: 0xd4
	// Line 509, Address: 0x169f08, Func Offset: 0xd8
	// Line 510, Address: 0x169f0c, Func Offset: 0xdc
	// Line 516, Address: 0x169f10, Func Offset: 0xe0
	// Func End, Address: 0x169f34, Func Offset: 0x104
}

// 
// Start address: 0x169f40
void fog_part_newpos()
{
	FOG_PART_DATA* pd;
	// Line 521, Address: 0x169f40, Func Offset: 0
	// Line 522, Address: 0x169f54, Func Offset: 0x14
	// Line 539, Address: 0x169f5c, Func Offset: 0x1c
	// Line 547, Address: 0x169f6c, Func Offset: 0x2c
	// Line 548, Address: 0x169f70, Func Offset: 0x30
	// Line 549, Address: 0x169f74, Func Offset: 0x34
	// Line 550, Address: 0x169f78, Func Offset: 0x38
	// Line 551, Address: 0x169f7c, Func Offset: 0x3c
	// Line 553, Address: 0x169f84, Func Offset: 0x44
	// Line 555, Address: 0x169f8c, Func Offset: 0x4c
	// Line 557, Address: 0x169f94, Func Offset: 0x54
	// Line 558, Address: 0x169f98, Func Offset: 0x58
	// Line 559, Address: 0x169f9c, Func Offset: 0x5c
	// Line 560, Address: 0x169fa0, Func Offset: 0x60
	// Line 561, Address: 0x169fa4, Func Offset: 0x64
	// Line 562, Address: 0x169fa8, Func Offset: 0x68
	// Line 563, Address: 0x169fac, Func Offset: 0x6c
	// Line 564, Address: 0x169fb0, Func Offset: 0x70
	// Line 565, Address: 0x169fb4, Func Offset: 0x74
	// Line 566, Address: 0x169fb8, Func Offset: 0x78
	// Line 567, Address: 0x169fbc, Func Offset: 0x7c
	// Line 568, Address: 0x169fc0, Func Offset: 0x80
	// Line 569, Address: 0x169fc4, Func Offset: 0x84
	// Line 570, Address: 0x169fc8, Func Offset: 0x88
	// Line 572, Address: 0x169fd0, Func Offset: 0x90
	// Line 574, Address: 0x169fd8, Func Offset: 0x98
	// Line 575, Address: 0x169fdc, Func Offset: 0x9c
	// Line 576, Address: 0x169fe0, Func Offset: 0xa0
	// Line 577, Address: 0x169fe4, Func Offset: 0xa4
	// Line 578, Address: 0x169fe8, Func Offset: 0xa8
	// Line 583, Address: 0x169fec, Func Offset: 0xac
	// Func End, Address: 0x16a008, Func Offset: 0xc8
}

// 
// Start address: 0x16a010
void fogResetWall()
{
	// Line 589, Address: 0x16a010, Func Offset: 0
	// Line 590, Address: 0x16a018, Func Offset: 0x8
	// Func End, Address: 0x16a020, Func Offset: 0x10
}

// 
// Start address: 0x16a020
void fogSetWall(void* Vector)
{
	float cv[4];
	int i;
	FOG_WALL_DATA* wall;
	float wv[4];
	// Line 597, Address: 0x16a020, Func Offset: 0
	// Line 598, Address: 0x16a030, Func Offset: 0x10
	// Line 599, Address: 0x16a034, Func Offset: 0x14
	// Line 602, Address: 0x16a064, Func Offset: 0x44
	// Line 603, Address: 0x16a09c, Func Offset: 0x7c
	// Line 604, Address: 0x16a0b4, Func Offset: 0x94
	// Line 605, Address: 0x16a0cc, Func Offset: 0xac
	// Line 606, Address: 0x16a0d8, Func Offset: 0xb8
	// Line 607, Address: 0x16a0e4, Func Offset: 0xc4
	// Line 608, Address: 0x16a0f0, Func Offset: 0xd0
	// Line 609, Address: 0x16a0f8, Func Offset: 0xd8
	// Line 610, Address: 0x16a100, Func Offset: 0xe0
	// Line 611, Address: 0x16a10c, Func Offset: 0xec
	// Line 612, Address: 0x16a128, Func Offset: 0x108
	// Line 613, Address: 0x16a13c, Func Offset: 0x11c
	// Line 614, Address: 0x16a164, Func Offset: 0x144
	// Line 615, Address: 0x16a17c, Func Offset: 0x15c
	// Func End, Address: 0x16a194, Func Offset: 0x174
}

// 
// Start address: 0x16a1a0
void fogResetObj()
{
	// Line 621, Address: 0x16a1a0, Func Offset: 0
	// Line 622, Address: 0x16a1a8, Func Offset: 0x8
	// Func End, Address: 0x16a1b0, Func Offset: 0x10
}

// 
// Start address: 0x16a1b0
void fogSetObj(unsigned long ID, void* Center, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 631, Address: 0x16a1b0, Func Offset: 0
	// Line 632, Address: 0x16a1d0, Func Offset: 0x20
	// Line 633, Address: 0x16a1dc, Func Offset: 0x2c
	// Line 634, Address: 0x16a1e4, Func Offset: 0x34
	// Line 635, Address: 0x16a21c, Func Offset: 0x6c
	// Line 637, Address: 0x16a254, Func Offset: 0xa4
	// Line 638, Address: 0x16a25c, Func Offset: 0xac
	// Line 639, Address: 0x16a260, Func Offset: 0xb0
	// Line 640, Address: 0x16a264, Func Offset: 0xb4
	// Line 641, Address: 0x16a270, Func Offset: 0xc0
	// Line 642, Address: 0x16a288, Func Offset: 0xd8
	// Line 643, Address: 0x16a28c, Func Offset: 0xdc
	// Line 644, Address: 0x16a290, Func Offset: 0xe0
	// Func End, Address: 0x16a2ac, Func Offset: 0xfc
}

// 
// Start address: 0x16a2b0
void fogMoveObj(unsigned long ID, void* Center)
{
	float es;
	FOG_OBJ_DATA* od;
	// Line 652, Address: 0x16a2b0, Func Offset: 0
	// Line 653, Address: 0x16a2c0, Func Offset: 0x10
	// Line 655, Address: 0x16a2c8, Func Offset: 0x18
	// Line 656, Address: 0x16a2d0, Func Offset: 0x20
	// Line 657, Address: 0x16a2d4, Func Offset: 0x24
	// Line 658, Address: 0x16a2e8, Func Offset: 0x38
	// Line 659, Address: 0x16a2ec, Func Offset: 0x3c
	// Line 660, Address: 0x16a2fc, Func Offset: 0x4c
	// Func End, Address: 0x16a310, Func Offset: 0x60
}

// 
// Start address: 0x16a310
void fogSetObj2(unsigned long ID, void* Center, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 682, Address: 0x16a310, Func Offset: 0
	// Line 683, Address: 0x16a330, Func Offset: 0x20
	// Line 684, Address: 0x16a33c, Func Offset: 0x2c
	// Line 685, Address: 0x16a344, Func Offset: 0x34
	// Line 686, Address: 0x16a37c, Func Offset: 0x6c
	// Line 688, Address: 0x16a3b4, Func Offset: 0xa4
	// Line 689, Address: 0x16a3bc, Func Offset: 0xac
	// Line 690, Address: 0x16a3c0, Func Offset: 0xb0
	// Line 691, Address: 0x16a3c4, Func Offset: 0xb4
	// Line 692, Address: 0x16a3d0, Func Offset: 0xc0
	// Line 693, Address: 0x16a3e8, Func Offset: 0xd8
	// Line 694, Address: 0x16a3ec, Func Offset: 0xdc
	// Line 695, Address: 0x16a3f4, Func Offset: 0xe4
	// Func End, Address: 0x16a410, Func Offset: 0x100
}

// 
// Start address: 0x16a410
void fogEraseObj(unsigned long ID)
{
	FOG_OBJ_DATA* od2;
	FOG_OBJ_DATA* od;
	// Line 702, Address: 0x16a410, Func Offset: 0
	// Line 703, Address: 0x16a420, Func Offset: 0x10
	// Line 705, Address: 0x16a428, Func Offset: 0x18
	// Line 706, Address: 0x16a430, Func Offset: 0x20
	// Line 707, Address: 0x16a470, Func Offset: 0x60
	// Line 709, Address: 0x16a47c, Func Offset: 0x6c
	// Line 710, Address: 0x16a480, Func Offset: 0x70
	// Line 711, Address: 0x16a484, Func Offset: 0x74
	// Line 712, Address: 0x16a488, Func Offset: 0x78
	// Line 713, Address: 0x16a48c, Func Offset: 0x7c
	// Line 714, Address: 0x16a490, Func Offset: 0x80
	// Line 717, Address: 0x16a494, Func Offset: 0x84
	// Func End, Address: 0x16a4a8, Func Offset: 0x98
}

// 
// Start address: 0x16a4b0
void fogSetObjSize(unsigned long ID, float Size)
{
	FOG_OBJ_DATA* od;
	// Line 723, Address: 0x16a4b0, Func Offset: 0
	// Line 724, Address: 0x16a4c0, Func Offset: 0x10
	// Line 725, Address: 0x16a4c8, Func Offset: 0x18
	// Line 726, Address: 0x16a4d0, Func Offset: 0x20
	// Line 727, Address: 0x16a4d4, Func Offset: 0x24
	// Func End, Address: 0x16a4e8, Func Offset: 0x38
}

// 
// Start address: 0x16a4f0
FOG_OBJ_DATA* fogGetObj(unsigned long ID)
{
	int i;
	FOG_OBJ_DATA* pObj;
	// Line 746, Address: 0x16a4f0, Func Offset: 0
	// Line 748, Address: 0x16a4f8, Func Offset: 0x8
	// Line 749, Address: 0x16a508, Func Offset: 0x18
	// Line 750, Address: 0x16a514, Func Offset: 0x24
	// Line 752, Address: 0x16a51c, Func Offset: 0x2c
	// Line 753, Address: 0x16a520, Func Offset: 0x30
	// Line 754, Address: 0x16a530, Func Offset: 0x40
	// Line 755, Address: 0x16a534, Func Offset: 0x44
	// Func End, Address: 0x16a53c, Func Offset: 0x4c
}

// 
// Start address: 0x16a540
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
	// Line 760, Address: 0x16a540, Func Offset: 0
	// Line 762, Address: 0x16a55c, Func Offset: 0x1c
	// Line 766, Address: 0x16a564, Func Offset: 0x24
	// Line 767, Address: 0x16a56c, Func Offset: 0x2c
	// Line 768, Address: 0x16a574, Func Offset: 0x34
	// Line 769, Address: 0x16a57c, Func Offset: 0x3c
	// Line 770, Address: 0x16a58c, Func Offset: 0x4c
	// Line 771, Address: 0x16a5ac, Func Offset: 0x6c
	// Line 774, Address: 0x16a614, Func Offset: 0xd4
	// Line 778, Address: 0x16a61c, Func Offset: 0xdc
	// Line 779, Address: 0x16a634, Func Offset: 0xf4
	// Line 780, Address: 0x16a638, Func Offset: 0xf8
	// Line 781, Address: 0x16a63c, Func Offset: 0xfc
	// Line 782, Address: 0x16a640, Func Offset: 0x100
	// Line 783, Address: 0x16a644, Func Offset: 0x104
	// Line 784, Address: 0x16a648, Func Offset: 0x108
	// Line 785, Address: 0x16a64c, Func Offset: 0x10c
	// Line 786, Address: 0x16a650, Func Offset: 0x110
	// Line 787, Address: 0x16a654, Func Offset: 0x114
	// Line 791, Address: 0x16a658, Func Offset: 0x118
	// Line 793, Address: 0x16a674, Func Offset: 0x134
	// Line 795, Address: 0x16a68c, Func Offset: 0x14c
	// Line 797, Address: 0x16a694, Func Offset: 0x154
	// Line 800, Address: 0x16a698, Func Offset: 0x158
	// Line 801, Address: 0x16a69c, Func Offset: 0x15c
	// Line 802, Address: 0x16a6a0, Func Offset: 0x160
	// Line 803, Address: 0x16a6a4, Func Offset: 0x164
	// Line 804, Address: 0x16a6a8, Func Offset: 0x168
	// Line 805, Address: 0x16a6ac, Func Offset: 0x16c
	// Line 810, Address: 0x16a6b4, Func Offset: 0x174
	// Line 813, Address: 0x16a6dc, Func Offset: 0x19c
	// Line 814, Address: 0x16a6ec, Func Offset: 0x1ac
	// Line 816, Address: 0x16a70c, Func Offset: 0x1cc
	// Line 819, Address: 0x16a72c, Func Offset: 0x1ec
	// Line 820, Address: 0x16a734, Func Offset: 0x1f4
	// Line 822, Address: 0x16a73c, Func Offset: 0x1fc
	// Line 823, Address: 0x16a748, Func Offset: 0x208
	// Line 825, Address: 0x16a758, Func Offset: 0x218
	// Line 827, Address: 0x16a788, Func Offset: 0x248
	// Line 830, Address: 0x16a818, Func Offset: 0x2d8
	// Line 835, Address: 0x16a820, Func Offset: 0x2e0
	// Line 836, Address: 0x16a82c, Func Offset: 0x2ec
	// Line 837, Address: 0x16a840, Func Offset: 0x300
	// Line 838, Address: 0x16a85c, Func Offset: 0x31c
	// Line 840, Address: 0x16a864, Func Offset: 0x324
	// Line 843, Address: 0x16a880, Func Offset: 0x340
	// Line 845, Address: 0x16a898, Func Offset: 0x358
	// Line 846, Address: 0x16a8a0, Func Offset: 0x360
	// Line 847, Address: 0x16a8c0, Func Offset: 0x380
	// Line 848, Address: 0x16a8d0, Func Offset: 0x390
	// Line 849, Address: 0x16a8d4, Func Offset: 0x394
	// Line 852, Address: 0x16a8d8, Func Offset: 0x398
	// Line 854, Address: 0x16a8f4, Func Offset: 0x3b4
	// Line 860, Address: 0x16a8fc, Func Offset: 0x3bc
	// Line 873, Address: 0x16a904, Func Offset: 0x3c4
	// Line 874, Address: 0x16a924, Func Offset: 0x3e4
	// Line 875, Address: 0x16a92c, Func Offset: 0x3ec
	// Line 878, Address: 0x16a930, Func Offset: 0x3f0
	// Line 879, Address: 0x16a960, Func Offset: 0x420
	// Line 882, Address: 0x16a970, Func Offset: 0x430
	// Line 884, Address: 0x16a98c, Func Offset: 0x44c
	// Line 887, Address: 0x16a9a4, Func Offset: 0x464
	// Line 888, Address: 0x16a9ac, Func Offset: 0x46c
	// Line 889, Address: 0x16a9b0, Func Offset: 0x470
	// Line 890, Address: 0x16a9b4, Func Offset: 0x474
	// Line 891, Address: 0x16a9c0, Func Offset: 0x480
	// Line 895, Address: 0x16a9cc, Func Offset: 0x48c
	// Line 896, Address: 0x16a9d4, Func Offset: 0x494
	// Line 897, Address: 0x16a9e4, Func Offset: 0x4a4
	// Line 898, Address: 0x16a9e8, Func Offset: 0x4a8
	// Line 899, Address: 0x16a9ec, Func Offset: 0x4ac
	// Line 900, Address: 0x16a9f0, Func Offset: 0x4b0
	// Line 901, Address: 0x16aa04, Func Offset: 0x4c4
	// Line 902, Address: 0x16aa08, Func Offset: 0x4c8
	// Line 903, Address: 0x16aa18, Func Offset: 0x4d8
	// Line 904, Address: 0x16aa40, Func Offset: 0x500
	// Line 905, Address: 0x16aa48, Func Offset: 0x508
	// Line 906, Address: 0x16aa58, Func Offset: 0x518
	// Line 907, Address: 0x16aa80, Func Offset: 0x540
	// Line 908, Address: 0x16aa84, Func Offset: 0x544
	// Line 909, Address: 0x16aa94, Func Offset: 0x554
	// Line 910, Address: 0x16aabc, Func Offset: 0x57c
	// Line 911, Address: 0x16aac0, Func Offset: 0x580
	// Line 913, Address: 0x16aae0, Func Offset: 0x5a0
	// Line 914, Address: 0x16aaec, Func Offset: 0x5ac
	// Line 915, Address: 0x16ab00, Func Offset: 0x5c0
	// Line 919, Address: 0x16ab08, Func Offset: 0x5c8
	// Line 921, Address: 0x16ab10, Func Offset: 0x5d0
	// Line 922, Address: 0x16ab18, Func Offset: 0x5d8
	// Line 923, Address: 0x16ab20, Func Offset: 0x5e0
	// Line 924, Address: 0x16ab28, Func Offset: 0x5e8
	// Line 925, Address: 0x16ab3c, Func Offset: 0x5fc
	// Line 927, Address: 0x16ab44, Func Offset: 0x604
	// Line 929, Address: 0x16ab54, Func Offset: 0x614
	// Line 956, Address: 0x16ab84, Func Offset: 0x644
	// Line 957, Address: 0x16ab88, Func Offset: 0x648
	// Line 958, Address: 0x16ab8c, Func Offset: 0x64c
	// Line 959, Address: 0x16ab90, Func Offset: 0x650
	// Line 960, Address: 0x16ab94, Func Offset: 0x654
	// Line 961, Address: 0x16ab98, Func Offset: 0x658
	// Line 962, Address: 0x16ab9c, Func Offset: 0x65c
	// Line 963, Address: 0x16aba0, Func Offset: 0x660
	// Line 964, Address: 0x16aba4, Func Offset: 0x664
	// Line 965, Address: 0x16aba8, Func Offset: 0x668
	// Line 966, Address: 0x16abac, Func Offset: 0x66c
	// Line 967, Address: 0x16abb0, Func Offset: 0x670
	// Line 968, Address: 0x16abb4, Func Offset: 0x674
	// Line 969, Address: 0x16abb8, Func Offset: 0x678
	// Line 970, Address: 0x16abbc, Func Offset: 0x67c
	// Line 971, Address: 0x16abc0, Func Offset: 0x680
	// Line 975, Address: 0x16abc4, Func Offset: 0x684
	// Line 976, Address: 0x16abd8, Func Offset: 0x698
	// Line 979, Address: 0x16abe8, Func Offset: 0x6a8
	// Line 982, Address: 0x16abf0, Func Offset: 0x6b0
	// Line 983, Address: 0x16ac20, Func Offset: 0x6e0
	// Line 985, Address: 0x16ac30, Func Offset: 0x6f0
	// Line 986, Address: 0x16ac38, Func Offset: 0x6f8
	// Line 987, Address: 0x16ac48, Func Offset: 0x708
	// Line 988, Address: 0x16ac54, Func Offset: 0x714
	// Line 989, Address: 0x16ac58, Func Offset: 0x718
	// Line 991, Address: 0x16ac68, Func Offset: 0x728
	// Func End, Address: 0x16ac8c, Func Offset: 0x74c
}

// 
// Start address: 0x16ac90
void fog_load_objdata()
{
	// Line 1078, Address: 0x16ac90, Func Offset: 0
	// Line 1106, Address: 0x16acb4, Func Offset: 0x24
	// Line 1107, Address: 0x16acb8, Func Offset: 0x28
	// Line 1109, Address: 0x16acc0, Func Offset: 0x30
	// Line 1110, Address: 0x16acc4, Func Offset: 0x34
	// Line 1111, Address: 0x16acc8, Func Offset: 0x38
	// Line 1112, Address: 0x16accc, Func Offset: 0x3c
	// Line 1113, Address: 0x16acd0, Func Offset: 0x40
	// Line 1114, Address: 0x16acd4, Func Offset: 0x44
	// Line 1116, Address: 0x16acd8, Func Offset: 0x48
	// Line 1117, Address: 0x16acdc, Func Offset: 0x4c
	// Line 1118, Address: 0x16ace0, Func Offset: 0x50
	// Line 1119, Address: 0x16ace4, Func Offset: 0x54
	// Line 1120, Address: 0x16ace8, Func Offset: 0x58
	// Line 1121, Address: 0x16acec, Func Offset: 0x5c
	// Line 1122, Address: 0x16acf0, Func Offset: 0x60
	// Line 1123, Address: 0x16acf4, Func Offset: 0x64
	// Line 1124, Address: 0x16acf8, Func Offset: 0x68
	// Line 1125, Address: 0x16acfc, Func Offset: 0x6c
	// Line 1126, Address: 0x16ad00, Func Offset: 0x70
	// Line 1127, Address: 0x16ad04, Func Offset: 0x74
	// Line 1128, Address: 0x16ad08, Func Offset: 0x78
	// Line 1130, Address: 0x16ad10, Func Offset: 0x80
	// Line 1131, Address: 0x16ad14, Func Offset: 0x84
	// Line 1132, Address: 0x16ad18, Func Offset: 0x88
	// Line 1133, Address: 0x16ad1c, Func Offset: 0x8c
	// Line 1134, Address: 0x16ad20, Func Offset: 0x90
	// Line 1135, Address: 0x16ad24, Func Offset: 0x94
	// Line 1136, Address: 0x16ad28, Func Offset: 0x98
	// Line 1137, Address: 0x16ad2c, Func Offset: 0x9c
	// Line 1138, Address: 0x16ad30, Func Offset: 0xa0
	// Line 1139, Address: 0x16ad34, Func Offset: 0xa4
	// Line 1142, Address: 0x16ad3c, Func Offset: 0xac
	// Line 1143, Address: 0x16ad40, Func Offset: 0xb0
	// Line 1145, Address: 0x16ad48, Func Offset: 0xb8
	// Line 1147, Address: 0x16ad50, Func Offset: 0xc0
	// Line 1150, Address: 0x16ad58, Func Offset: 0xc8
	// Line 1151, Address: 0x16ad5c, Func Offset: 0xcc
	// Line 1154, Address: 0x16ad64, Func Offset: 0xd4
	// Line 1155, Address: 0x16ad68, Func Offset: 0xd8
	// Line 1157, Address: 0x16ad70, Func Offset: 0xe0
	// Line 1159, Address: 0x16ad78, Func Offset: 0xe8
	// Line 1162, Address: 0x16ad80, Func Offset: 0xf0
	// Line 1163, Address: 0x16ad84, Func Offset: 0xf4
	// Line 1166, Address: 0x16ad8c, Func Offset: 0xfc
	// Line 1167, Address: 0x16ad90, Func Offset: 0x100
	// Line 1168, Address: 0x16ad94, Func Offset: 0x104
	// Line 1170, Address: 0x16ad9c, Func Offset: 0x10c
	// Line 1172, Address: 0x16ada4, Func Offset: 0x114
	// Line 1175, Address: 0x16adac, Func Offset: 0x11c
	// Line 1176, Address: 0x16adb0, Func Offset: 0x120
	// Line 1179, Address: 0x16adb8, Func Offset: 0x128
	// Line 1180, Address: 0x16adbc, Func Offset: 0x12c
	// Line 1181, Address: 0x16adc0, Func Offset: 0x130
	// Line 1182, Address: 0x16adc4, Func Offset: 0x134
	// Line 1184, Address: 0x16adc8, Func Offset: 0x138
	// Line 1185, Address: 0x16adcc, Func Offset: 0x13c
	// Line 1186, Address: 0x16add0, Func Offset: 0x140
	// Line 1188, Address: 0x16add8, Func Offset: 0x148
	// Line 1189, Address: 0x16addc, Func Offset: 0x14c
	// Line 1190, Address: 0x16ade0, Func Offset: 0x150
	// Line 1191, Address: 0x16ade4, Func Offset: 0x154
	// Line 1192, Address: 0x16ade8, Func Offset: 0x158
	// Line 1193, Address: 0x16adec, Func Offset: 0x15c
	// Line 1194, Address: 0x16adf0, Func Offset: 0x160
	// Line 1195, Address: 0x16adf4, Func Offset: 0x164
	// Line 1196, Address: 0x16adf8, Func Offset: 0x168
	// Line 1197, Address: 0x16adfc, Func Offset: 0x16c
	// Line 1198, Address: 0x16ae00, Func Offset: 0x170
	// Line 1199, Address: 0x16ae04, Func Offset: 0x174
	// Line 1200, Address: 0x16ae08, Func Offset: 0x178
	// Line 1201, Address: 0x16ae0c, Func Offset: 0x17c
	// Line 1204, Address: 0x16ae14, Func Offset: 0x184
	// Line 1205, Address: 0x16ae18, Func Offset: 0x188
	// Line 1206, Address: 0x16ae1c, Func Offset: 0x18c
	// Line 1208, Address: 0x16ae20, Func Offset: 0x190
	// Line 1210, Address: 0x16ae24, Func Offset: 0x194
	// Line 1211, Address: 0x16ae28, Func Offset: 0x198
	// Line 1213, Address: 0x16ae30, Func Offset: 0x1a0
	// Line 1215, Address: 0x16ae38, Func Offset: 0x1a8
	// Line 1218, Address: 0x16ae40, Func Offset: 0x1b0
	// Line 1219, Address: 0x16ae44, Func Offset: 0x1b4
	// Line 1222, Address: 0x16ae4c, Func Offset: 0x1bc
	// Line 1223, Address: 0x16ae50, Func Offset: 0x1c0
	// Line 1225, Address: 0x16ae58, Func Offset: 0x1c8
	// Line 1227, Address: 0x16ae60, Func Offset: 0x1d0
	// Line 1230, Address: 0x16ae68, Func Offset: 0x1d8
	// Line 1231, Address: 0x16ae6c, Func Offset: 0x1dc
	// Line 1234, Address: 0x16ae74, Func Offset: 0x1e4
	// Line 1235, Address: 0x16ae78, Func Offset: 0x1e8
	// Line 1236, Address: 0x16ae7c, Func Offset: 0x1ec
	// Line 1237, Address: 0x16ae80, Func Offset: 0x1f0
	// Line 1238, Address: 0x16ae84, Func Offset: 0x1f4
	// Line 1239, Address: 0x16ae88, Func Offset: 0x1f8
	// Line 1241, Address: 0x16ae8c, Func Offset: 0x1fc
	// Line 1242, Address: 0x16ae90, Func Offset: 0x200
	// Line 1243, Address: 0x16ae94, Func Offset: 0x204
	// Line 1245, Address: 0x16ae9c, Func Offset: 0x20c
	// Line 1246, Address: 0x16aea0, Func Offset: 0x210
	// Line 1248, Address: 0x16aea8, Func Offset: 0x218
	// Line 1249, Address: 0x16aeac, Func Offset: 0x21c
	// Line 1250, Address: 0x16aeb0, Func Offset: 0x220
	// Line 1251, Address: 0x16aeb4, Func Offset: 0x224
	// Line 1252, Address: 0x16aeb8, Func Offset: 0x228
	// Line 1253, Address: 0x16aebc, Func Offset: 0x22c
	// Line 1254, Address: 0x16aec0, Func Offset: 0x230
	// Line 1255, Address: 0x16aec4, Func Offset: 0x234
	// Line 1256, Address: 0x16aec8, Func Offset: 0x238
	// Line 1257, Address: 0x16aecc, Func Offset: 0x23c
	// Line 1258, Address: 0x16aed0, Func Offset: 0x240
	// Line 1259, Address: 0x16aed4, Func Offset: 0x244
	// Line 1260, Address: 0x16aed8, Func Offset: 0x248
	// Line 1261, Address: 0x16aedc, Func Offset: 0x24c
	// Line 1262, Address: 0x16aee0, Func Offset: 0x250
	// Line 1264, Address: 0x16aee4, Func Offset: 0x254
	// Line 1265, Address: 0x16aee8, Func Offset: 0x258
	// Line 1268, Address: 0x16aef0, Func Offset: 0x260
	// Line 1269, Address: 0x16aef4, Func Offset: 0x264
	// Line 1270, Address: 0x16aef8, Func Offset: 0x268
	// Line 1271, Address: 0x16aefc, Func Offset: 0x26c
	// Line 1278, Address: 0x16af00, Func Offset: 0x270
	// Func End, Address: 0x16af08, Func Offset: 0x278
}

// 
// Start address: 0x16af10
void fog_set_stay()
{
	int i;
	int tz;
	int ty;
	int tx;
	int pz;
	int py;
	int px;
	float* dn;
	float* fv;
	// Line 1284, Address: 0x16af10, Func Offset: 0
	// Line 1285, Address: 0x16af18, Func Offset: 0x8
	// Line 1287, Address: 0x16af1c, Func Offset: 0xc
	// Line 1288, Address: 0x16af3c, Func Offset: 0x2c
	// Line 1289, Address: 0x16af64, Func Offset: 0x54
	// Line 1290, Address: 0x16af94, Func Offset: 0x84
	// Line 1291, Address: 0x16afcc, Func Offset: 0xbc
	// Line 1292, Address: 0x16aff8, Func Offset: 0xe8
	// Line 1293, Address: 0x16b024, Func Offset: 0x114
	// Line 1294, Address: 0x16b030, Func Offset: 0x120
	// Line 1295, Address: 0x16b038, Func Offset: 0x128
	// Line 1296, Address: 0x16b044, Func Offset: 0x134
	// Line 1297, Address: 0x16b04c, Func Offset: 0x13c
	// Line 1299, Address: 0x16b088, Func Offset: 0x178
	// Line 1300, Address: 0x16b0c0, Func Offset: 0x1b0
	// Line 1301, Address: 0x16b0d4, Func Offset: 0x1c4
	// Func End, Address: 0x16b0dc, Func Offset: 0x1cc
}

// 
// Start address: 0x16b0e0
void fog_part_wall()
{
	FOG_WALL_DATA* wall;
	FOG_PART_DATA* pd;
	// Line 1307, Address: 0x16b0e0, Func Offset: 0
	// Line 1308, Address: 0x16b0e8, Func Offset: 0x8
	// Line 1350, Address: 0x16b0ec, Func Offset: 0xc
	// Line 1371, Address: 0x16b0f8, Func Offset: 0x18
	// Line 1372, Address: 0x16b0fc, Func Offset: 0x1c
	// Line 1373, Address: 0x16b100, Func Offset: 0x20
	// Line 1375, Address: 0x16b104, Func Offset: 0x24
	// Line 1377, Address: 0x16b108, Func Offset: 0x28
	// Line 1378, Address: 0x16b10c, Func Offset: 0x2c
	// Line 1379, Address: 0x16b110, Func Offset: 0x30
	// Line 1380, Address: 0x16b114, Func Offset: 0x34
	// Line 1381, Address: 0x16b118, Func Offset: 0x38
	// Line 1382, Address: 0x16b11c, Func Offset: 0x3c
	// Line 1383, Address: 0x16b120, Func Offset: 0x40
	// Line 1384, Address: 0x16b124, Func Offset: 0x44
	// Line 1385, Address: 0x16b128, Func Offset: 0x48
	// Line 1386, Address: 0x16b12c, Func Offset: 0x4c
	// Line 1387, Address: 0x16b130, Func Offset: 0x50
	// Line 1388, Address: 0x16b134, Func Offset: 0x54
	// Line 1390, Address: 0x16b13c, Func Offset: 0x5c
	// Line 1391, Address: 0x16b140, Func Offset: 0x60
	// Line 1392, Address: 0x16b144, Func Offset: 0x64
	// Line 1393, Address: 0x16b148, Func Offset: 0x68
	// Line 1394, Address: 0x16b14c, Func Offset: 0x6c
	// Line 1395, Address: 0x16b150, Func Offset: 0x70
	// Line 1396, Address: 0x16b154, Func Offset: 0x74
	// Line 1397, Address: 0x16b158, Func Offset: 0x78
	// Line 1398, Address: 0x16b15c, Func Offset: 0x7c
	// Line 1399, Address: 0x16b160, Func Offset: 0x80
	// Line 1400, Address: 0x16b164, Func Offset: 0x84
	// Line 1401, Address: 0x16b168, Func Offset: 0x88
	// Line 1402, Address: 0x16b16c, Func Offset: 0x8c
	// Line 1403, Address: 0x16b170, Func Offset: 0x90
	// Line 1404, Address: 0x16b174, Func Offset: 0x94
	// Line 1406, Address: 0x16b17c, Func Offset: 0x9c
	// Line 1407, Address: 0x16b180, Func Offset: 0xa0
	// Line 1410, Address: 0x16b188, Func Offset: 0xa8
	// Line 1411, Address: 0x16b18c, Func Offset: 0xac
	// Line 1412, Address: 0x16b190, Func Offset: 0xb0
	// Line 1413, Address: 0x16b194, Func Offset: 0xb4
	// Line 1414, Address: 0x16b198, Func Offset: 0xb8
	// Line 1415, Address: 0x16b19c, Func Offset: 0xbc
	// Line 1417, Address: 0x16b1a4, Func Offset: 0xc4
	// Line 1418, Address: 0x16b1a8, Func Offset: 0xc8
	// Line 1419, Address: 0x16b1ac, Func Offset: 0xcc
	// Line 1422, Address: 0x16b1b4, Func Offset: 0xd4
	// Line 1423, Address: 0x16b1b8, Func Offset: 0xd8
	// Line 1424, Address: 0x16b1bc, Func Offset: 0xdc
	// Line 1426, Address: 0x16b1c0, Func Offset: 0xe0
	// Line 1427, Address: 0x16b1c4, Func Offset: 0xe4
	// Line 1428, Address: 0x16b1c8, Func Offset: 0xe8
	// Line 1429, Address: 0x16b1cc, Func Offset: 0xec
	// Line 1430, Address: 0x16b1d0, Func Offset: 0xf0
	// Line 1431, Address: 0x16b1d4, Func Offset: 0xf4
	// Line 1432, Address: 0x16b1d8, Func Offset: 0xf8
	// Line 1433, Address: 0x16b1dc, Func Offset: 0xfc
	// Line 1434, Address: 0x16b1e0, Func Offset: 0x100
	// Line 1435, Address: 0x16b1e4, Func Offset: 0x104
	// Line 1436, Address: 0x16b1e8, Func Offset: 0x108
	// Line 1437, Address: 0x16b1ec, Func Offset: 0x10c
	// Line 1438, Address: 0x16b1f0, Func Offset: 0x110
	// Line 1439, Address: 0x16b1f4, Func Offset: 0x114
	// Line 1440, Address: 0x16b1f8, Func Offset: 0x118
	// Line 1441, Address: 0x16b1fc, Func Offset: 0x11c
	// Line 1442, Address: 0x16b200, Func Offset: 0x120
	// Line 1445, Address: 0x16b208, Func Offset: 0x128
	// Line 1446, Address: 0x16b20c, Func Offset: 0x12c
	// Line 1448, Address: 0x16b214, Func Offset: 0x134
	// Line 1449, Address: 0x16b218, Func Offset: 0x138
	// Line 1450, Address: 0x16b21c, Func Offset: 0x13c
	// Line 1451, Address: 0x16b220, Func Offset: 0x140
	// Line 1452, Address: 0x16b224, Func Offset: 0x144
	// Line 1457, Address: 0x16b228, Func Offset: 0x148
	// Func End, Address: 0x16b230, Func Offset: 0x150
}

// 
// Start address: 0x16b230
void fog_part_grid()
{
	float* GridDenseNew;
	float* GridDense;
	FOG_PART_DATA* pd;
	// Line 1464, Address: 0x16b230, Func Offset: 0
	// Line 1465, Address: 0x16b248, Func Offset: 0x18
	// Line 1467, Address: 0x16b250, Func Offset: 0x20
	// Line 1593, Address: 0x16b254, Func Offset: 0x24
	// Line 1594, Address: 0x16b258, Func Offset: 0x28
	// Line 1595, Address: 0x16b25c, Func Offset: 0x2c
	// Line 1596, Address: 0x16b260, Func Offset: 0x30
	// Line 1597, Address: 0x16b264, Func Offset: 0x34
	// Line 1598, Address: 0x16b268, Func Offset: 0x38
	// Line 1599, Address: 0x16b26c, Func Offset: 0x3c
	// Line 1600, Address: 0x16b270, Func Offset: 0x40
	// Line 1601, Address: 0x16b274, Func Offset: 0x44
	// Line 1602, Address: 0x16b278, Func Offset: 0x48
	// Line 1603, Address: 0x16b27c, Func Offset: 0x4c
	// Line 1604, Address: 0x16b280, Func Offset: 0x50
	// Line 1605, Address: 0x16b284, Func Offset: 0x54
	// Line 1606, Address: 0x16b288, Func Offset: 0x58
	// Line 1607, Address: 0x16b28c, Func Offset: 0x5c
	// Line 1608, Address: 0x16b290, Func Offset: 0x60
	// Line 1609, Address: 0x16b294, Func Offset: 0x64
	// Line 1610, Address: 0x16b298, Func Offset: 0x68
	// Line 1611, Address: 0x16b29c, Func Offset: 0x6c
	// Line 1612, Address: 0x16b2a0, Func Offset: 0x70
	// Line 1613, Address: 0x16b2a4, Func Offset: 0x74
	// Line 1614, Address: 0x16b2a8, Func Offset: 0x78
	// Line 1615, Address: 0x16b2ac, Func Offset: 0x7c
	// Line 1616, Address: 0x16b2b0, Func Offset: 0x80
	// Line 1617, Address: 0x16b2b4, Func Offset: 0x84
	// Line 1618, Address: 0x16b2b8, Func Offset: 0x88
	// Line 1619, Address: 0x16b2bc, Func Offset: 0x8c
	// Line 1620, Address: 0x16b2c0, Func Offset: 0x90
	// Line 1621, Address: 0x16b2c4, Func Offset: 0x94
	// Line 1622, Address: 0x16b2c8, Func Offset: 0x98
	// Line 1623, Address: 0x16b2cc, Func Offset: 0x9c
	// Line 1624, Address: 0x16b2d0, Func Offset: 0xa0
	// Line 1625, Address: 0x16b2d4, Func Offset: 0xa4
	// Line 1626, Address: 0x16b2d8, Func Offset: 0xa8
	// Line 1627, Address: 0x16b2dc, Func Offset: 0xac
	// Line 1628, Address: 0x16b2e0, Func Offset: 0xb0
	// Line 1629, Address: 0x16b2e4, Func Offset: 0xb4
	// Line 1630, Address: 0x16b2e8, Func Offset: 0xb8
	// Line 1631, Address: 0x16b2ec, Func Offset: 0xbc
	// Line 1632, Address: 0x16b2f0, Func Offset: 0xc0
	// Line 1633, Address: 0x16b2f4, Func Offset: 0xc4
	// Line 1634, Address: 0x16b2f8, Func Offset: 0xc8
	// Line 1635, Address: 0x16b2fc, Func Offset: 0xcc
	// Line 1636, Address: 0x16b300, Func Offset: 0xd0
	// Line 1637, Address: 0x16b304, Func Offset: 0xd4
	// Line 1638, Address: 0x16b308, Func Offset: 0xd8
	// Line 1639, Address: 0x16b30c, Func Offset: 0xdc
	// Line 1640, Address: 0x16b310, Func Offset: 0xe0
	// Line 1641, Address: 0x16b314, Func Offset: 0xe4
	// Line 1642, Address: 0x16b318, Func Offset: 0xe8
	// Line 1643, Address: 0x16b31c, Func Offset: 0xec
	// Line 1644, Address: 0x16b320, Func Offset: 0xf0
	// Line 1645, Address: 0x16b324, Func Offset: 0xf4
	// Line 1646, Address: 0x16b328, Func Offset: 0xf8
	// Line 1647, Address: 0x16b32c, Func Offset: 0xfc
	// Line 1648, Address: 0x16b330, Func Offset: 0x100
	// Line 1649, Address: 0x16b334, Func Offset: 0x104
	// Line 1650, Address: 0x16b338, Func Offset: 0x108
	// Line 1651, Address: 0x16b33c, Func Offset: 0x10c
	// Line 1652, Address: 0x16b340, Func Offset: 0x110
	// Line 1653, Address: 0x16b344, Func Offset: 0x114
	// Line 1654, Address: 0x16b348, Func Offset: 0x118
	// Line 1655, Address: 0x16b34c, Func Offset: 0x11c
	// Line 1656, Address: 0x16b350, Func Offset: 0x120
	// Line 1657, Address: 0x16b354, Func Offset: 0x124
	// Line 1658, Address: 0x16b358, Func Offset: 0x128
	// Line 1659, Address: 0x16b35c, Func Offset: 0x12c
	// Line 1660, Address: 0x16b360, Func Offset: 0x130
	// Line 1661, Address: 0x16b364, Func Offset: 0x134
	// Line 1662, Address: 0x16b368, Func Offset: 0x138
	// Line 1663, Address: 0x16b36c, Func Offset: 0x13c
	// Line 1664, Address: 0x16b370, Func Offset: 0x140
	// Line 1665, Address: 0x16b374, Func Offset: 0x144
	// Line 1666, Address: 0x16b378, Func Offset: 0x148
	// Line 1667, Address: 0x16b37c, Func Offset: 0x14c
	// Line 1668, Address: 0x16b380, Func Offset: 0x150
	// Line 1669, Address: 0x16b384, Func Offset: 0x154
	// Line 1670, Address: 0x16b388, Func Offset: 0x158
	// Line 1671, Address: 0x16b38c, Func Offset: 0x15c
	// Line 1672, Address: 0x16b390, Func Offset: 0x160
	// Line 1673, Address: 0x16b394, Func Offset: 0x164
	// Line 1674, Address: 0x16b398, Func Offset: 0x168
	// Line 1675, Address: 0x16b39c, Func Offset: 0x16c
	// Line 1676, Address: 0x16b3a0, Func Offset: 0x170
	// Line 1677, Address: 0x16b3a4, Func Offset: 0x174
	// Line 1678, Address: 0x16b3a8, Func Offset: 0x178
	// Line 1679, Address: 0x16b3ac, Func Offset: 0x17c
	// Line 1680, Address: 0x16b3b0, Func Offset: 0x180
	// Line 1681, Address: 0x16b3b4, Func Offset: 0x184
	// Line 1682, Address: 0x16b3b8, Func Offset: 0x188
	// Line 1683, Address: 0x16b3bc, Func Offset: 0x18c
	// Line 1684, Address: 0x16b3c0, Func Offset: 0x190
	// Line 1685, Address: 0x16b3c4, Func Offset: 0x194
	// Line 1686, Address: 0x16b3c8, Func Offset: 0x198
	// Line 1687, Address: 0x16b3cc, Func Offset: 0x19c
	// Line 1688, Address: 0x16b3d0, Func Offset: 0x1a0
	// Line 1689, Address: 0x16b3d4, Func Offset: 0x1a4
	// Line 1691, Address: 0x16b3d8, Func Offset: 0x1a8
	// Line 1692, Address: 0x16b3dc, Func Offset: 0x1ac
	// Line 1693, Address: 0x16b3e0, Func Offset: 0x1b0
	// Line 1694, Address: 0x16b3e4, Func Offset: 0x1b4
	// Line 1695, Address: 0x16b3e8, Func Offset: 0x1b8
	// Line 1696, Address: 0x16b3ec, Func Offset: 0x1bc
	// Line 1697, Address: 0x16b3f0, Func Offset: 0x1c0
	// Line 1698, Address: 0x16b3f4, Func Offset: 0x1c4
	// Line 1699, Address: 0x16b3f8, Func Offset: 0x1c8
	// Line 1700, Address: 0x16b3fc, Func Offset: 0x1cc
	// Line 1701, Address: 0x16b400, Func Offset: 0x1d0
	// Line 1702, Address: 0x16b404, Func Offset: 0x1d4
	// Line 1703, Address: 0x16b408, Func Offset: 0x1d8
	// Line 1704, Address: 0x16b40c, Func Offset: 0x1dc
	// Line 1705, Address: 0x16b410, Func Offset: 0x1e0
	// Line 1706, Address: 0x16b414, Func Offset: 0x1e4
	// Line 1707, Address: 0x16b418, Func Offset: 0x1e8
	// Line 1708, Address: 0x16b41c, Func Offset: 0x1ec
	// Line 1709, Address: 0x16b420, Func Offset: 0x1f0
	// Line 1710, Address: 0x16b424, Func Offset: 0x1f4
	// Line 1711, Address: 0x16b428, Func Offset: 0x1f8
	// Line 1712, Address: 0x16b42c, Func Offset: 0x1fc
	// Line 1713, Address: 0x16b430, Func Offset: 0x200
	// Line 1714, Address: 0x16b434, Func Offset: 0x204
	// Line 1715, Address: 0x16b438, Func Offset: 0x208
	// Line 1716, Address: 0x16b43c, Func Offset: 0x20c
	// Line 1717, Address: 0x16b440, Func Offset: 0x210
	// Line 1718, Address: 0x16b444, Func Offset: 0x214
	// Line 1719, Address: 0x16b448, Func Offset: 0x218
	// Line 1720, Address: 0x16b44c, Func Offset: 0x21c
	// Line 1721, Address: 0x16b450, Func Offset: 0x220
	// Line 1722, Address: 0x16b454, Func Offset: 0x224
	// Line 1723, Address: 0x16b458, Func Offset: 0x228
	// Line 1724, Address: 0x16b45c, Func Offset: 0x22c
	// Line 1725, Address: 0x16b460, Func Offset: 0x230
	// Line 1726, Address: 0x16b464, Func Offset: 0x234
	// Line 1727, Address: 0x16b468, Func Offset: 0x238
	// Line 1728, Address: 0x16b46c, Func Offset: 0x23c
	// Line 1729, Address: 0x16b470, Func Offset: 0x240
	// Line 1730, Address: 0x16b474, Func Offset: 0x244
	// Line 1731, Address: 0x16b478, Func Offset: 0x248
	// Line 1733, Address: 0x16b47c, Func Offset: 0x24c
	// Line 1734, Address: 0x16b480, Func Offset: 0x250
	// Line 1735, Address: 0x16b484, Func Offset: 0x254
	// Line 1736, Address: 0x16b488, Func Offset: 0x258
	// Line 1737, Address: 0x16b48c, Func Offset: 0x25c
	// Line 1738, Address: 0x16b490, Func Offset: 0x260
	// Line 1739, Address: 0x16b494, Func Offset: 0x264
	// Line 1740, Address: 0x16b498, Func Offset: 0x268
	// Line 1741, Address: 0x16b49c, Func Offset: 0x26c
	// Line 1742, Address: 0x16b4a0, Func Offset: 0x270
	// Line 1743, Address: 0x16b4a4, Func Offset: 0x274
	// Line 1745, Address: 0x16b4a8, Func Offset: 0x278
	// Line 1746, Address: 0x16b4ac, Func Offset: 0x27c
	// Line 1747, Address: 0x16b4b0, Func Offset: 0x280
	// Line 1748, Address: 0x16b4b4, Func Offset: 0x284
	// Line 1749, Address: 0x16b4b8, Func Offset: 0x288
	// Line 1750, Address: 0x16b4bc, Func Offset: 0x28c
	// Line 1751, Address: 0x16b4c0, Func Offset: 0x290
	// Line 1752, Address: 0x16b4c4, Func Offset: 0x294
	// Line 1753, Address: 0x16b4c8, Func Offset: 0x298
	// Line 1754, Address: 0x16b4cc, Func Offset: 0x29c
	// Line 1755, Address: 0x16b4d0, Func Offset: 0x2a0
	// Line 1756, Address: 0x16b4d4, Func Offset: 0x2a4
	// Line 1758, Address: 0x16b4d8, Func Offset: 0x2a8
	// Line 1759, Address: 0x16b4dc, Func Offset: 0x2ac
	// Line 1760, Address: 0x16b4e0, Func Offset: 0x2b0
	// Line 1761, Address: 0x16b4e4, Func Offset: 0x2b4
	// Line 1762, Address: 0x16b4e8, Func Offset: 0x2b8
	// Line 1763, Address: 0x16b4ec, Func Offset: 0x2bc
	// Line 1764, Address: 0x16b4f0, Func Offset: 0x2c0
	// Line 1765, Address: 0x16b4f4, Func Offset: 0x2c4
	// Line 1766, Address: 0x16b4f8, Func Offset: 0x2c8
	// Line 1767, Address: 0x16b4fc, Func Offset: 0x2cc
	// Line 1768, Address: 0x16b500, Func Offset: 0x2d0
	// Line 1769, Address: 0x16b504, Func Offset: 0x2d4
	// Line 1771, Address: 0x16b508, Func Offset: 0x2d8
	// Line 1772, Address: 0x16b50c, Func Offset: 0x2dc
	// Line 1773, Address: 0x16b510, Func Offset: 0x2e0
	// Line 1774, Address: 0x16b514, Func Offset: 0x2e4
	// Line 1775, Address: 0x16b518, Func Offset: 0x2e8
	// Line 1776, Address: 0x16b51c, Func Offset: 0x2ec
	// Line 1777, Address: 0x16b520, Func Offset: 0x2f0
	// Line 1778, Address: 0x16b524, Func Offset: 0x2f4
	// Line 1779, Address: 0x16b528, Func Offset: 0x2f8
	// Line 1780, Address: 0x16b52c, Func Offset: 0x2fc
	// Line 1781, Address: 0x16b530, Func Offset: 0x300
	// Line 1783, Address: 0x16b534, Func Offset: 0x304
	// Line 1784, Address: 0x16b538, Func Offset: 0x308
	// Line 1785, Address: 0x16b53c, Func Offset: 0x30c
	// Line 1786, Address: 0x16b540, Func Offset: 0x310
	// Line 1787, Address: 0x16b544, Func Offset: 0x314
	// Line 1788, Address: 0x16b548, Func Offset: 0x318
	// Line 1789, Address: 0x16b54c, Func Offset: 0x31c
	// Line 1790, Address: 0x16b550, Func Offset: 0x320
	// Line 1791, Address: 0x16b554, Func Offset: 0x324
	// Line 1792, Address: 0x16b558, Func Offset: 0x328
	// Line 1793, Address: 0x16b55c, Func Offset: 0x32c
	// Line 1794, Address: 0x16b560, Func Offset: 0x330
	// Line 1795, Address: 0x16b564, Func Offset: 0x334
	// Line 1796, Address: 0x16b568, Func Offset: 0x338
	// Line 1797, Address: 0x16b56c, Func Offset: 0x33c
	// Line 1798, Address: 0x16b570, Func Offset: 0x340
	// Line 1799, Address: 0x16b574, Func Offset: 0x344
	// Line 1800, Address: 0x16b578, Func Offset: 0x348
	// Line 1801, Address: 0x16b57c, Func Offset: 0x34c
	// Line 1802, Address: 0x16b580, Func Offset: 0x350
	// Line 1803, Address: 0x16b584, Func Offset: 0x354
	// Line 1804, Address: 0x16b588, Func Offset: 0x358
	// Line 1805, Address: 0x16b58c, Func Offset: 0x35c
	// Line 1806, Address: 0x16b590, Func Offset: 0x360
	// Line 1807, Address: 0x16b594, Func Offset: 0x364
	// Line 1808, Address: 0x16b598, Func Offset: 0x368
	// Line 1809, Address: 0x16b59c, Func Offset: 0x36c
	// Line 1810, Address: 0x16b5a0, Func Offset: 0x370
	// Line 1811, Address: 0x16b5a4, Func Offset: 0x374
	// Line 1812, Address: 0x16b5a8, Func Offset: 0x378
	// Line 1813, Address: 0x16b5ac, Func Offset: 0x37c
	// Line 1814, Address: 0x16b5b0, Func Offset: 0x380
	// Line 1815, Address: 0x16b5b4, Func Offset: 0x384
	// Line 1816, Address: 0x16b5b8, Func Offset: 0x388
	// Line 1818, Address: 0x16b5bc, Func Offset: 0x38c
	// Line 1819, Address: 0x16b5c0, Func Offset: 0x390
	// Line 1820, Address: 0x16b5c4, Func Offset: 0x394
	// Line 1821, Address: 0x16b5c8, Func Offset: 0x398
	// Line 1822, Address: 0x16b5cc, Func Offset: 0x39c
	// Line 1823, Address: 0x16b5d0, Func Offset: 0x3a0
	// Line 1824, Address: 0x16b5d4, Func Offset: 0x3a4
	// Line 1825, Address: 0x16b5d8, Func Offset: 0x3a8
	// Line 1826, Address: 0x16b5dc, Func Offset: 0x3ac
	// Line 1827, Address: 0x16b5e0, Func Offset: 0x3b0
	// Line 1828, Address: 0x16b5e4, Func Offset: 0x3b4
	// Line 1829, Address: 0x16b5e8, Func Offset: 0x3b8
	// Line 1830, Address: 0x16b5ec, Func Offset: 0x3bc
	// Line 1831, Address: 0x16b5f0, Func Offset: 0x3c0
	// Line 1832, Address: 0x16b5f4, Func Offset: 0x3c4
	// Line 1833, Address: 0x16b5f8, Func Offset: 0x3c8
	// Line 1834, Address: 0x16b5fc, Func Offset: 0x3cc
	// Line 1835, Address: 0x16b600, Func Offset: 0x3d0
	// Line 1836, Address: 0x16b604, Func Offset: 0x3d4
	// Line 1837, Address: 0x16b608, Func Offset: 0x3d8
	// Line 1838, Address: 0x16b60c, Func Offset: 0x3dc
	// Line 1839, Address: 0x16b610, Func Offset: 0x3e0
	// Line 1840, Address: 0x16b614, Func Offset: 0x3e4
	// Line 1841, Address: 0x16b618, Func Offset: 0x3e8
	// Line 1842, Address: 0x16b61c, Func Offset: 0x3ec
	// Line 1843, Address: 0x16b620, Func Offset: 0x3f0
	// Line 1844, Address: 0x16b624, Func Offset: 0x3f4
	// Line 1845, Address: 0x16b628, Func Offset: 0x3f8
	// Line 1846, Address: 0x16b62c, Func Offset: 0x3fc
	// Line 1847, Address: 0x16b630, Func Offset: 0x400
	// Line 1848, Address: 0x16b634, Func Offset: 0x404
	// Line 1849, Address: 0x16b638, Func Offset: 0x408
	// Line 1850, Address: 0x16b63c, Func Offset: 0x40c
	// Line 1851, Address: 0x16b640, Func Offset: 0x410
	// Line 1852, Address: 0x16b644, Func Offset: 0x414
	// Line 1853, Address: 0x16b648, Func Offset: 0x418
	// Line 1854, Address: 0x16b64c, Func Offset: 0x41c
	// Line 1855, Address: 0x16b650, Func Offset: 0x420
	// Line 1856, Address: 0x16b654, Func Offset: 0x424
	// Line 1857, Address: 0x16b658, Func Offset: 0x428
	// Line 1858, Address: 0x16b65c, Func Offset: 0x42c
	// Line 1859, Address: 0x16b660, Func Offset: 0x430
	// Line 1860, Address: 0x16b664, Func Offset: 0x434
	// Line 1861, Address: 0x16b668, Func Offset: 0x438
	// Line 1862, Address: 0x16b66c, Func Offset: 0x43c
	// Line 1863, Address: 0x16b670, Func Offset: 0x440
	// Line 1864, Address: 0x16b674, Func Offset: 0x444
	// Line 1865, Address: 0x16b678, Func Offset: 0x448
	// Line 1866, Address: 0x16b67c, Func Offset: 0x44c
	// Line 1867, Address: 0x16b680, Func Offset: 0x450
	// Line 1869, Address: 0x16b684, Func Offset: 0x454
	// Line 1870, Address: 0x16b688, Func Offset: 0x458
	// Line 1871, Address: 0x16b68c, Func Offset: 0x45c
	// Line 1872, Address: 0x16b690, Func Offset: 0x460
	// Line 1873, Address: 0x16b694, Func Offset: 0x464
	// Line 1874, Address: 0x16b698, Func Offset: 0x468
	// Line 1875, Address: 0x16b69c, Func Offset: 0x46c
	// Line 1876, Address: 0x16b6a0, Func Offset: 0x470
	// Line 1877, Address: 0x16b6a4, Func Offset: 0x474
	// Line 1878, Address: 0x16b6a8, Func Offset: 0x478
	// Line 1879, Address: 0x16b6ac, Func Offset: 0x47c
	// Line 1880, Address: 0x16b6b0, Func Offset: 0x480
	// Line 1881, Address: 0x16b6b4, Func Offset: 0x484
	// Line 1882, Address: 0x16b6b8, Func Offset: 0x488
	// Line 1883, Address: 0x16b6bc, Func Offset: 0x48c
	// Line 1884, Address: 0x16b6c0, Func Offset: 0x490
	// Line 1885, Address: 0x16b6c4, Func Offset: 0x494
	// Line 1886, Address: 0x16b6c8, Func Offset: 0x498
	// Line 1887, Address: 0x16b6cc, Func Offset: 0x49c
	// Line 1888, Address: 0x16b6d0, Func Offset: 0x4a0
	// Line 1889, Address: 0x16b6d4, Func Offset: 0x4a4
	// Line 1890, Address: 0x16b6d8, Func Offset: 0x4a8
	// Line 1891, Address: 0x16b6dc, Func Offset: 0x4ac
	// Line 1892, Address: 0x16b6e0, Func Offset: 0x4b0
	// Line 1893, Address: 0x16b6e4, Func Offset: 0x4b4
	// Line 1894, Address: 0x16b6e8, Func Offset: 0x4b8
	// Line 1895, Address: 0x16b6ec, Func Offset: 0x4bc
	// Line 1896, Address: 0x16b6f0, Func Offset: 0x4c0
	// Line 1897, Address: 0x16b6f4, Func Offset: 0x4c4
	// Line 1898, Address: 0x16b6f8, Func Offset: 0x4c8
	// Line 1899, Address: 0x16b6fc, Func Offset: 0x4cc
	// Line 1900, Address: 0x16b700, Func Offset: 0x4d0
	// Line 1901, Address: 0x16b704, Func Offset: 0x4d4
	// Line 1902, Address: 0x16b708, Func Offset: 0x4d8
	// Line 1903, Address: 0x16b70c, Func Offset: 0x4dc
	// Line 1904, Address: 0x16b710, Func Offset: 0x4e0
	// Line 1905, Address: 0x16b714, Func Offset: 0x4e4
	// Line 1906, Address: 0x16b718, Func Offset: 0x4e8
	// Line 1907, Address: 0x16b71c, Func Offset: 0x4ec
	// Line 1908, Address: 0x16b720, Func Offset: 0x4f0
	// Line 1909, Address: 0x16b724, Func Offset: 0x4f4
	// Line 1910, Address: 0x16b728, Func Offset: 0x4f8
	// Line 1911, Address: 0x16b72c, Func Offset: 0x4fc
	// Line 1912, Address: 0x16b730, Func Offset: 0x500
	// Line 1914, Address: 0x16b734, Func Offset: 0x504
	// Line 1915, Address: 0x16b738, Func Offset: 0x508
	// Line 1916, Address: 0x16b73c, Func Offset: 0x50c
	// Line 1917, Address: 0x16b740, Func Offset: 0x510
	// Line 1918, Address: 0x16b744, Func Offset: 0x514
	// Line 1919, Address: 0x16b748, Func Offset: 0x518
	// Line 1920, Address: 0x16b74c, Func Offset: 0x51c
	// Line 1921, Address: 0x16b750, Func Offset: 0x520
	// Line 1922, Address: 0x16b754, Func Offset: 0x524
	// Line 1929, Address: 0x16b758, Func Offset: 0x528
	// Func End, Address: 0x16b778, Func Offset: 0x548
}

// 
// Start address: 0x16b780
void fog_part_obj()
{
	FOG_OBJ_DATA* od;
	FOG_PART_DATA* pd;
	// Line 1935, Address: 0x16b780, Func Offset: 0
	// Line 1968, Address: 0x16b788, Func Offset: 0x8
	// Line 1987, Address: 0x16b794, Func Offset: 0x14
	// Line 1988, Address: 0x16b798, Func Offset: 0x18
	// Line 1989, Address: 0x16b79c, Func Offset: 0x1c
	// Line 1990, Address: 0x16b7a0, Func Offset: 0x20
	// Line 1991, Address: 0x16b7a4, Func Offset: 0x24
	// Line 1992, Address: 0x16b7a8, Func Offset: 0x28
	// Line 1993, Address: 0x16b7ac, Func Offset: 0x2c
	// Line 1994, Address: 0x16b7b0, Func Offset: 0x30
	// Line 1996, Address: 0x16b7b4, Func Offset: 0x34
	// Line 1997, Address: 0x16b7b8, Func Offset: 0x38
	// Line 1998, Address: 0x16b7bc, Func Offset: 0x3c
	// Line 1999, Address: 0x16b7c0, Func Offset: 0x40
	// Line 2001, Address: 0x16b7c8, Func Offset: 0x48
	// Line 2002, Address: 0x16b7cc, Func Offset: 0x4c
	// Line 2003, Address: 0x16b7d0, Func Offset: 0x50
	// Line 2004, Address: 0x16b7d4, Func Offset: 0x54
	// Line 2005, Address: 0x16b7d8, Func Offset: 0x58
	// Line 2006, Address: 0x16b7dc, Func Offset: 0x5c
	// Line 2007, Address: 0x16b7e0, Func Offset: 0x60
	// Line 2008, Address: 0x16b7e4, Func Offset: 0x64
	// Line 2009, Address: 0x16b7e8, Func Offset: 0x68
	// Line 2010, Address: 0x16b7ec, Func Offset: 0x6c
	// Line 2011, Address: 0x16b7f0, Func Offset: 0x70
	// Line 2013, Address: 0x16b7f8, Func Offset: 0x78
	// Line 2014, Address: 0x16b7fc, Func Offset: 0x7c
	// Line 2015, Address: 0x16b800, Func Offset: 0x80
	// Line 2016, Address: 0x16b804, Func Offset: 0x84
	// Line 2017, Address: 0x16b808, Func Offset: 0x88
	// Line 2018, Address: 0x16b80c, Func Offset: 0x8c
	// Line 2019, Address: 0x16b810, Func Offset: 0x90
	// Line 2020, Address: 0x16b814, Func Offset: 0x94
	// Line 2021, Address: 0x16b818, Func Offset: 0x98
	// Line 2022, Address: 0x16b81c, Func Offset: 0x9c
	// Line 2023, Address: 0x16b820, Func Offset: 0xa0
	// Line 2024, Address: 0x16b824, Func Offset: 0xa4
	// Line 2025, Address: 0x16b828, Func Offset: 0xa8
	// Line 2026, Address: 0x16b82c, Func Offset: 0xac
	// Line 2027, Address: 0x16b830, Func Offset: 0xb0
	// Line 2029, Address: 0x16b838, Func Offset: 0xb8
	// Line 2030, Address: 0x16b83c, Func Offset: 0xbc
	// Line 2032, Address: 0x16b840, Func Offset: 0xc0
	// Line 2033, Address: 0x16b844, Func Offset: 0xc4
	// Line 2034, Address: 0x16b848, Func Offset: 0xc8
	// Line 2035, Address: 0x16b84c, Func Offset: 0xcc
	// Line 2036, Address: 0x16b850, Func Offset: 0xd0
	// Line 2037, Address: 0x16b854, Func Offset: 0xd4
	// Line 2038, Address: 0x16b858, Func Offset: 0xd8
	// Line 2039, Address: 0x16b85c, Func Offset: 0xdc
	// Line 2042, Address: 0x16b864, Func Offset: 0xe4
	// Line 2043, Address: 0x16b868, Func Offset: 0xe8
	// Line 2045, Address: 0x16b86c, Func Offset: 0xec
	// Line 2046, Address: 0x16b870, Func Offset: 0xf0
	// Line 2048, Address: 0x16b878, Func Offset: 0xf8
	// Line 2049, Address: 0x16b87c, Func Offset: 0xfc
	// Line 2054, Address: 0x16b880, Func Offset: 0x100
	// Func End, Address: 0x16b888, Func Offset: 0x108
}

// 
// Start address: 0x16b890
void fog_part_obj2()
{
	FOG_OBJ_DATA* od;
	FOG_PART_DATA* pd;
	// Line 2060, Address: 0x16b890, Func Offset: 0
	// Line 2061, Address: 0x16b898, Func Offset: 0x8
	// Line 2097, Address: 0x16b89c, Func Offset: 0xc
	// Line 2116, Address: 0x16b8a8, Func Offset: 0x18
	// Line 2117, Address: 0x16b8ac, Func Offset: 0x1c
	// Line 2118, Address: 0x16b8b0, Func Offset: 0x20
	// Line 2119, Address: 0x16b8b4, Func Offset: 0x24
	// Line 2120, Address: 0x16b8b8, Func Offset: 0x28
	// Line 2121, Address: 0x16b8bc, Func Offset: 0x2c
	// Line 2122, Address: 0x16b8c0, Func Offset: 0x30
	// Line 2123, Address: 0x16b8c4, Func Offset: 0x34
	// Line 2125, Address: 0x16b8c8, Func Offset: 0x38
	// Line 2126, Address: 0x16b8cc, Func Offset: 0x3c
	// Line 2127, Address: 0x16b8d0, Func Offset: 0x40
	// Line 2128, Address: 0x16b8d4, Func Offset: 0x44
	// Line 2130, Address: 0x16b8dc, Func Offset: 0x4c
	// Line 2131, Address: 0x16b8e0, Func Offset: 0x50
	// Line 2132, Address: 0x16b8e4, Func Offset: 0x54
	// Line 2134, Address: 0x16b8ec, Func Offset: 0x5c
	// Line 2135, Address: 0x16b8f0, Func Offset: 0x60
	// Line 2136, Address: 0x16b8f4, Func Offset: 0x64
	// Line 2137, Address: 0x16b8f8, Func Offset: 0x68
	// Line 2138, Address: 0x16b8fc, Func Offset: 0x6c
	// Line 2139, Address: 0x16b900, Func Offset: 0x70
	// Line 2140, Address: 0x16b904, Func Offset: 0x74
	// Line 2141, Address: 0x16b908, Func Offset: 0x78
	// Line 2142, Address: 0x16b90c, Func Offset: 0x7c
	// Line 2144, Address: 0x16b914, Func Offset: 0x84
	// Line 2145, Address: 0x16b918, Func Offset: 0x88
	// Line 2146, Address: 0x16b91c, Func Offset: 0x8c
	// Line 2147, Address: 0x16b920, Func Offset: 0x90
	// Line 2148, Address: 0x16b924, Func Offset: 0x94
	// Line 2149, Address: 0x16b928, Func Offset: 0x98
	// Line 2150, Address: 0x16b92c, Func Offset: 0x9c
	// Line 2151, Address: 0x16b930, Func Offset: 0xa0
	// Line 2152, Address: 0x16b934, Func Offset: 0xa4
	// Line 2153, Address: 0x16b938, Func Offset: 0xa8
	// Line 2154, Address: 0x16b93c, Func Offset: 0xac
	// Line 2155, Address: 0x16b940, Func Offset: 0xb0
	// Line 2156, Address: 0x16b944, Func Offset: 0xb4
	// Line 2157, Address: 0x16b948, Func Offset: 0xb8
	// Line 2158, Address: 0x16b94c, Func Offset: 0xbc
	// Line 2160, Address: 0x16b954, Func Offset: 0xc4
	// Line 2161, Address: 0x16b958, Func Offset: 0xc8
	// Line 2163, Address: 0x16b95c, Func Offset: 0xcc
	// Line 2164, Address: 0x16b960, Func Offset: 0xd0
	// Line 2165, Address: 0x16b964, Func Offset: 0xd4
	// Line 2166, Address: 0x16b968, Func Offset: 0xd8
	// Line 2167, Address: 0x16b96c, Func Offset: 0xdc
	// Line 2168, Address: 0x16b970, Func Offset: 0xe0
	// Line 2169, Address: 0x16b974, Func Offset: 0xe4
	// Line 2172, Address: 0x16b97c, Func Offset: 0xec
	// Line 2173, Address: 0x16b980, Func Offset: 0xf0
	// Line 2175, Address: 0x16b984, Func Offset: 0xf4
	// Line 2176, Address: 0x16b988, Func Offset: 0xf8
	// Line 2178, Address: 0x16b990, Func Offset: 0x100
	// Line 2179, Address: 0x16b994, Func Offset: 0x104
	// Line 2184, Address: 0x16b998, Func Offset: 0x108
	// Func End, Address: 0x16b9a0, Func Offset: 0x110
}

// 
// Start address: 0x16b9a0
void fog_part_alp()
{
	FOG_PART_DATA* pd;
	// Line 2189, Address: 0x16b9a0, Func Offset: 0
	// Line 2190, Address: 0x16b9ac, Func Offset: 0xc
	// Line 2218, Address: 0x16b9b4, Func Offset: 0x14
	// Line 2219, Address: 0x16b9b8, Func Offset: 0x18
	// Line 2220, Address: 0x16b9bc, Func Offset: 0x1c
	// Line 2221, Address: 0x16b9c0, Func Offset: 0x20
	// Line 2222, Address: 0x16b9c4, Func Offset: 0x24
	// Line 2223, Address: 0x16b9c8, Func Offset: 0x28
	// Line 2225, Address: 0x16b9d0, Func Offset: 0x30
	// Line 2226, Address: 0x16b9d4, Func Offset: 0x34
	// Line 2228, Address: 0x16b9dc, Func Offset: 0x3c
	// Line 2229, Address: 0x16b9e0, Func Offset: 0x40
	// Line 2231, Address: 0x16b9e4, Func Offset: 0x44
	// Line 2232, Address: 0x16b9e8, Func Offset: 0x48
	// Line 2233, Address: 0x16b9ec, Func Offset: 0x4c
	// Line 2236, Address: 0x16b9f4, Func Offset: 0x54
	// Line 2237, Address: 0x16b9f8, Func Offset: 0x58
	// Line 2238, Address: 0x16b9fc, Func Offset: 0x5c
	// Line 2239, Address: 0x16ba00, Func Offset: 0x60
	// Line 2241, Address: 0x16ba08, Func Offset: 0x68
	// Line 2242, Address: 0x16ba0c, Func Offset: 0x6c
	// Line 2243, Address: 0x16ba10, Func Offset: 0x70
	// Line 2244, Address: 0x16ba14, Func Offset: 0x74
	// Line 2245, Address: 0x16ba18, Func Offset: 0x78
	// Line 2246, Address: 0x16ba1c, Func Offset: 0x7c
	// Line 2247, Address: 0x16ba20, Func Offset: 0x80
	// Line 2248, Address: 0x16ba24, Func Offset: 0x84
	// Line 2249, Address: 0x16ba28, Func Offset: 0x88
	// Line 2250, Address: 0x16ba2c, Func Offset: 0x8c
	// Line 2251, Address: 0x16ba30, Func Offset: 0x90
	// Line 2256, Address: 0x16ba34, Func Offset: 0x94
	// Func End, Address: 0x16ba48, Func Offset: 0xa8
}

// 
// Start address: 0x16ba50
void fog_part_clamp()
{
	FOG_PART_DATA* pd;
	// Line 2262, Address: 0x16ba50, Func Offset: 0
	// Line 2358, Address: 0x16ba58, Func Offset: 0x8
	// Line 2359, Address: 0x16ba5c, Func Offset: 0xc
	// Line 2360, Address: 0x16ba60, Func Offset: 0x10
	// Line 2361, Address: 0x16ba64, Func Offset: 0x14
	// Line 2362, Address: 0x16ba68, Func Offset: 0x18
	// Line 2363, Address: 0x16ba6c, Func Offset: 0x1c
	// Line 2364, Address: 0x16ba70, Func Offset: 0x20
	// Line 2365, Address: 0x16ba74, Func Offset: 0x24
	// Line 2367, Address: 0x16ba7c, Func Offset: 0x2c
	// Line 2368, Address: 0x16ba80, Func Offset: 0x30
	// Line 2370, Address: 0x16ba84, Func Offset: 0x34
	// Line 2373, Address: 0x16ba8c, Func Offset: 0x3c
	// Line 2374, Address: 0x16ba90, Func Offset: 0x40
	// Line 2376, Address: 0x16ba98, Func Offset: 0x48
	// Line 2377, Address: 0x16ba9c, Func Offset: 0x4c
	// Line 2379, Address: 0x16baa0, Func Offset: 0x50
	// Line 2380, Address: 0x16baa4, Func Offset: 0x54
	// Line 2381, Address: 0x16baa8, Func Offset: 0x58
	// Line 2382, Address: 0x16baac, Func Offset: 0x5c
	// Line 2383, Address: 0x16bab0, Func Offset: 0x60
	// Line 2385, Address: 0x16bab8, Func Offset: 0x68
	// Line 2386, Address: 0x16babc, Func Offset: 0x6c
	// Line 2388, Address: 0x16bac0, Func Offset: 0x70
	// Line 2390, Address: 0x16bac8, Func Offset: 0x78
	// Line 2391, Address: 0x16bacc, Func Offset: 0x7c
	// Line 2393, Address: 0x16bad0, Func Offset: 0x80
	// Line 2394, Address: 0x16bad4, Func Offset: 0x84
	// Line 2396, Address: 0x16badc, Func Offset: 0x8c
	// Line 2397, Address: 0x16bae0, Func Offset: 0x90
	// Line 2399, Address: 0x16bae4, Func Offset: 0x94
	// Line 2400, Address: 0x16bae8, Func Offset: 0x98
	// Line 2401, Address: 0x16baec, Func Offset: 0x9c
	// Line 2402, Address: 0x16baf0, Func Offset: 0xa0
	// Line 2403, Address: 0x16baf4, Func Offset: 0xa4
	// Line 2404, Address: 0x16baf8, Func Offset: 0xa8
	// Line 2405, Address: 0x16bafc, Func Offset: 0xac
	// Line 2406, Address: 0x16bb00, Func Offset: 0xb0
	// Line 2409, Address: 0x16bb08, Func Offset: 0xb8
	// Line 2412, Address: 0x16bb10, Func Offset: 0xc0
	// Line 2413, Address: 0x16bb14, Func Offset: 0xc4
	// Line 2416, Address: 0x16bb1c, Func Offset: 0xcc
	// Line 2417, Address: 0x16bb20, Func Offset: 0xd0
	// Line 2418, Address: 0x16bb24, Func Offset: 0xd4
	// Line 2419, Address: 0x16bb28, Func Offset: 0xd8
	// Line 2420, Address: 0x16bb2c, Func Offset: 0xdc
	// Line 2421, Address: 0x16bb30, Func Offset: 0xe0
	// Line 2422, Address: 0x16bb34, Func Offset: 0xe4
	// Line 2425, Address: 0x16bb3c, Func Offset: 0xec
	// Line 2428, Address: 0x16bb44, Func Offset: 0xf4
	// Line 2429, Address: 0x16bb48, Func Offset: 0xf8
	// Line 2432, Address: 0x16bb50, Func Offset: 0x100
	// Line 2433, Address: 0x16bb54, Func Offset: 0x104
	// Line 2434, Address: 0x16bb58, Func Offset: 0x108
	// Line 2435, Address: 0x16bb5c, Func Offset: 0x10c
	// Line 2439, Address: 0x16bb60, Func Offset: 0x110
	// Func End, Address: 0x16bb68, Func Offset: 0x118
}

// 
// Start address: 0x16bb70
void fogMakePacket()
{
	float near_w;
	// Line 2457, Address: 0x16bb70, Func Offset: 0
	// Line 2471, Address: 0x16bb98, Func Offset: 0x28
	// Line 2473, Address: 0x16bbdc, Func Offset: 0x6c
	// Line 2476, Address: 0x16bbec, Func Offset: 0x7c
	// Line 2479, Address: 0x16bc08, Func Offset: 0x98
	// Line 2480, Address: 0x16bc1c, Func Offset: 0xac
	// Line 2483, Address: 0x16bc2c, Func Offset: 0xbc
	// Line 2484, Address: 0x16bc48, Func Offset: 0xd8
	// Line 2485, Address: 0x16bc6c, Func Offset: 0xfc
	// Line 2489, Address: 0x16bc80, Func Offset: 0x110
	// Line 2490, Address: 0x16bcb0, Func Offset: 0x140
	// Line 2491, Address: 0x16bcb8, Func Offset: 0x148
	// Line 2492, Address: 0x16bcc0, Func Offset: 0x150
	// Line 2494, Address: 0x16bcd8, Func Offset: 0x168
	// Line 2629, Address: 0x16bce0, Func Offset: 0x170
	// Line 2664, Address: 0x16bd10, Func Offset: 0x1a0
	// Line 2665, Address: 0x16bd14, Func Offset: 0x1a4
	// Line 2666, Address: 0x16bd18, Func Offset: 0x1a8
	// Line 2667, Address: 0x16bd1c, Func Offset: 0x1ac
	// Line 2668, Address: 0x16bd20, Func Offset: 0x1b0
	// Line 2669, Address: 0x16bd24, Func Offset: 0x1b4
	// Line 2670, Address: 0x16bd28, Func Offset: 0x1b8
	// Line 2671, Address: 0x16bd2c, Func Offset: 0x1bc
	// Line 2672, Address: 0x16bd30, Func Offset: 0x1c0
	// Line 2673, Address: 0x16bd34, Func Offset: 0x1c4
	// Line 2674, Address: 0x16bd38, Func Offset: 0x1c8
	// Line 2675, Address: 0x16bd3c, Func Offset: 0x1cc
	// Line 2676, Address: 0x16bd40, Func Offset: 0x1d0
	// Line 2677, Address: 0x16bd44, Func Offset: 0x1d4
	// Line 2678, Address: 0x16bd48, Func Offset: 0x1d8
	// Line 2679, Address: 0x16bd4c, Func Offset: 0x1dc
	// Line 2680, Address: 0x16bd50, Func Offset: 0x1e0
	// Line 2681, Address: 0x16bd54, Func Offset: 0x1e4
	// Line 2682, Address: 0x16bd58, Func Offset: 0x1e8
	// Line 2683, Address: 0x16bd5c, Func Offset: 0x1ec
	// Line 2684, Address: 0x16bd60, Func Offset: 0x1f0
	// Line 2685, Address: 0x16bd64, Func Offset: 0x1f4
	// Line 2686, Address: 0x16bd68, Func Offset: 0x1f8
	// Line 2687, Address: 0x16bd6c, Func Offset: 0x1fc
	// Line 2688, Address: 0x16bd70, Func Offset: 0x200
	// Line 2689, Address: 0x16bd74, Func Offset: 0x204
	// Line 2690, Address: 0x16bd78, Func Offset: 0x208
	// Line 2691, Address: 0x16bd7c, Func Offset: 0x20c
	// Line 2692, Address: 0x16bd80, Func Offset: 0x210
	// Line 2693, Address: 0x16bd84, Func Offset: 0x214
	// Line 2694, Address: 0x16bd88, Func Offset: 0x218
	// Line 2695, Address: 0x16bd8c, Func Offset: 0x21c
	// Line 2696, Address: 0x16bd90, Func Offset: 0x220
	// Line 2697, Address: 0x16bd94, Func Offset: 0x224
	// Line 2698, Address: 0x16bd98, Func Offset: 0x228
	// Line 2699, Address: 0x16bd9c, Func Offset: 0x22c
	// Line 2700, Address: 0x16bda0, Func Offset: 0x230
	// Line 2701, Address: 0x16bda4, Func Offset: 0x234
	// Line 2702, Address: 0x16bda8, Func Offset: 0x238
	// Line 2703, Address: 0x16bdac, Func Offset: 0x23c
	// Line 2704, Address: 0x16bdb0, Func Offset: 0x240
	// Line 2705, Address: 0x16bdb4, Func Offset: 0x244
	// Line 2706, Address: 0x16bdb8, Func Offset: 0x248
	// Line 2707, Address: 0x16bdbc, Func Offset: 0x24c
	// Line 2708, Address: 0x16bdc0, Func Offset: 0x250
	// Line 2710, Address: 0x16bdc4, Func Offset: 0x254
	// Line 2711, Address: 0x16bdc8, Func Offset: 0x258
	// Line 2712, Address: 0x16bdcc, Func Offset: 0x25c
	// Line 2713, Address: 0x16bdd0, Func Offset: 0x260
	// Line 2714, Address: 0x16bdd4, Func Offset: 0x264
	// Line 2715, Address: 0x16bdd8, Func Offset: 0x268
	// Line 2716, Address: 0x16bddc, Func Offset: 0x26c
	// Line 2717, Address: 0x16bde0, Func Offset: 0x270
	// Line 2718, Address: 0x16bde4, Func Offset: 0x274
	// Line 2719, Address: 0x16bde8, Func Offset: 0x278
	// Line 2721, Address: 0x16bdf0, Func Offset: 0x280
	// Line 2722, Address: 0x16bdf4, Func Offset: 0x284
	// Line 2723, Address: 0x16bdf8, Func Offset: 0x288
	// Line 2725, Address: 0x16bdfc, Func Offset: 0x28c
	// Line 2726, Address: 0x16be00, Func Offset: 0x290
	// Line 2727, Address: 0x16be04, Func Offset: 0x294
	// Line 2728, Address: 0x16be08, Func Offset: 0x298
	// Line 2729, Address: 0x16be0c, Func Offset: 0x29c
	// Line 2731, Address: 0x16be14, Func Offset: 0x2a4
	// Line 2732, Address: 0x16be18, Func Offset: 0x2a8
	// Line 2733, Address: 0x16be1c, Func Offset: 0x2ac
	// Line 2734, Address: 0x16be20, Func Offset: 0x2b0
	// Line 2735, Address: 0x16be24, Func Offset: 0x2b4
	// Line 2736, Address: 0x16be28, Func Offset: 0x2b8
	// Line 2737, Address: 0x16be2c, Func Offset: 0x2bc
	// Line 2738, Address: 0x16be30, Func Offset: 0x2c0
	// Line 2739, Address: 0x16be34, Func Offset: 0x2c4
	// Line 2740, Address: 0x16be38, Func Offset: 0x2c8
	// Line 2742, Address: 0x16be40, Func Offset: 0x2d0
	// Line 2744, Address: 0x16be48, Func Offset: 0x2d8
	// Line 2745, Address: 0x16be4c, Func Offset: 0x2dc
	// Line 2746, Address: 0x16be50, Func Offset: 0x2e0
	// Line 2747, Address: 0x16be54, Func Offset: 0x2e4
	// Line 2748, Address: 0x16be58, Func Offset: 0x2e8
	// Line 2749, Address: 0x16be5c, Func Offset: 0x2ec
	// Line 2750, Address: 0x16be60, Func Offset: 0x2f0
	// Line 2751, Address: 0x16be64, Func Offset: 0x2f4
	// Line 2752, Address: 0x16be68, Func Offset: 0x2f8
	// Line 2753, Address: 0x16be6c, Func Offset: 0x2fc
	// Line 2754, Address: 0x16be70, Func Offset: 0x300
	// Line 2755, Address: 0x16be74, Func Offset: 0x304
	// Line 2759, Address: 0x16be7c, Func Offset: 0x30c
	// Line 2760, Address: 0x16be80, Func Offset: 0x310
	// Line 2761, Address: 0x16be84, Func Offset: 0x314
	// Line 2763, Address: 0x16be8c, Func Offset: 0x31c
	// Line 2764, Address: 0x16be90, Func Offset: 0x320
	// Line 2765, Address: 0x16be94, Func Offset: 0x324
	// Line 2766, Address: 0x16be98, Func Offset: 0x328
	// Line 2768, Address: 0x16bea0, Func Offset: 0x330
	// Line 2769, Address: 0x16bea4, Func Offset: 0x334
	// Line 2770, Address: 0x16bea8, Func Offset: 0x338
	// Line 2771, Address: 0x16beac, Func Offset: 0x33c
	// Line 2772, Address: 0x16beb0, Func Offset: 0x340
	// Line 2774, Address: 0x16beb8, Func Offset: 0x348
	// Line 2777, Address: 0x16bebc, Func Offset: 0x34c
	// Line 2778, Address: 0x16bec0, Func Offset: 0x350
	// Line 2779, Address: 0x16bec4, Func Offset: 0x354
	// Line 2780, Address: 0x16bec8, Func Offset: 0x358
	// Line 2782, Address: 0x16bed0, Func Offset: 0x360
	// Line 2783, Address: 0x16bed4, Func Offset: 0x364
	// Line 2785, Address: 0x16bed8, Func Offset: 0x368
	// Line 2787, Address: 0x16bedc, Func Offset: 0x36c
	// Line 2788, Address: 0x16bee0, Func Offset: 0x370
	// Line 2789, Address: 0x16bee4, Func Offset: 0x374
	// Line 2791, Address: 0x16bee8, Func Offset: 0x378
	// Line 2792, Address: 0x16beec, Func Offset: 0x37c
	// Line 2793, Address: 0x16bef0, Func Offset: 0x380
	// Line 2794, Address: 0x16bef4, Func Offset: 0x384
	// Line 2795, Address: 0x16bef8, Func Offset: 0x388
	// Line 2796, Address: 0x16befc, Func Offset: 0x38c
	// Line 2797, Address: 0x16bf00, Func Offset: 0x390
	// Line 2798, Address: 0x16bf04, Func Offset: 0x394
	// Line 2799, Address: 0x16bf08, Func Offset: 0x398
	// Line 2802, Address: 0x16bf10, Func Offset: 0x3a0
	// Line 2803, Address: 0x16bf14, Func Offset: 0x3a4
	// Line 2804, Address: 0x16bf18, Func Offset: 0x3a8
	// Line 2805, Address: 0x16bf1c, Func Offset: 0x3ac
	// Line 2806, Address: 0x16bf20, Func Offset: 0x3b0
	// Line 2807, Address: 0x16bf24, Func Offset: 0x3b4
	// Line 2808, Address: 0x16bf28, Func Offset: 0x3b8
	// Line 2809, Address: 0x16bf2c, Func Offset: 0x3bc
	// Line 2810, Address: 0x16bf30, Func Offset: 0x3c0
	// Line 2811, Address: 0x16bf34, Func Offset: 0x3c4
	// Line 2812, Address: 0x16bf38, Func Offset: 0x3c8
	// Line 2813, Address: 0x16bf3c, Func Offset: 0x3cc
	// Line 2814, Address: 0x16bf40, Func Offset: 0x3d0
	// Line 2815, Address: 0x16bf44, Func Offset: 0x3d4
	// Line 2816, Address: 0x16bf48, Func Offset: 0x3d8
	// Line 2817, Address: 0x16bf4c, Func Offset: 0x3dc
	// Line 2818, Address: 0x16bf50, Func Offset: 0x3e0
	// Line 2819, Address: 0x16bf54, Func Offset: 0x3e4
	// Line 2822, Address: 0x16bf5c, Func Offset: 0x3ec
	// Line 2823, Address: 0x16bf60, Func Offset: 0x3f0
	// Line 2824, Address: 0x16bf64, Func Offset: 0x3f4
	// Line 2825, Address: 0x16bf68, Func Offset: 0x3f8
	// Line 2826, Address: 0x16bf6c, Func Offset: 0x3fc
	// Line 2827, Address: 0x16bf70, Func Offset: 0x400
	// Line 2828, Address: 0x16bf74, Func Offset: 0x404
	// Line 2829, Address: 0x16bf78, Func Offset: 0x408
	// Line 2830, Address: 0x16bf7c, Func Offset: 0x40c
	// Line 2831, Address: 0x16bf80, Func Offset: 0x410
	// Line 2832, Address: 0x16bf84, Func Offset: 0x414
	// Line 2833, Address: 0x16bf88, Func Offset: 0x418
	// Line 2834, Address: 0x16bf8c, Func Offset: 0x41c
	// Line 2835, Address: 0x16bf90, Func Offset: 0x420
	// Line 2836, Address: 0x16bf94, Func Offset: 0x424
	// Line 2837, Address: 0x16bf98, Func Offset: 0x428
	// Line 2838, Address: 0x16bf9c, Func Offset: 0x42c
	// Line 2839, Address: 0x16bfa0, Func Offset: 0x430
	// Line 2840, Address: 0x16bfa4, Func Offset: 0x434
	// Line 2841, Address: 0x16bfa8, Func Offset: 0x438
	// Line 2842, Address: 0x16bfac, Func Offset: 0x43c
	// Line 2843, Address: 0x16bfb0, Func Offset: 0x440
	// Line 2844, Address: 0x16bfb4, Func Offset: 0x444
	// Line 2845, Address: 0x16bfb8, Func Offset: 0x448
	// Line 2846, Address: 0x16bfbc, Func Offset: 0x44c
	// Line 2847, Address: 0x16bfc0, Func Offset: 0x450
	// Line 2848, Address: 0x16bfc4, Func Offset: 0x454
	// Line 2849, Address: 0x16bfc8, Func Offset: 0x458
	// Line 2850, Address: 0x16bfcc, Func Offset: 0x45c
	// Line 2851, Address: 0x16bfd0, Func Offset: 0x460
	// Line 2852, Address: 0x16bfd4, Func Offset: 0x464
	// Line 2853, Address: 0x16bfd8, Func Offset: 0x468
	// Line 2854, Address: 0x16bfdc, Func Offset: 0x46c
	// Line 2855, Address: 0x16bfe0, Func Offset: 0x470
	// Line 2856, Address: 0x16bfe4, Func Offset: 0x474
	// Line 2857, Address: 0x16bfe8, Func Offset: 0x478
	// Line 2858, Address: 0x16bfec, Func Offset: 0x47c
	// Line 2859, Address: 0x16bff0, Func Offset: 0x480
	// Line 2860, Address: 0x16bff4, Func Offset: 0x484
	// Line 2861, Address: 0x16bff8, Func Offset: 0x488
	// Line 2863, Address: 0x16bffc, Func Offset: 0x48c
	// Line 2864, Address: 0x16c000, Func Offset: 0x490
	// Line 2865, Address: 0x16c004, Func Offset: 0x494
	// Line 2866, Address: 0x16c008, Func Offset: 0x498
	// Line 2867, Address: 0x16c00c, Func Offset: 0x49c
	// Line 2868, Address: 0x16c010, Func Offset: 0x4a0
	// Line 2869, Address: 0x16c014, Func Offset: 0x4a4
	// Line 2870, Address: 0x16c018, Func Offset: 0x4a8
	// Line 2871, Address: 0x16c01c, Func Offset: 0x4ac
	// Line 2872, Address: 0x16c020, Func Offset: 0x4b0
	// Line 2873, Address: 0x16c024, Func Offset: 0x4b4
	// Line 2874, Address: 0x16c028, Func Offset: 0x4b8
	// Line 2875, Address: 0x16c02c, Func Offset: 0x4bc
	// Line 2876, Address: 0x16c030, Func Offset: 0x4c0
	// Line 2877, Address: 0x16c034, Func Offset: 0x4c4
	// Line 2878, Address: 0x16c038, Func Offset: 0x4c8
	// Line 2879, Address: 0x16c03c, Func Offset: 0x4cc
	// Line 2880, Address: 0x16c040, Func Offset: 0x4d0
	// Line 2881, Address: 0x16c044, Func Offset: 0x4d4
	// Line 2882, Address: 0x16c048, Func Offset: 0x4d8
	// Line 2883, Address: 0x16c04c, Func Offset: 0x4dc
	// Line 2886, Address: 0x16c054, Func Offset: 0x4e4
	// Line 2889, Address: 0x16c05c, Func Offset: 0x4ec
	// Line 2890, Address: 0x16c060, Func Offset: 0x4f0
	// Line 2891, Address: 0x16c064, Func Offset: 0x4f4
	// Line 2892, Address: 0x16c068, Func Offset: 0x4f8
	// Line 2893, Address: 0x16c06c, Func Offset: 0x4fc
	// Line 2894, Address: 0x16c070, Func Offset: 0x500
	// Line 2895, Address: 0x16c074, Func Offset: 0x504
	// Line 2896, Address: 0x16c078, Func Offset: 0x508
	// Line 2897, Address: 0x16c07c, Func Offset: 0x50c
	// Line 2898, Address: 0x16c080, Func Offset: 0x510
	// Line 2899, Address: 0x16c084, Func Offset: 0x514
	// Line 2900, Address: 0x16c088, Func Offset: 0x518
	// Line 2901, Address: 0x16c08c, Func Offset: 0x51c
	// Line 2902, Address: 0x16c090, Func Offset: 0x520
	// Line 2903, Address: 0x16c094, Func Offset: 0x524
	// Line 2904, Address: 0x16c098, Func Offset: 0x528
	// Line 2905, Address: 0x16c09c, Func Offset: 0x52c
	// Line 2907, Address: 0x16c0a0, Func Offset: 0x530
	// Line 2908, Address: 0x16c0a4, Func Offset: 0x534
	// Line 2910, Address: 0x16c0ac, Func Offset: 0x53c
	// Line 2911, Address: 0x16c0b0, Func Offset: 0x540
	// Line 2912, Address: 0x16c0b4, Func Offset: 0x544
	// Line 2913, Address: 0x16c0b8, Func Offset: 0x548
	// Line 2915, Address: 0x16c0bc, Func Offset: 0x54c
	// Line 2916, Address: 0x16c0c0, Func Offset: 0x550
	// Line 2917, Address: 0x16c0c4, Func Offset: 0x554
	// Line 2918, Address: 0x16c0c8, Func Offset: 0x558
	// Line 2919, Address: 0x16c0cc, Func Offset: 0x55c
	// Line 2920, Address: 0x16c0d0, Func Offset: 0x560
	// Line 2921, Address: 0x16c0d4, Func Offset: 0x564
	// Line 2922, Address: 0x16c0d8, Func Offset: 0x568
	// Line 2923, Address: 0x16c0dc, Func Offset: 0x56c
	// Line 2924, Address: 0x16c0e0, Func Offset: 0x570
	// Line 2925, Address: 0x16c0e8, Func Offset: 0x578
	// Line 2926, Address: 0x16c0ec, Func Offset: 0x57c
	// Line 2927, Address: 0x16c0f0, Func Offset: 0x580
	// Line 2928, Address: 0x16c0f4, Func Offset: 0x584
	// Line 2929, Address: 0x16c0f8, Func Offset: 0x588
	// Line 2930, Address: 0x16c0fc, Func Offset: 0x58c
	// Line 2934, Address: 0x16c104, Func Offset: 0x594
	// Line 2935, Address: 0x16c108, Func Offset: 0x598
	// Line 2936, Address: 0x16c10c, Func Offset: 0x59c
	// Line 2937, Address: 0x16c110, Func Offset: 0x5a0
	// Line 2938, Address: 0x16c114, Func Offset: 0x5a4
	// Line 2939, Address: 0x16c118, Func Offset: 0x5a8
	// Line 2940, Address: 0x16c11c, Func Offset: 0x5ac
	// Line 2941, Address: 0x16c120, Func Offset: 0x5b0
	// Line 2943, Address: 0x16c128, Func Offset: 0x5b8
	// Line 2946, Address: 0x16c12c, Func Offset: 0x5bc
	// Line 2947, Address: 0x16c130, Func Offset: 0x5c0
	// Line 2949, Address: 0x16c138, Func Offset: 0x5c8
	// Line 2950, Address: 0x16c13c, Func Offset: 0x5cc
	// Line 2951, Address: 0x16c140, Func Offset: 0x5d0
	// Line 2953, Address: 0x16c148, Func Offset: 0x5d8
	// Line 2954, Address: 0x16c14c, Func Offset: 0x5dc
	// Line 2960, Address: 0x16c150, Func Offset: 0x5e0
	// Line 2961, Address: 0x16c170, Func Offset: 0x600
	// Line 2962, Address: 0x16c178, Func Offset: 0x608
	// Line 2967, Address: 0x16c190, Func Offset: 0x620
	// Func End, Address: 0x16c1c0, Func Offset: 0x650
}

// 
// Start address: 0x16c1c0
void fog_view_screen_fog()
{
	int a;
	float tdy2;
	float tdx2;
	float tdy1;
	float tdx1;
	float tdy0;
	float tdx0;
	void* IMatrix;
	float* DVector;
	float* FVector;
	// Line 2972, Address: 0x16c1c0, Func Offset: 0
	// Line 2973, Address: 0x16c1c8, Func Offset: 0x8
	// Line 2974, Address: 0x16c1d0, Func Offset: 0x10
	// Line 2979, Address: 0x16c1d4, Func Offset: 0x14
	// Line 2980, Address: 0x16c1f4, Func Offset: 0x34
	// Line 2981, Address: 0x16c220, Func Offset: 0x60
	// Line 2982, Address: 0x16c254, Func Offset: 0x94
	// Line 2983, Address: 0x16c264, Func Offset: 0xa4
	// Line 2984, Address: 0x16c290, Func Offset: 0xd0
	// Line 2985, Address: 0x16c2ac, Func Offset: 0xec
	// Line 2986, Address: 0x16c2c0, Func Offset: 0x100
	// Line 2987, Address: 0x16c2f0, Func Offset: 0x130
	// Line 2988, Address: 0x16c320, Func Offset: 0x160
	// Line 2989, Address: 0x16c328, Func Offset: 0x168
	// Line 2990, Address: 0x16c330, Func Offset: 0x170
	// Line 2991, Address: 0x16c340, Func Offset: 0x180
	// Line 2992, Address: 0x16c344, Func Offset: 0x184
	// Line 2993, Address: 0x16c348, Func Offset: 0x188
	// Line 2994, Address: 0x16c34c, Func Offset: 0x18c
	// Line 2995, Address: 0x16c368, Func Offset: 0x1a8
	// Line 2996, Address: 0x16c374, Func Offset: 0x1b4
	// Line 2998, Address: 0x16c3ac, Func Offset: 0x1ec
	// Line 2999, Address: 0x16c3c4, Func Offset: 0x204
	// Line 3000, Address: 0x16c3dc, Func Offset: 0x21c
	// Line 3001, Address: 0x16c3f4, Func Offset: 0x234
	// Func End, Address: 0x16c404, Func Offset: 0x244
}

// 
// Start address: 0x16c410
void fogSetColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	// Line 3427, Address: 0x16c410, Func Offset: 0
	// Line 3429, Address: 0x16c440, Func Offset: 0x30
	// Func End, Address: 0x16c448, Func Offset: 0x38
}

// 
// Start address: 0x16c450
void fogSetPartNum(int PartNum)
{
	int i;
	// Line 3448, Address: 0x16c450, Func Offset: 0
	// Line 3449, Address: 0x16c464, Func Offset: 0x14
	// Line 3450, Address: 0x16c46c, Func Offset: 0x1c
	// Line 3451, Address: 0x16c474, Func Offset: 0x24
	// Line 3453, Address: 0x16c47c, Func Offset: 0x2c
	// Line 3454, Address: 0x16c48c, Func Offset: 0x3c
	// Line 3456, Address: 0x16c4b0, Func Offset: 0x60
	// Line 3457, Address: 0x16c4b8, Func Offset: 0x68
	// Line 3458, Address: 0x16c4d8, Func Offset: 0x88
	// Line 3459, Address: 0x16c4ec, Func Offset: 0x9c
	// Line 3460, Address: 0x16c4f0, Func Offset: 0xa0
	// Line 3461, Address: 0x16c4f8, Func Offset: 0xa8
	// Line 3462, Address: 0x16c518, Func Offset: 0xc8
	// Func End, Address: 0x16c530, Func Offset: 0xe0
}

// 
// Start address: 0x16c530
void fogSetProjection(float Projection)
{
	// Line 3483, Address: 0x16c530, Func Offset: 0
	// Line 3484, Address: 0x16c538, Func Offset: 0x8
	// Line 3486, Address: 0x16c554, Func Offset: 0x24
	// Line 3487, Address: 0x16c55c, Func Offset: 0x2c
	// Func End, Address: 0x16c564, Func Offset: 0x34
}

// 
// Start address: 0x16c570
void fogSetFloorY(float FloorY)
{
	// Line 3494, Address: 0x16c570, Func Offset: 0
	// Line 3495, Address: 0x16c578, Func Offset: 0x8
	// Line 3496, Address: 0x16c580, Func Offset: 0x10
	// Func End, Address: 0x16c588, Func Offset: 0x18
}

// 
// Start address: 0x16c590
void fogSetWorldScreenM(void* WorldScreenM)
{
	// Line 3549, Address: 0x16c590, Func Offset: 0
	// Line 3550, Address: 0x16c5b8, Func Offset: 0x28
	// Func End, Address: 0x16c5c0, Func Offset: 0x30
}

// 
// Start address: 0x16c5c0
void fogSetWorldViewM(void* WorldViewM)
{
	// Line 3555, Address: 0x16c5c0, Func Offset: 0
	// Line 3556, Address: 0x16c5e4, Func Offset: 0x24
	// Func End, Address: 0x16c5ec, Func Offset: 0x2c
}

// 
// Start address: 0x16c5f0
void fogSetWorldPosV(void* WorldPosV)
{
	// Line 3563, Address: 0x16c5f0, Func Offset: 0
	// Line 3564, Address: 0x16c604, Func Offset: 0x14
	// Line 3566, Address: 0x16c614, Func Offset: 0x24
	// Func End, Address: 0x16c61c, Func Offset: 0x2c
}

// 
// Start address: 0x16c620
void fogSetStayPos(void* WorldPosV)
{
	// Line 3572, Address: 0x16c620, Func Offset: 0
	// Line 3573, Address: 0x16c634, Func Offset: 0x14
	// Line 3574, Address: 0x16c644, Func Offset: 0x24
	// Func End, Address: 0x16c64c, Func Offset: 0x2c
}

// 
// Start address: 0x16c650
void fogResetStayPos()
{
	// Line 3579, Address: 0x16c650, Func Offset: 0
	// Line 3580, Address: 0x16c664, Func Offset: 0x14
	// Func End, Address: 0x16c66c, Func Offset: 0x1c
}

// 
// Start address: 0x16c670
void fogSetStayPoint(void* StayPoint)
{
	// Line 3586, Address: 0x16c670, Func Offset: 0
	// Line 3587, Address: 0x16c684, Func Offset: 0x14
	// Func End, Address: 0x16c68c, Func Offset: 0x1c
}

// 
// Start address: 0x16c690
void fogResetStayPoint()
{
	// Line 3592, Address: 0x16c690, Func Offset: 0
	// Line 3593, Address: 0x16c69c, Func Offset: 0xc
	// Func End, Address: 0x16c6a4, Func Offset: 0x14
}

// 
// Start address: 0x16c6b0
void fogSetCameraPosV(void* CameraPosV)
{
	// Line 3600, Address: 0x16c6b0, Func Offset: 0
	// Line 3601, Address: 0x16c6c0, Func Offset: 0x10
	// Func End, Address: 0x16c6c8, Func Offset: 0x18
}

// 
// Start address: 0x16c6d0
void fogSetLocalPosV()
{
	float mp;
	float dx;
	float d;
	float* TVector;
	float* FVector;
	// Line 3608, Address: 0x16c6d0, Func Offset: 0
	// Line 3609, Address: 0x16c6d8, Func Offset: 0x8
	// Line 3611, Address: 0x16c6dc, Func Offset: 0xc
	// Line 3612, Address: 0x16c6fc, Func Offset: 0x2c
	// Line 3613, Address: 0x16c718, Func Offset: 0x48
	// Line 3614, Address: 0x16c72c, Func Offset: 0x5c
	// Line 3615, Address: 0x16c73c, Func Offset: 0x6c
	// Line 3617, Address: 0x16c74c, Func Offset: 0x7c
	// Line 3618, Address: 0x16c768, Func Offset: 0x98
	// Line 3619, Address: 0x16c788, Func Offset: 0xb8
	// Line 3620, Address: 0x16c7a8, Func Offset: 0xd8
	// Line 3621, Address: 0x16c7b0, Func Offset: 0xe0
	// Line 3622, Address: 0x16c7c8, Func Offset: 0xf8
	// Line 3624, Address: 0x16c7e8, Func Offset: 0x118
	// Line 3625, Address: 0x16c7fc, Func Offset: 0x12c
	// Line 3626, Address: 0x16c804, Func Offset: 0x134
	// Line 3627, Address: 0x16c818, Func Offset: 0x148
	// Line 3628, Address: 0x16c82c, Func Offset: 0x15c
	// Line 3629, Address: 0x16c844, Func Offset: 0x174
	// Line 3630, Address: 0x16c858, Func Offset: 0x188
	// Line 3631, Address: 0x16c864, Func Offset: 0x194
	// Line 3633, Address: 0x16c870, Func Offset: 0x1a0
	// Func End, Address: 0x16c878, Func Offset: 0x1a8
}

// 
// Start address: 0x16c880
void fogSetSpeedLevel(float SpeedLevel)
{
	// Line 3715, Address: 0x16c880, Func Offset: 0
	// Line 3717, Address: 0x16c888, Func Offset: 0x8
	// Func End, Address: 0x16c890, Func Offset: 0x10
}

// 
// Start address: 0x16c890
unsigned long* fogTex0Adr()
{
	// Line 3722, Address: 0x16c890, Func Offset: 0
	// Line 3723, Address: 0x16c898, Func Offset: 0x8
	// Func End, Address: 0x16c8a0, Func Offset: 0x10
}

