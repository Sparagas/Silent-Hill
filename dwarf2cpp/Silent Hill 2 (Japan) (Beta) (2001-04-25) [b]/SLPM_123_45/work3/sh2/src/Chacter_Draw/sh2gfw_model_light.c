typedef struct shShadingParams;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleFight;
typedef struct sh2gfw_Model_Header;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct Jms_LightCondition;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;


typedef float type_0[4];
typedef unsigned int type_1[2];
typedef unsigned char type_2[16];
typedef void* type_3[8];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef shAttackInfo type_8[46];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4][4];
typedef unsigned short type_12[4];
typedef unsigned char type_13[3];
typedef unsigned int type_14[4];
typedef unsigned short type_15[8];

struct shShadingParams
{
	float m3_rgbamax_vu0[4];
	float m3_rgbamax_vu1[4];
	float m3_global_ambient_vu0[4];
	float m3_global_ambient_vu1[4];
	float m3_camdir[4];
	float m3_mono_vector[4];
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_Model_Header
{
	unsigned char fmt_id;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	unsigned int pads[2];
	void* pTexMAN[8];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct Jms_LightCondition
{
	float gun_refrection;
	int pad1;
	int pad2;
	int pad3;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

shAttackInfo sh2_attack_list[46];
shShadingParams shLambertEnv;
Jms_LightCondition Jms_Light_Work;
sh2gfw_Env_ctl Env_ctl;
int Chr_ID_Buf;

void sh2gfw_Propagate_JmsGunLight();
void sh2gfw_Set_JmsGunLight();
float sh2gfw_Get_JmsGunLight();
float sh2gfw_Get_GunLight();
void sh2gfw_set_JmsLIGHT();
void sh2gfw_set_OtherLIGHT();
int sh2gfw_check_LightChr(int cid);
int sh2gfw_change_lights(void* pmh);
void sh2gfw_On_JmsSPOT();
void sh2gfw_Off_JmsSPOT();

// 
// Start address: 0x139640
void sh2gfw_Propagate_JmsGunLight()
{
	// Line 77, Address: 0x139640, Func Offset: 0
	// Line 78, Address: 0x139668, Func Offset: 0x28
	// Line 79, Address: 0x13968c, Func Offset: 0x4c
	// Line 80, Address: 0x139694, Func Offset: 0x54
	// Line 83, Address: 0x1396a0, Func Offset: 0x60
	// Func End, Address: 0x1396a8, Func Offset: 0x68
}

// 
// Start address: 0x1396b0
void sh2gfw_Set_JmsGunLight()
{
	// Line 87, Address: 0x1396b0, Func Offset: 0
	// Line 88, Address: 0x1396c0, Func Offset: 0x10
	// Func End, Address: 0x1396c8, Func Offset: 0x18
}

// 
// Start address: 0x1396d0
float sh2gfw_Get_JmsGunLight()
{
	// Line 92, Address: 0x1396d0, Func Offset: 0
	// Line 93, Address: 0x1396e8, Func Offset: 0x18
	// Func End, Address: 0x1396f0, Func Offset: 0x20
}

// 
// Start address: 0x1396f0
float sh2gfw_Get_GunLight()
{
	// Line 97, Address: 0x1396f0, Func Offset: 0
	// Line 98, Address: 0x1396f8, Func Offset: 0x8
	// Func End, Address: 0x139700, Func Offset: 0x10
}

// 
// Start address: 0x139700
void sh2gfw_set_JmsLIGHT()
{
	float decayparms[4];
	float spotcol[4];
	float spotdir[4];
	float spotpos[4];
	float svt[4];
	unsigned int l_mode;
	float coltmp[4];
	// Line 108, Address: 0x139700, Func Offset: 0
	// Line 110, Address: 0x13972c, Func Offset: 0x2c
	// Line 122, Address: 0x139744, Func Offset: 0x44
	// Line 124, Address: 0x13974c, Func Offset: 0x4c
	// Line 131, Address: 0x139770, Func Offset: 0x70
	// Line 132, Address: 0x139780, Func Offset: 0x80
	// Line 133, Address: 0x139790, Func Offset: 0x90
	// Line 134, Address: 0x1397a0, Func Offset: 0xa0
	// Line 135, Address: 0x1397b0, Func Offset: 0xb0
	// Line 137, Address: 0x1397c0, Func Offset: 0xc0
	// Line 145, Address: 0x1397cc, Func Offset: 0xcc
	// Line 149, Address: 0x1397ec, Func Offset: 0xec
	// Line 155, Address: 0x139808, Func Offset: 0x108
	// Line 159, Address: 0x139828, Func Offset: 0x128
	// Line 166, Address: 0x139844, Func Offset: 0x144
	// Line 174, Address: 0x139860, Func Offset: 0x160
	// Line 183, Address: 0x139868, Func Offset: 0x168
	// Line 187, Address: 0x139880, Func Offset: 0x180
	// Line 194, Address: 0x13989c, Func Offset: 0x19c
	// Line 196, Address: 0x1398b4, Func Offset: 0x1b4
	// Line 198, Address: 0x1398d0, Func Offset: 0x1d0
	// Line 199, Address: 0x1398e0, Func Offset: 0x1e0
	// Line 200, Address: 0x1398f0, Func Offset: 0x1f0
	// Line 207, Address: 0x139904, Func Offset: 0x204
	// Line 212, Address: 0x139924, Func Offset: 0x224
	// Line 220, Address: 0x139940, Func Offset: 0x240
	// Line 225, Address: 0x139960, Func Offset: 0x260
	// Line 234, Address: 0x13997c, Func Offset: 0x27c
	// Line 241, Address: 0x13999c, Func Offset: 0x29c
	// Line 243, Address: 0x1399a8, Func Offset: 0x2a8
	// Line 245, Address: 0x1399b0, Func Offset: 0x2b0
	// Func End, Address: 0x1399e4, Func Offset: 0x2e4
}

// 
// Start address: 0x1399f0
void sh2gfw_set_OtherLIGHT()
{
	float svt[4];
	float decayparms[4];
	float spotcol[4];
	float spotdir[4];
	float spotpos[4];
	unsigned int l_mode;
	float coltmp[4];
	// Line 247, Address: 0x1399f0, Func Offset: 0
	// Line 249, Address: 0x139a1c, Func Offset: 0x2c
	// Line 255, Address: 0x139a34, Func Offset: 0x44
	// Line 262, Address: 0x139a58, Func Offset: 0x68
	// Line 263, Address: 0x139a68, Func Offset: 0x78
	// Line 264, Address: 0x139a78, Func Offset: 0x88
	// Line 265, Address: 0x139a88, Func Offset: 0x98
	// Line 266, Address: 0x139a94, Func Offset: 0xa4
	// Line 271, Address: 0x139aa4, Func Offset: 0xb4
	// Line 276, Address: 0x139ac4, Func Offset: 0xd4
	// Line 283, Address: 0x139ae0, Func Offset: 0xf0
	// Line 287, Address: 0x139b00, Func Offset: 0x110
	// Line 296, Address: 0x139b1c, Func Offset: 0x12c
	// Line 304, Address: 0x139b38, Func Offset: 0x148
	// Line 309, Address: 0x139b40, Func Offset: 0x150
	// Line 311, Address: 0x139b4c, Func Offset: 0x15c
	// Line 318, Address: 0x139b64, Func Offset: 0x174
	// Line 319, Address: 0x139b7c, Func Offset: 0x18c
	// Line 320, Address: 0x139b8c, Func Offset: 0x19c
	// Line 321, Address: 0x139b9c, Func Offset: 0x1ac
	// Line 326, Address: 0x139bb0, Func Offset: 0x1c0
	// Line 331, Address: 0x139bd0, Func Offset: 0x1e0
	// Line 344, Address: 0x139bec, Func Offset: 0x1fc
	// Line 349, Address: 0x139c0c, Func Offset: 0x21c
	// Line 371, Address: 0x139c28, Func Offset: 0x238
	// Line 373, Address: 0x139c30, Func Offset: 0x240
	// Func End, Address: 0x139c64, Func Offset: 0x274
}

// 
// Start address: 0x139c70
int sh2gfw_check_LightChr(int cid)
{
	int id;
	// Line 381, Address: 0x139c70, Func Offset: 0
	// Line 385, Address: 0x139c7c, Func Offset: 0xc
	// Line 388, Address: 0x139ccc, Func Offset: 0x5c
	// Line 392, Address: 0x139d0c, Func Offset: 0x9c
	// Line 393, Address: 0x139d10, Func Offset: 0xa0
	// Line 396, Address: 0x139d18, Func Offset: 0xa8
	// Line 398, Address: 0x139d1c, Func Offset: 0xac
	// Line 401, Address: 0x139d24, Func Offset: 0xb4
	// Line 405, Address: 0x139d64, Func Offset: 0xf4
	// Line 406, Address: 0x139d68, Func Offset: 0xf8
	// Line 409, Address: 0x139d70, Func Offset: 0x100
	// Line 413, Address: 0x139d74, Func Offset: 0x104
	// Line 415, Address: 0x139d80, Func Offset: 0x110
	// Line 416, Address: 0x139d84, Func Offset: 0x114
	// Func End, Address: 0x139d94, Func Offset: 0x124
}

// 
// Start address: 0x139da0
int sh2gfw_change_lights(void* pmh)
{
	sh2gfw_Model_Header* pMH;
	int ih;
	// Line 420, Address: 0x139da0, Func Offset: 0
	// Line 425, Address: 0x139db4, Func Offset: 0x14
	// Line 426, Address: 0x139db8, Func Offset: 0x18
	// Line 429, Address: 0x139dc8, Func Offset: 0x28
	// Line 435, Address: 0x139dfc, Func Offset: 0x5c
	// Line 436, Address: 0x139e08, Func Offset: 0x68
	// Line 439, Address: 0x139e10, Func Offset: 0x70
	// Line 447, Address: 0x139e1c, Func Offset: 0x7c
	// Line 449, Address: 0x139e20, Func Offset: 0x80
	// Func End, Address: 0x139e38, Func Offset: 0x98
}

// 
// Start address: 0x139e40
void sh2gfw_On_JmsSPOT()
{
	// Line 456, Address: 0x139e40, Func Offset: 0
	// Line 459, Address: 0x139e48, Func Offset: 0x8
	// Line 460, Address: 0x139e5c, Func Offset: 0x1c
	// Line 461, Address: 0x139e70, Func Offset: 0x30
	// Line 463, Address: 0x139e84, Func Offset: 0x44
	// Line 465, Address: 0x139e94, Func Offset: 0x54
	// Line 466, Address: 0x139e9c, Func Offset: 0x5c
	// Line 467, Address: 0x139ea4, Func Offset: 0x64
	// Line 469, Address: 0x139eac, Func Offset: 0x6c
	// Line 470, Address: 0x139eb4, Func Offset: 0x74
	// Line 471, Address: 0x139ebc, Func Offset: 0x7c
	// Line 472, Address: 0x139ec4, Func Offset: 0x84
	// Line 474, Address: 0x139ed0, Func Offset: 0x90
	// Line 475, Address: 0x139ee0, Func Offset: 0xa0
	// Line 476, Address: 0x139ef4, Func Offset: 0xb4
	// Line 477, Address: 0x139f04, Func Offset: 0xc4
	// Line 479, Address: 0x139f14, Func Offset: 0xd4
	// Line 485, Address: 0x139f4c, Func Offset: 0x10c
	// Line 494, Address: 0x139f78, Func Offset: 0x138
	// Line 498, Address: 0x139f84, Func Offset: 0x144
	// Line 499, Address: 0x139f94, Func Offset: 0x154
	// Line 500, Address: 0x139fa4, Func Offset: 0x164
	// Line 501, Address: 0x139fb4, Func Offset: 0x174
	// Line 504, Address: 0x139fc8, Func Offset: 0x188
	// Line 505, Address: 0x139fdc, Func Offset: 0x19c
	// Line 506, Address: 0x139ff0, Func Offset: 0x1b0
	// Line 507, Address: 0x13a004, Func Offset: 0x1c4
	// Line 510, Address: 0x13a014, Func Offset: 0x1d4
	// Func End, Address: 0x13a024, Func Offset: 0x1e4
}

// 
// Start address: 0x13a030
void sh2gfw_Off_JmsSPOT()
{
	// Line 515, Address: 0x13a030, Func Offset: 0
	// Line 518, Address: 0x13a038, Func Offset: 0x8
	// Line 519, Address: 0x13a04c, Func Offset: 0x1c
	// Line 520, Address: 0x13a060, Func Offset: 0x30
	// Line 522, Address: 0x13a074, Func Offset: 0x44
	// Line 524, Address: 0x13a084, Func Offset: 0x54
	// Line 525, Address: 0x13a08c, Func Offset: 0x5c
	// Line 526, Address: 0x13a094, Func Offset: 0x64
	// Line 528, Address: 0x13a09c, Func Offset: 0x6c
	// Line 529, Address: 0x13a0a4, Func Offset: 0x74
	// Line 530, Address: 0x13a0ac, Func Offset: 0x7c
	// Line 531, Address: 0x13a0b4, Func Offset: 0x84
	// Line 533, Address: 0x13a0c0, Func Offset: 0x90
	// Line 534, Address: 0x13a0d0, Func Offset: 0xa0
	// Line 535, Address: 0x13a0e4, Func Offset: 0xb4
	// Line 536, Address: 0x13a0f4, Func Offset: 0xc4
	// Line 538, Address: 0x13a104, Func Offset: 0xd4
	// Line 544, Address: 0x13a13c, Func Offset: 0x10c
	// Line 553, Address: 0x13a168, Func Offset: 0x138
	// Line 555, Address: 0x13a174, Func Offset: 0x144
	// Line 556, Address: 0x13a188, Func Offset: 0x158
	// Line 557, Address: 0x13a19c, Func Offset: 0x16c
	// Line 558, Address: 0x13a1b0, Func Offset: 0x180
	// Line 562, Address: 0x13a1c4, Func Offset: 0x194
	// Line 563, Address: 0x13a1d8, Func Offset: 0x1a8
	// Line 564, Address: 0x13a1ec, Func Offset: 0x1bc
	// Line 565, Address: 0x13a200, Func Offset: 0x1d0
	// Line 568, Address: 0x13a210, Func Offset: 0x1e0
	// Func End, Address: 0x13a220, Func Offset: 0x1f0
}

