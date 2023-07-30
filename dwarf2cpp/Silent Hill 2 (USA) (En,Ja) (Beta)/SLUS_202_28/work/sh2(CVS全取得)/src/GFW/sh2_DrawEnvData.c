typedef struct SpotLightData;
typedef struct DrawEnvData;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct NowBlockNo;
typedef struct _anon0;
typedef struct sh2gfw_Env_ctl;
typedef struct PLD;
typedef struct _anon1;


typedef DrawEnvData type_0[2];
typedef DrawEnvData type_1[1];
typedef DrawEnvData type_2[5];
typedef DrawEnvData type_3[2];
typedef DrawEnvData type_4[18];
typedef DrawEnvData type_5[19];
typedef DrawEnvData type_6[12];
typedef float type_7[4];
typedef unsigned short type_8[4];
typedef int type_9[4];
typedef float type_10[4];
typedef float type_11[4];
typedef float type_12[4][4];
typedef DrawEnvData type_13[2];
typedef DrawEnvData type_14[1];
typedef DrawEnvData type_15[4];
typedef DrawEnvData type_16[3];
typedef unsigned int type_17[4];
typedef unsigned short type_18[8];
typedef DrawEnvData type_19[6];
typedef float type_20[4];
typedef unsigned char type_21[16];
typedef int type_22[4];
typedef DrawEnvData type_23[21];
typedef short type_24[8];
typedef char type_25[16];
typedef DrawEnvData type_26[1];
typedef unsigned long type_27[2];
typedef int type_28[4];
typedef int type_29[4];
typedef void* type_30[17];
typedef unsigned int type_31[255];
typedef unsigned int type_32[32];
typedef unsigned char type_33[4];
typedef char type_34[4];
typedef char type_35[4];
typedef char type_36[4];
typedef char type_37[4];
typedef char type_38[4];

struct SpotLightData
{
	float Col[4];
	float DecayParm[4];
	float Pos[4];
	float Dir[4];
};

struct DrawEnvData
{
	int map_id_name;
	char parallelLNum;
	char FakeSpotNum;
	char FakePointNum;
	char pointLNum;
	char spotLNum;
	char NightOrDay;
	short ShadowColor;
	short ShadowForceLightNo;
	short ShadowDarkNess;
	float pLight_Dir0[4];
	float pLight_Col0[4];
	float pLight_Dir1[4];
	float pLight_Col1[4];
	float pLight_Dir2[4];
	float pLight_Col2[4];
	float SpotCol0[4];
	float SpotDecayParm0[4];
	float SpotParm[4];
	float FogParm[4];
	float Ld_0[4];
	float Ld_1[4];
	float Ld_2[4];
	float Ld_3[4];
	float Ld_4[4];
	float Ld_5[4];
	float Ld_6[4];
	float Ld_7[4];
	float Ld_8[4];
	float Ld_9[4];
	float Ld_A[4];
	float Ld_B[4];
	float Ld_C[4];
	float Ld_D[4];
	float Ld_E[4];
	float MoveFogCol[4];
	float Ambient[4];
	float BaseAmbient[4];
	float BaseColor[4];
	float VertexAmbient[4];
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct NowBlockNo
{
	int Map_NowBlockNo[4];
};

struct _anon0
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
};

struct PLD
{
	float Dir[4];
	float Col[4];
};

struct _anon1
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

DrawEnvData CA_DrawEnvData[2];
DrawEnvData CB_DrawEnvData[2];
DrawEnvData CC_DrawEnvData[5];
DrawEnvData CD_DrawEnvData[1];
DrawEnvData OB_DrawEnvData[1];
DrawEnvData ER_DrawEnvData[4];
DrawEnvData BW_DrawEnvData[2];
DrawEnvData TH_DrawEnvData[3];
DrawEnvData AP_DrawEnvData[18];
DrawEnvData HP_DrawEnvData[6];
DrawEnvData PS_DrawEnvData[19];
DrawEnvData RR_DrawEnvData[21];
DrawEnvData RU_DrawEnvData[12];
DrawEnvData QP_DrawEnvData[1];
DrawEnvData* NowDrawEnvData;
NowBlockNo NowJmsMapId;
sh2gfw_Env_ctl Env_ctl;
_anon0 game_flag;
float connect_pos[4];
float clip_volume[4];
_anon1 cam0;

