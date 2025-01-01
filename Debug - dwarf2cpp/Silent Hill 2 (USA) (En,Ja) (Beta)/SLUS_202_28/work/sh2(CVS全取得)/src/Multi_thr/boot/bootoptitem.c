typedef struct BootOptItem;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;
typedef union Q_WORDDATA;

typedef int(*type_10)(char*);
typedef void(*type_11)(char*, int);

typedef unsigned char type_0[16];
typedef float type_1[4];
typedef int type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned short type_7[4];
typedef unsigned long type_8[2];
typedef char type_9[4];
typedef BootOptItem type_12[20];
typedef char type_13[256];
typedef char type_14[256];
typedef char type_15[256];
typedef char type_16[256];
typedef unsigned int type_17[4];
typedef unsigned short type_18[8];
typedef float type_19[4];

struct BootOptItem
{
	void* var;
	char key[4];
	int(*get)(char*);
	void(*put)(char*, int);
	char* help;
	int set;
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

BootOptItem BootOptItemList[20];
char optI_strbuf[256];
char optB_strbuf[256];
char optD_strbuf[256];
char optH_strbuf[256];
int execEnv_verbose_level;
int execEnv_cdvd_media_type;
sh2gfw_Env_ctl Env_ctl;
int execEnv_debug_flag;
int execEnv_auto_exit_time;
int execEnv_disp_height;
int execEnv_frame_rate;
int opt_h_dummy;

int getopt_h();
int getopt_str(char* arg);
int getopt_str2(char* arg, char* buf);
void putopt_str(char* arg, int var);
int getopt_I(char* arg);
int getopt_B(char* arg);
int getopt_D(char* arg);
int getopt_H(char* arg);
int getopt_v(char* arg);
void putopt_v(char* arg, int var);
int getopt_S(char* arg);
void putopt_S(char* arg, int var);
int getopt_int(char* arg, int var0);
void putopt_int(char* arg, int var);
int getopt_d(char* arg);
void putopt_d(char* arg, int var);
int getopt_X(char* arg);
void putopt_X(char* arg, int var);
int getopt_V(char* arg);
void putopt_V(char* arg, int var);
int getopt_F(char* arg);
void putopt_F(char* arg, int var);
int getopt_x(char* arg);
void putopt_x(char* arg, int var);

// 
// Start address: 0x1c0370
int getopt_h()
{
	char* help;
	BootOptItem* item;
	// Line 131, Address: 0x1c0370, Func Offset: 0
	// Line 133, Address: 0x1c037c, Func Offset: 0xc
	// Line 134, Address: 0x1c038c, Func Offset: 0x1c
	// Line 135, Address: 0x1c0390, Func Offset: 0x20
	// Line 136, Address: 0x1c03b0, Func Offset: 0x40
	// Line 137, Address: 0x1c03c4, Func Offset: 0x54
	// Line 138, Address: 0x1c03c8, Func Offset: 0x58
	// Func End, Address: 0x1c03dc, Func Offset: 0x6c
}

// 
// Start address: 0x1c03e0
int getopt_str(char* arg)
{
	// Line 142, Address: 0x1c03e0, Func Offset: 0
	// Line 143, Address: 0x1c03e4, Func Offset: 0x4
	// Func End, Address: 0x1c03ec, Func Offset: 0xc
}

// 
// Start address: 0x1c03f0
int getopt_str2(char* arg, char* buf)
{
	char* str;
	int len;
	// Line 146, Address: 0x1c03f0, Func Offset: 0
	// Line 147, Address: 0x1c0408, Func Offset: 0x18
	// Line 149, Address: 0x1c040c, Func Offset: 0x1c
	// Line 150, Address: 0x1c0424, Func Offset: 0x34
	// Line 151, Address: 0x1c0438, Func Offset: 0x48
	// Line 156, Address: 0x1c043c, Func Offset: 0x4c
	// Line 157, Address: 0x1c045c, Func Offset: 0x6c
	// Line 158, Address: 0x1c0464, Func Offset: 0x74
	// Line 160, Address: 0x1c0478, Func Offset: 0x88
	// Line 161, Address: 0x1c0480, Func Offset: 0x90
	// Line 163, Address: 0x1c0484, Func Offset: 0x94
	// Line 164, Address: 0x1c0488, Func Offset: 0x98
	// Func End, Address: 0x1c04a0, Func Offset: 0xb0
}

// 
// Start address: 0x1c04a0
void putopt_str(char* arg, int var)
{
	int len;
	// Line 167, Address: 0x1c04a0, Func Offset: 0
	// Line 169, Address: 0x1c04b0, Func Offset: 0x10
	// Line 170, Address: 0x1c04bc, Func Offset: 0x1c
	// Line 171, Address: 0x1c04c4, Func Offset: 0x24
	// Func End, Address: 0x1c04d8, Func Offset: 0x38
}

// 
// Start address: 0x1c04e0
int getopt_I(char* arg)
{
	// Line 178, Address: 0x1c04e0, Func Offset: 0
	// Line 179, Address: 0x1c04e8, Func Offset: 0x8
	// Line 180, Address: 0x1c04f8, Func Offset: 0x18
	// Func End, Address: 0x1c0508, Func Offset: 0x28
}

// 
// Start address: 0x1c0510
int getopt_B(char* arg)
{
	// Line 183, Address: 0x1c0510, Func Offset: 0
	// Line 184, Address: 0x1c0518, Func Offset: 0x8
	// Line 185, Address: 0x1c0528, Func Offset: 0x18
	// Func End, Address: 0x1c0538, Func Offset: 0x28
}

// 
// Start address: 0x1c0540
int getopt_D(char* arg)
{
	// Line 188, Address: 0x1c0540, Func Offset: 0
	// Line 189, Address: 0x1c0548, Func Offset: 0x8
	// Line 190, Address: 0x1c0558, Func Offset: 0x18
	// Func End, Address: 0x1c0568, Func Offset: 0x28
}

// 
// Start address: 0x1c0570
int getopt_H(char* arg)
{
	// Line 193, Address: 0x1c0570, Func Offset: 0
	// Line 194, Address: 0x1c0578, Func Offset: 0x8
	// Line 195, Address: 0x1c0588, Func Offset: 0x18
	// Func End, Address: 0x1c0598, Func Offset: 0x28
}

// 
// Start address: 0x1c05a0
int getopt_v(char* arg)
{
	int var;
	// Line 200, Address: 0x1c05a0, Func Offset: 0
	// Line 201, Address: 0x1c05a8, Func Offset: 0x8
	// Line 202, Address: 0x1c05b4, Func Offset: 0x14
	// Line 203, Address: 0x1c05c4, Func Offset: 0x24
	// Line 205, Address: 0x1c05cc, Func Offset: 0x2c
	// Func End, Address: 0x1c05d4, Func Offset: 0x34
}

// 
// Start address: 0x1c05e0
void putopt_v(char* arg, int var)
{
	// Line 209, Address: 0x1c05e0, Func Offset: 0
	// Line 210, Address: 0x1c05ec, Func Offset: 0xc
	// Line 211, Address: 0x1c05fc, Func Offset: 0x1c
	// Line 212, Address: 0x1c0604, Func Offset: 0x24
	// Line 213, Address: 0x1c0608, Func Offset: 0x28
	// Func End, Address: 0x1c0610, Func Offset: 0x30
}

// 
// Start address: 0x1c0610
int getopt_S(char* arg)
{
	int var;
	// Line 218, Address: 0x1c0610, Func Offset: 0
	// Line 219, Address: 0x1c0618, Func Offset: 0x8
	// Line 220, Address: 0x1c0624, Func Offset: 0x14
	// Line 221, Address: 0x1c0634, Func Offset: 0x24
	// Line 223, Address: 0x1c063c, Func Offset: 0x2c
	// Func End, Address: 0x1c0644, Func Offset: 0x34
}

// 
// Start address: 0x1c0650
void putopt_S(char* arg, int var)
{
	// Line 227, Address: 0x1c0650, Func Offset: 0
	// Line 228, Address: 0x1c065c, Func Offset: 0xc
	// Line 229, Address: 0x1c066c, Func Offset: 0x1c
	// Line 230, Address: 0x1c0674, Func Offset: 0x24
	// Line 231, Address: 0x1c0678, Func Offset: 0x28
	// Func End, Address: 0x1c0680, Func Offset: 0x30
}

// 
// Start address: 0x1c0680
int getopt_int(char* arg, int var0)
{
	int op;
	int var;
	// Line 234, Address: 0x1c0680, Func Offset: 0
	// Line 237, Address: 0x1c0694, Func Offset: 0x14
	// Line 239, Address: 0x1c0698, Func Offset: 0x18
	// Line 240, Address: 0x1c06b0, Func Offset: 0x30
	// Line 241, Address: 0x1c06b4, Func Offset: 0x34
	// Line 242, Address: 0x1c06bc, Func Offset: 0x3c
	// Line 245, Address: 0x1c06c0, Func Offset: 0x40
	// Line 247, Address: 0x1c06d4, Func Offset: 0x54
	// Line 249, Address: 0x1c077c, Func Offset: 0xfc
	// Line 251, Address: 0x1c0788, Func Offset: 0x108
	// Line 252, Address: 0x1c0798, Func Offset: 0x118
	// Line 253, Address: 0x1c07a4, Func Offset: 0x124
	// Line 254, Address: 0x1c07b4, Func Offset: 0x134
	// Line 255, Address: 0x1c07c4, Func Offset: 0x144
	// Line 256, Address: 0x1c07d4, Func Offset: 0x154
	// Line 257, Address: 0x1c07f0, Func Offset: 0x170
	// Line 258, Address: 0x1c080c, Func Offset: 0x18c
	// Line 259, Address: 0x1c081c, Func Offset: 0x19c
	// Line 260, Address: 0x1c082c, Func Offset: 0x1ac
	// Line 261, Address: 0x1c083c, Func Offset: 0x1bc
	// Line 262, Address: 0x1c084c, Func Offset: 0x1cc
	// Line 264, Address: 0x1c0854, Func Offset: 0x1d4
	// Line 265, Address: 0x1c0858, Func Offset: 0x1d8
	// Func End, Address: 0x1c0870, Func Offset: 0x1f0
}

// 
// Start address: 0x1c0870
void putopt_int(char* arg, int var)
{
	// Line 268, Address: 0x1c0870, Func Offset: 0
	// Line 269, Address: 0x1c087c, Func Offset: 0xc
	// Line 270, Address: 0x1c088c, Func Offset: 0x1c
	// Func End, Address: 0x1c089c, Func Offset: 0x2c
}

// 
// Start address: 0x1c08a0
int getopt_d(char* arg)
{
	int var;
	// Line 274, Address: 0x1c08a0, Func Offset: 0
	// Line 275, Address: 0x1c08a8, Func Offset: 0x8
	// Line 276, Address: 0x1c08b0, Func Offset: 0x10
	// Line 277, Address: 0x1c08b8, Func Offset: 0x18
	// Line 278, Address: 0x1c08c0, Func Offset: 0x20
	// Line 279, Address: 0x1c08cc, Func Offset: 0x2c
	// Line 282, Address: 0x1c08e4, Func Offset: 0x44
	// Func End, Address: 0x1c08f4, Func Offset: 0x54
}

// 
// Start address: 0x1c0900
void putopt_d(char* arg, int var)
{
	// Line 285, Address: 0x1c0900, Func Offset: 0
	// Line 286, Address: 0x1c0908, Func Offset: 0x8
	// Line 287, Address: 0x1c0910, Func Offset: 0x10
	// Func End, Address: 0x1c0920, Func Offset: 0x20
}

// 
// Start address: 0x1c0920
int getopt_X(char* arg)
{
	int var;
	// Line 290, Address: 0x1c0920, Func Offset: 0
	// Line 291, Address: 0x1c0928, Func Offset: 0x8
	// Line 292, Address: 0x1c0930, Func Offset: 0x10
	// Line 293, Address: 0x1c0938, Func Offset: 0x18
	// Func End, Address: 0x1c0948, Func Offset: 0x28
}

// 
// Start address: 0x1c0950
void putopt_X(char* arg, int var)
{
	// Line 296, Address: 0x1c0950, Func Offset: 0
	// Line 297, Address: 0x1c0958, Func Offset: 0x8
	// Line 298, Address: 0x1c0960, Func Offset: 0x10
	// Func End, Address: 0x1c0970, Func Offset: 0x20
}

// 
// Start address: 0x1c0970
int getopt_V(char* arg)
{
	int var;
	// Line 304, Address: 0x1c0970, Func Offset: 0
	// Line 305, Address: 0x1c0978, Func Offset: 0x8
	// Line 306, Address: 0x1c0980, Func Offset: 0x10
	// Line 307, Address: 0x1c0984, Func Offset: 0x14
	// Line 308, Address: 0x1c0990, Func Offset: 0x20
	// Line 309, Address: 0x1c099c, Func Offset: 0x2c
	// Line 310, Address: 0x1c09a4, Func Offset: 0x34
	// Line 311, Address: 0x1c09a8, Func Offset: 0x38
	// Line 312, Address: 0x1c09b4, Func Offset: 0x44
	// Line 315, Address: 0x1c09c0, Func Offset: 0x50
	// Func End, Address: 0x1c09c8, Func Offset: 0x58
}

// 
// Start address: 0x1c09d0
void putopt_V(char* arg, int var)
{
	// Line 324, Address: 0x1c09d0, Func Offset: 0
	// Line 325, Address: 0x1c09f4, Func Offset: 0x24
	// Line 326, Address: 0x1c09f8, Func Offset: 0x28
	// Func End, Address: 0x1c0a00, Func Offset: 0x30
}

// 
// Start address: 0x1c0a00
int getopt_F(char* arg)
{
	int mode;
	int var;
	// Line 332, Address: 0x1c0a00, Func Offset: 0
	// Line 333, Address: 0x1c0a08, Func Offset: 0x8
	// Line 334, Address: 0x1c0a20, Func Offset: 0x20
	// Line 343, Address: 0x1c0a2c, Func Offset: 0x2c
	// Func End, Address: 0x1c0a34, Func Offset: 0x34
}

// 
// Start address: 0x1c0a40
void putopt_F(char* arg, int var)
{
	int i;
	int mode;
	// Line 349, Address: 0x1c0a40, Func Offset: 0
	// Line 350, Address: 0x1c0a44, Func Offset: 0x4
	// Line 351, Address: 0x1c0a5c, Func Offset: 0x1c
	// Line 352, Address: 0x1c0a68, Func Offset: 0x28
	// Line 359, Address: 0x1c0a70, Func Offset: 0x30
	// Line 360, Address: 0x1c0a74, Func Offset: 0x34
	// Func End, Address: 0x1c0a7c, Func Offset: 0x3c
}

// 
// Start address: 0x1c0a80
int getopt_x(char* arg)
{
	int mode;
	int var;
	// Line 366, Address: 0x1c0a80, Func Offset: 0
	// Line 367, Address: 0x1c0a88, Func Offset: 0x8
	// Line 368, Address: 0x1c0aa0, Func Offset: 0x20
	// Line 377, Address: 0x1c0aac, Func Offset: 0x2c
	// Func End, Address: 0x1c0ab4, Func Offset: 0x34
}

// 
// Start address: 0x1c0ac0
void putopt_x(char* arg, int var)
{
	int i;
	int mode;
	// Line 383, Address: 0x1c0ac0, Func Offset: 0
	// Line 384, Address: 0x1c0ac4, Func Offset: 0x4
	// Line 385, Address: 0x1c0adc, Func Offset: 0x1c
	// Line 386, Address: 0x1c0ae8, Func Offset: 0x28
	// Line 393, Address: 0x1c0af0, Func Offset: 0x30
	// Line 394, Address: 0x1c0af4, Func Offset: 0x34
	// Func End, Address: 0x1c0afc, Func Offset: 0x3c
}