void* Get_NowDrawEnvData();
int Get_NowParallelNum();
int Get_NowFakePointNum();
int Get_NowFakeSpotNum();
int Check_NowSpotFakeOrJms();
int Get_NowRoomShadowDense();
int Get_NowRoomShadowColor();
void* Get_NowRoomShadowForceLight(int* ltype);
int Check_IgnoreJmsSpot_for_Shadow();
int* Get_NowMapId();
void Get_NowPallarelCol(float* pdir, int nn);
void Set_DrawEnvData(int mapid, int NightOrDay);
void SetupDrawEnvData();

// 
// Start address: 0x250e30
void* Get_NowDrawEnvData()
{
	// Line 54, Address: 0x250e30, Func Offset: 0
	// Line 55, Address: 0x250e38, Func Offset: 0x8
	// Func End, Address: 0x250e40, Func Offset: 0x10
}

// 
// Start address: 0x250e40
int Get_NowParallelNum()
{
	// Line 71, Address: 0x250e40, Func Offset: 0
	// Line 72, Address: 0x250e4c, Func Offset: 0xc
	// Func End, Address: 0x250e54, Func Offset: 0x14
}

// 
// Start address: 0x250e60
int Get_NowFakePointNum()
{
	// Line 76, Address: 0x250e60, Func Offset: 0
	// Line 77, Address: 0x250e6c, Func Offset: 0xc
	// Func End, Address: 0x250e74, Func Offset: 0x14
}

// 
// Start address: 0x250e80
int Get_NowFakeSpotNum()
{
	// Line 82, Address: 0x250e80, Func Offset: 0
	// Line 84, Address: 0x250e8c, Func Offset: 0xc
	// Func End, Address: 0x250e94, Func Offset: 0x14
}

// 
// Start address: 0x250ea0
int Check_NowSpotFakeOrJms()
{
	// Line 88, Address: 0x250ea0, Func Offset: 0
	// Line 89, Address: 0x250eac, Func Offset: 0xc
	// Func End, Address: 0x250eb4, Func Offset: 0x14
}

// 
// Start address: 0x250ec0
int Get_NowRoomShadowDense()
{
	// Line 97, Address: 0x250ec0, Func Offset: 0
	// Line 98, Address: 0x250ecc, Func Offset: 0xc
	// Func End, Address: 0x250ed4, Func Offset: 0x14
}

// 
// Start address: 0x250ee0
int Get_NowRoomShadowColor()
{
	// Line 102, Address: 0x250ee0, Func Offset: 0
	// Line 103, Address: 0x250ee8, Func Offset: 0x8
	// Line 105, Address: 0x250f1c, Func Offset: 0x3c
	// Line 108, Address: 0x250f30, Func Offset: 0x50
	// Func End, Address: 0x250f40, Func Offset: 0x60
}

// 
// Start address: 0x250f40
void* Get_NowRoomShadowForceLight(int* ltype)
{
	Q_WORDDATA* qwd;
	int num;
	int Type;
	// Line 137, Address: 0x250f40, Func Offset: 0
	// Line 140, Address: 0x250f54, Func Offset: 0x14
	// Line 143, Address: 0x250f58, Func Offset: 0x18
	// Line 144, Address: 0x250f70, Func Offset: 0x30
	// Line 148, Address: 0x250f7c, Func Offset: 0x3c
	// Line 150, Address: 0x250f88, Func Offset: 0x48
	// Line 151, Address: 0x250f8c, Func Offset: 0x4c
	// Line 152, Address: 0x250f94, Func Offset: 0x54
	// Line 155, Address: 0x250f98, Func Offset: 0x58
	// Line 156, Address: 0x250fa4, Func Offset: 0x64
	// Line 159, Address: 0x250fb0, Func Offset: 0x70
	// Func End, Address: 0x250fb8, Func Offset: 0x78
}

// 
// Start address: 0x250fc0
int Check_IgnoreJmsSpot_for_Shadow()
{
	int Type;
	// Line 169, Address: 0x250fc0, Func Offset: 0
	// Line 172, Address: 0x250fd4, Func Offset: 0x14
	// Line 175, Address: 0x250fdc, Func Offset: 0x1c
	// Func End, Address: 0x250fe4, Func Offset: 0x24
}

// 
// Start address: 0x250ff0
int* Get_NowMapId()
{
	// Line 179, Address: 0x250ff0, Func Offset: 0
	// Line 180, Address: 0x250ff8, Func Offset: 0x8
	// Func End, Address: 0x251000, Func Offset: 0x10
}

// 
// Start address: 0x251000
void Get_NowPallarelCol(float* pdir, int nn)
{
	DrawEnvData* ded;
	PLD* pl;
	// Line 185, Address: 0x251000, Func Offset: 0
	// Line 193, Address: 0x251018, Func Offset: 0x18
	// Line 194, Address: 0x251020, Func Offset: 0x20
	// Line 195, Address: 0x251024, Func Offset: 0x24
	// Line 196, Address: 0x25102c, Func Offset: 0x2c
	// Line 197, Address: 0x25103c, Func Offset: 0x3c
	// Func End, Address: 0x251054, Func Offset: 0x54
}

// 
// Start address: 0x251060
void Set_DrawEnvData(int mapid, int NightOrDay)
{
	void* stg_drawenv_data[17];
	DrawEnvData* ded;
	int i;
	int maptmp[4];
	int maparea;
	int mapblock;
	// Line 206, Address: 0x251060, Func Offset: 0
	// Line 212, Address: 0x25107c, Func Offset: 0x1c
	// Line 233, Address: 0x2510b0, Func Offset: 0x50
	// Line 235, Address: 0x2510d0, Func Offset: 0x70
	// Line 236, Address: 0x2510d4, Func Offset: 0x74
	// Line 238, Address: 0x2510e4, Func Offset: 0x84
	// Line 240, Address: 0x25111c, Func Offset: 0xbc
	// Line 257, Address: 0x251128, Func Offset: 0xc8
	// Line 260, Address: 0x251138, Func Offset: 0xd8
	// Line 261, Address: 0x251150, Func Offset: 0xf0
	// Line 262, Address: 0x25115c, Func Offset: 0xfc
	// Line 263, Address: 0x251180, Func Offset: 0x120
	// Line 264, Address: 0x251188, Func Offset: 0x128
	// Line 266, Address: 0x251194, Func Offset: 0x134
	// Line 269, Address: 0x2511b8, Func Offset: 0x158
	// Line 271, Address: 0x2511cc, Func Offset: 0x16c
	// Line 272, Address: 0x2511e4, Func Offset: 0x184
	// Line 273, Address: 0x2511f0, Func Offset: 0x190
	// Line 274, Address: 0x2511f8, Func Offset: 0x198
	// Line 276, Address: 0x251210, Func Offset: 0x1b0
	// Line 277, Address: 0x251214, Func Offset: 0x1b4
	// Line 278, Address: 0x251228, Func Offset: 0x1c8
	// Line 279, Address: 0x251230, Func Offset: 0x1d0
	// Line 282, Address: 0x25123c, Func Offset: 0x1dc
	// Line 283, Address: 0x251244, Func Offset: 0x1e4
	// Line 285, Address: 0x251258, Func Offset: 0x1f8
	// Line 286, Address: 0x25125c, Func Offset: 0x1fc
	// Line 292, Address: 0x251270, Func Offset: 0x210
	// Line 293, Address: 0x251278, Func Offset: 0x218
	// Line 294, Address: 0x251298, Func Offset: 0x238
	// Line 296, Address: 0x2512a4, Func Offset: 0x244
	// Line 299, Address: 0x2512ac, Func Offset: 0x24c
	// Line 303, Address: 0x2512b8, Func Offset: 0x258
	// Line 306, Address: 0x2512c8, Func Offset: 0x268
	// Line 312, Address: 0x2512e0, Func Offset: 0x280
	// Line 314, Address: 0x2512e8, Func Offset: 0x288
	// Line 318, Address: 0x2512f4, Func Offset: 0x294
	// Line 320, Address: 0x251300, Func Offset: 0x2a0
	// Line 321, Address: 0x251310, Func Offset: 0x2b0
	// Line 322, Address: 0x251320, Func Offset: 0x2c0
	// Line 323, Address: 0x251328, Func Offset: 0x2c8
	// Line 325, Address: 0x251338, Func Offset: 0x2d8
	// Line 326, Address: 0x251340, Func Offset: 0x2e0
	// Line 329, Address: 0x251350, Func Offset: 0x2f0
	// Func End, Address: 0x251370, Func Offset: 0x310
}

// 
// Start address: 0x251370
void SetupDrawEnvData()
{
	SpotLightData* sld;
	SpotLightData* sld;
	int itmp[4];
	float vtmp[4];
	void* ptemp;
	DrawEnvData* ded;
	int i;
	// Line 332, Address: 0x251370, Func Offset: 0
	// Line 340, Address: 0x251384, Func Offset: 0x14
	// Line 341, Address: 0x251390, Func Offset: 0x20
	// Line 345, Address: 0x2513bc, Func Offset: 0x4c
	// Line 349, Address: 0x2513d0, Func Offset: 0x60
	// Line 351, Address: 0x2513e8, Func Offset: 0x78
	// Line 358, Address: 0x2513fc, Func Offset: 0x8c
	// Line 362, Address: 0x251410, Func Offset: 0xa0
	// Line 366, Address: 0x251424, Func Offset: 0xb4
	// Line 370, Address: 0x251438, Func Offset: 0xc8
	// Line 372, Address: 0x251444, Func Offset: 0xd4
	// Line 375, Address: 0x251458, Func Offset: 0xe8
	// Line 378, Address: 0x25146c, Func Offset: 0xfc
	// Line 382, Address: 0x251480, Func Offset: 0x110
	// Line 384, Address: 0x251494, Func Offset: 0x124
	// Line 388, Address: 0x2514a8, Func Offset: 0x138
	// Line 390, Address: 0x2514bc, Func Offset: 0x14c
	// Line 391, Address: 0x2514d4, Func Offset: 0x164
	// Line 393, Address: 0x2514dc, Func Offset: 0x16c
	// Line 397, Address: 0x2514f0, Func Offset: 0x180
	// Line 399, Address: 0x251508, Func Offset: 0x198
	// Line 401, Address: 0x251520, Func Offset: 0x1b0
	// Line 402, Address: 0x251538, Func Offset: 0x1c8
	// Line 405, Address: 0x251544, Func Offset: 0x1d4
	// Line 406, Address: 0x25154c, Func Offset: 0x1dc
	// Line 407, Address: 0x25155c, Func Offset: 0x1ec
	// Line 408, Address: 0x251570, Func Offset: 0x200
	// Line 409, Address: 0x251578, Func Offset: 0x208
	// Line 410, Address: 0x25158c, Func Offset: 0x21c
	// Line 413, Address: 0x251598, Func Offset: 0x228
	// Line 414, Address: 0x2515a0, Func Offset: 0x230
	// Line 415, Address: 0x2515b0, Func Offset: 0x240
	// Line 419, Address: 0x2515c8, Func Offset: 0x258
	// Line 422, Address: 0x2515dc, Func Offset: 0x26c
	// Line 425, Address: 0x2515f0, Func Offset: 0x280
	// Line 428, Address: 0x251604, Func Offset: 0x294
	// Line 432, Address: 0x251618, Func Offset: 0x2a8
	// Line 435, Address: 0x251628, Func Offset: 0x2b8
	// Line 436, Address: 0x251644, Func Offset: 0x2d4
	// Line 437, Address: 0x251650, Func Offset: 0x2e0
	// Line 438, Address: 0x251660, Func Offset: 0x2f0
	// Line 439, Address: 0x25166c, Func Offset: 0x2fc
	// Line 440, Address: 0x251678, Func Offset: 0x308
	// Line 441, Address: 0x251680, Func Offset: 0x310
	// Line 442, Address: 0x251688, Func Offset: 0x318
	// Line 443, Address: 0x251694, Func Offset: 0x324
	// Line 444, Address: 0x2516a0, Func Offset: 0x330
	// Line 449, Address: 0x2516ac, Func Offset: 0x33c
	// Line 450, Address: 0x2516c8, Func Offset: 0x358
	// Line 451, Address: 0x2516d0, Func Offset: 0x360
	// Line 452, Address: 0x2516d8, Func Offset: 0x368
	// Line 453, Address: 0x2516e0, Func Offset: 0x370
	// Line 454, Address: 0x2516e8, Func Offset: 0x378
	// Line 455, Address: 0x2516f0, Func Offset: 0x380
	// Line 456, Address: 0x2516f8, Func Offset: 0x388
	// Line 457, Address: 0x251704, Func Offset: 0x394
	// Line 458, Address: 0x25170c, Func Offset: 0x39c
	// Line 459, Address: 0x25171c, Func Offset: 0x3ac
	// Line 460, Address: 0x25172c, Func Offset: 0x3bc
	// Line 461, Address: 0x251738, Func Offset: 0x3c8
	// Line 462, Address: 0x251744, Func Offset: 0x3d4
	// Line 463, Address: 0x251750, Func Offset: 0x3e0
	// Line 464, Address: 0x251758, Func Offset: 0x3e8
	// Line 465, Address: 0x251760, Func Offset: 0x3f0
	// Line 466, Address: 0x251768, Func Offset: 0x3f8
	// Line 469, Address: 0x251774, Func Offset: 0x404
	// Line 471, Address: 0x25177c, Func Offset: 0x40c
	// Line 473, Address: 0x251798, Func Offset: 0x428
	// Line 474, Address: 0x2517a8, Func Offset: 0x438
	// Line 475, Address: 0x2517b8, Func Offset: 0x448
	// Line 476, Address: 0x2517c4, Func Offset: 0x454
	// Line 477, Address: 0x2517d0, Func Offset: 0x460
	// Line 478, Address: 0x2517d8, Func Offset: 0x468
	// Line 479, Address: 0x2517e0, Func Offset: 0x470
	// Line 480, Address: 0x2517ec, Func Offset: 0x47c
	// Line 481, Address: 0x2517f8, Func Offset: 0x488
	// Line 484, Address: 0x251804, Func Offset: 0x494
	// Line 485, Address: 0x251820, Func Offset: 0x4b0
	// Line 486, Address: 0x25182c, Func Offset: 0x4bc
	// Line 487, Address: 0x251834, Func Offset: 0x4c4
	// Line 488, Address: 0x25183c, Func Offset: 0x4cc
	// Line 489, Address: 0x251844, Func Offset: 0x4d4
	// Line 490, Address: 0x25184c, Func Offset: 0x4dc
	// Line 491, Address: 0x251854, Func Offset: 0x4e4
	// Line 492, Address: 0x251860, Func Offset: 0x4f0
	// Line 493, Address: 0x251868, Func Offset: 0x4f8
	// Line 494, Address: 0x251878, Func Offset: 0x508
	// Line 495, Address: 0x251888, Func Offset: 0x518
	// Line 496, Address: 0x251894, Func Offset: 0x524
	// Line 497, Address: 0x2518a0, Func Offset: 0x530
	// Line 498, Address: 0x2518ac, Func Offset: 0x53c
	// Line 499, Address: 0x2518b4, Func Offset: 0x544
	// Line 500, Address: 0x2518bc, Func Offset: 0x54c
	// Line 501, Address: 0x2518c4, Func Offset: 0x554
	// Line 505, Address: 0x2518d0, Func Offset: 0x560
	// Line 506, Address: 0x2518ec, Func Offset: 0x57c
	// Line 507, Address: 0x2518f8, Func Offset: 0x588
	// Line 508, Address: 0x251900, Func Offset: 0x590
	// Line 516, Address: 0x251908, Func Offset: 0x598
	// Line 520, Address: 0x251910, Func Offset: 0x5a0
	// Line 525, Address: 0x251928, Func Offset: 0x5b8
	// Line 526, Address: 0x251944, Func Offset: 0x5d4
	// Line 527, Address: 0x25194c, Func Offset: 0x5dc
	// Line 530, Address: 0x251958, Func Offset: 0x5e8
	// Line 532, Address: 0x251974, Func Offset: 0x604
	// Line 533, Address: 0x25197c, Func Offset: 0x60c
	// Line 534, Address: 0x251984, Func Offset: 0x614
	// Line 537, Address: 0x2519a4, Func Offset: 0x634
	// Line 538, Address: 0x2519b4, Func Offset: 0x644
	// Line 540, Address: 0x2519bc, Func Offset: 0x64c
	// Line 545, Address: 0x2519cc, Func Offset: 0x65c
	// Line 546, Address: 0x2519f0, Func Offset: 0x680
	// Line 547, Address: 0x251a04, Func Offset: 0x694
	// Line 557, Address: 0x251a2c, Func Offset: 0x6bc
	// Line 559, Address: 0x251a34, Func Offset: 0x6c4
	// Line 566, Address: 0x251a5c, Func Offset: 0x6ec
	// Line 586, Address: 0x251a7c, Func Offset: 0x70c
	// Line 587, Address: 0x251a8c, Func Offset: 0x71c
	// Line 589, Address: 0x251a94, Func Offset: 0x724
	// Line 592, Address: 0x251aac, Func Offset: 0x73c
	// Line 599, Address: 0x251ac4, Func Offset: 0x754
	// Func End, Address: 0x251ae0, Func Offset: 0x770
}

