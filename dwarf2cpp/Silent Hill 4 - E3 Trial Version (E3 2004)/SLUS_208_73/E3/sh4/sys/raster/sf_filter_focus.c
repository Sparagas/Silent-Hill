typedef struct FocusWork;
typedef enum sfFilterFocusType : unsigned char;
typedef struct FocusParam;


typedef float type_0[4];
typedef float type_1[4][4];
typedef int type_2[2];
typedef int type_3[3];
typedef float type_4[2];
typedef float type_5[3];
typedef float type_6[4];

struct FocusWork
{
	int zbuf_far[2];
	int zbuf[3];
	float view_depth_far[2];
	float view_depth[3];
	int level;
	float range;
	float intensity;
	sfFilterFocusType type;
};

enum sfFilterFocusType : unsigned char
{
	GRADATE_NONE,
	GRADATE_NEAR,
	GRADATE_FAR,
	GRADATE_BOTH
};

struct FocusParam
{
	unsigned int src_fba;
	unsigned int src_zba;
	int src_w;
	int src_h;
	unsigned int dst_fba;
	unsigned int dst_fba_end;
	int dst_w;
	int dst_h;
};

float sg_vector_unit_z[4];
FocusWork focus_work;
unsigned long* sg_packet_cur;

int Exponent(unsigned int x);
void FocusZBufFromView(FocusWork* work);
int MakePacket_ZBUF(unsigned long* pk, FocusParam* param);
void sfFilterFocusExec(FocusParam* param);
void sfFilterFocusMakeParam(FocusParam* p);
void sfFilterFocusSetType(sfFilterFocusType type);
void sfFilterFocusSetLevel(unsigned int level);
void sfFilterFocusSetFocusRange(float r);
void sfFilterFocusSetDepth(float d);
void sfFilterFocusSetIntensity(float intensity);
unsigned long sfFilterFocus();

// 
// Start address: 0x24b3b0
int Exponent(unsigned int x)
{
	int result;
	unsigned int tmp;
	// Line 76, Address: 0x24b3b0, Func Offset: 0
	// Line 74, Address: 0x24b3b4, Func Offset: 0x4
	// Line 76, Address: 0x24b3b8, Func Offset: 0x8
	// Line 78, Address: 0x24b3c0, Func Offset: 0x10
	// Line 79, Address: 0x24b3c4, Func Offset: 0x14
	// Line 77, Address: 0x24b3c8, Func Offset: 0x18
	// Line 79, Address: 0x24b3cc, Func Offset: 0x1c
	// Line 81, Address: 0x24b3e0, Func Offset: 0x30
	// Func End, Address: 0x24b3e8, Func Offset: 0x38
}

// 
// Start address: 0x24b3f0
void FocusZBufFromView(FocusWork* work)
{
	int z_min;
	int z_max;
	int i;
	float vsm[4][4];
	float v[4];
	int zi;
	// Line 90, Address: 0x24b3f0, Func Offset: 0
	// Line 91, Address: 0x24b404, Func Offset: 0x14
	// Line 92, Address: 0x24b40c, Func Offset: 0x1c
	// Line 95, Address: 0x24b418, Func Offset: 0x28
	// Line 97, Address: 0x24b420, Func Offset: 0x30
	// Line 100, Address: 0x24b438, Func Offset: 0x48
	// Line 101, Address: 0x24b460, Func Offset: 0x70
	// Line 102, Address: 0x24b494, Func Offset: 0xa4
	// Line 103, Address: 0x24b498, Func Offset: 0xa8
	// Line 104, Address: 0x24b4a0, Func Offset: 0xb0
	// Line 105, Address: 0x24b4a8, Func Offset: 0xb8
	// Line 107, Address: 0x24b4b0, Func Offset: 0xc0
	// Line 105, Address: 0x24b4b4, Func Offset: 0xc4
	// Line 107, Address: 0x24b4b8, Func Offset: 0xc8
	// Line 105, Address: 0x24b4bc, Func Offset: 0xcc
	// Line 107, Address: 0x24b4cc, Func Offset: 0xdc
	// Line 108, Address: 0x24b4f4, Func Offset: 0x104
	// Line 109, Address: 0x24b518, Func Offset: 0x128
	// Line 108, Address: 0x24b51c, Func Offset: 0x12c
	// Line 109, Address: 0x24b520, Func Offset: 0x130
	// Line 110, Address: 0x24b52c, Func Offset: 0x13c
	// Func End, Address: 0x24b544, Func Offset: 0x154
}

// 
// Start address: 0x24b550
int MakePacket_ZBUF(unsigned long* pk, FocusParam* param)
{
	int sfba;
	int szba;
	int sw;
	int sh;
	int stw;
	int sth;
	int sx0;
	int sy0;
	int sy1;
	int sv1;
	int dfba;
	int dzba;
	int dw;
	int dh;
	int dx0;
	int dy0;
	int dy1;
	int level_min;
	int level_max;
	int i;
	FocusWork* work;
	int z_max;
	float intensity;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 230, Address: 0x24b550, Func Offset: 0
	// Line 231, Address: 0x24b588, Func Offset: 0x38
	// Line 232, Address: 0x24b590, Func Offset: 0x40
	// Line 233, Address: 0x24b594, Func Offset: 0x44
	// Line 234, Address: 0x24b59c, Func Offset: 0x4c
	// Line 235, Address: 0x24b5a0, Func Offset: 0x50
	// Line 236, Address: 0x24b5ac, Func Offset: 0x5c
	// Line 237, Address: 0x24b5bc, Func Offset: 0x6c
	// Line 240, Address: 0x24b5f8, Func Offset: 0xa8
	// Line 239, Address: 0x24b5fc, Func Offset: 0xac
	// Line 240, Address: 0x24b600, Func Offset: 0xb0
	// Line 239, Address: 0x24b604, Func Offset: 0xb4
	// Line 240, Address: 0x24b608, Func Offset: 0xb8
	// Line 239, Address: 0x24b60c, Func Offset: 0xbc
	// Line 244, Address: 0x24b610, Func Offset: 0xc0
	// Line 245, Address: 0x24b61c, Func Offset: 0xcc
	// Line 246, Address: 0x24b620, Func Offset: 0xd0
	// Line 247, Address: 0x24b628, Func Offset: 0xd8
	// Line 248, Address: 0x24b630, Func Offset: 0xe0
	// Line 249, Address: 0x24b638, Func Offset: 0xe8
	// Line 252, Address: 0x24b678, Func Offset: 0x128
	// Line 251, Address: 0x24b67c, Func Offset: 0x12c
	// Line 252, Address: 0x24b680, Func Offset: 0x130
	// Line 256, Address: 0x24b684, Func Offset: 0x134
	// Line 251, Address: 0x24b688, Func Offset: 0x138
	// Line 252, Address: 0x24b68c, Func Offset: 0x13c
	// Line 251, Address: 0x24b690, Func Offset: 0x140
	// Line 256, Address: 0x24b694, Func Offset: 0x144
	// Line 257, Address: 0x24b698, Func Offset: 0x148
	// Line 258, Address: 0x24b6a0, Func Offset: 0x150
	// Line 259, Address: 0x24b6a8, Func Offset: 0x158
	// Line 258, Address: 0x24b6ac, Func Offset: 0x15c
	// Line 259, Address: 0x24b6b0, Func Offset: 0x160
	// Line 263, Address: 0x24b6bc, Func Offset: 0x16c
	// Line 264, Address: 0x24b6d0, Func Offset: 0x180
	// Line 265, Address: 0x24b6d8, Func Offset: 0x188
	// Line 266, Address: 0x24b6e8, Func Offset: 0x198
	// Line 268, Address: 0x24b6f0, Func Offset: 0x1a0
	// Line 269, Address: 0x24b6f8, Func Offset: 0x1a8
	// Line 270, Address: 0x24b700, Func Offset: 0x1b0
	// Line 271, Address: 0x24b708, Func Offset: 0x1b8
	// Line 272, Address: 0x24b714, Func Offset: 0x1c4
	// Line 274, Address: 0x24b720, Func Offset: 0x1d0
	// Line 272, Address: 0x24b724, Func Offset: 0x1d4
	// Line 274, Address: 0x24b734, Func Offset: 0x1e4
	// Line 277, Address: 0x24b73c, Func Offset: 0x1ec
	// Line 278, Address: 0x24b7a4, Func Offset: 0x254
	// Line 277, Address: 0x24b7a8, Func Offset: 0x258
	// Line 278, Address: 0x24b7b8, Func Offset: 0x268
	// Line 279, Address: 0x24b804, Func Offset: 0x2b4
	// Line 280, Address: 0x24b808, Func Offset: 0x2b8
	// Line 279, Address: 0x24b810, Func Offset: 0x2c0
	// Line 280, Address: 0x24b824, Func Offset: 0x2d4
	// Line 279, Address: 0x24b828, Func Offset: 0x2d8
	// Line 281, Address: 0x24b82c, Func Offset: 0x2dc
	// Line 282, Address: 0x24b830, Func Offset: 0x2e0
	// Line 280, Address: 0x24b834, Func Offset: 0x2e4
	// Line 279, Address: 0x24b83c, Func Offset: 0x2ec
	// Line 280, Address: 0x24b840, Func Offset: 0x2f0
	// Line 281, Address: 0x24b860, Func Offset: 0x310
	// Line 283, Address: 0x24b864, Func Offset: 0x314
	// Line 281, Address: 0x24b868, Func Offset: 0x318
	// Line 279, Address: 0x24b86c, Func Offset: 0x31c
	// Line 280, Address: 0x24b878, Func Offset: 0x328
	// Line 279, Address: 0x24b87c, Func Offset: 0x32c
	// Line 288, Address: 0x24b880, Func Offset: 0x330
	// Line 280, Address: 0x24b884, Func Offset: 0x334
	// Line 288, Address: 0x24b888, Func Offset: 0x338
	// Line 280, Address: 0x24b88c, Func Offset: 0x33c
	// Line 281, Address: 0x24b89c, Func Offset: 0x34c
	// Line 280, Address: 0x24b8a0, Func Offset: 0x350
	// Line 281, Address: 0x24b8a4, Func Offset: 0x354
	// Line 282, Address: 0x24b8b8, Func Offset: 0x368
	// Line 281, Address: 0x24b8bc, Func Offset: 0x36c
	// Line 282, Address: 0x24b8c0, Func Offset: 0x370
	// Line 283, Address: 0x24b8d4, Func Offset: 0x384
	// Line 282, Address: 0x24b8d8, Func Offset: 0x388
	// Line 283, Address: 0x24b8dc, Func Offset: 0x38c
	// Line 288, Address: 0x24b8f0, Func Offset: 0x3a0
	// Line 292, Address: 0x24b918, Func Offset: 0x3c8
	// Line 288, Address: 0x24b9fc, Func Offset: 0x4ac
	// Line 290, Address: 0x24ba00, Func Offset: 0x4b0
	// Line 291, Address: 0x24ba18, Func Offset: 0x4c8
	// Line 293, Address: 0x24ba28, Func Offset: 0x4d8
	// Line 292, Address: 0x24ba30, Func Offset: 0x4e0
	// Line 291, Address: 0x24ba3c, Func Offset: 0x4ec
	// Line 292, Address: 0x24ba4c, Func Offset: 0x4fc
	// Line 291, Address: 0x24ba50, Func Offset: 0x500
	// Line 292, Address: 0x24ba58, Func Offset: 0x508
	// Line 291, Address: 0x24ba8c, Func Offset: 0x53c
	// Line 292, Address: 0x24ba90, Func Offset: 0x540
	// Line 291, Address: 0x24ba9c, Func Offset: 0x54c
	// Line 292, Address: 0x24baa4, Func Offset: 0x554
	// Line 293, Address: 0x24bc9c, Func Offset: 0x74c
	// Line 299, Address: 0x24bca8, Func Offset: 0x758
	// Line 300, Address: 0x24bcec, Func Offset: 0x79c
	// Line 299, Address: 0x24bcf0, Func Offset: 0x7a0
	// Line 300, Address: 0x24bcfc, Func Offset: 0x7ac
	// Line 299, Address: 0x24bd04, Func Offset: 0x7b4
	// Line 300, Address: 0x24bd10, Func Offset: 0x7c0
	// Line 302, Address: 0x24bd34, Func Offset: 0x7e4
	// Line 300, Address: 0x24bd38, Func Offset: 0x7e8
	// Line 301, Address: 0x24bd44, Func Offset: 0x7f4
	// Line 302, Address: 0x24bd48, Func Offset: 0x7f8
	// Line 300, Address: 0x24bd70, Func Offset: 0x820
	// Line 301, Address: 0x24bd80, Func Offset: 0x830
	// Line 300, Address: 0x24bd84, Func Offset: 0x834
	// Line 301, Address: 0x24bd88, Func Offset: 0x838
	// Line 300, Address: 0x24bd90, Func Offset: 0x840
	// Line 301, Address: 0x24bd94, Func Offset: 0x844
	// Line 300, Address: 0x24bd98, Func Offset: 0x848
	// Line 301, Address: 0x24bd9c, Func Offset: 0x84c
	// Line 304, Address: 0x24bda0, Func Offset: 0x850
	// Line 301, Address: 0x24bda4, Func Offset: 0x854
	// Line 302, Address: 0x24bdb0, Func Offset: 0x860
	// Line 304, Address: 0x24bdb4, Func Offset: 0x864
	// Line 301, Address: 0x24bdb8, Func Offset: 0x868
	// Line 302, Address: 0x24bdc8, Func Offset: 0x878
	// Line 301, Address: 0x24bdcc, Func Offset: 0x87c
	// Line 302, Address: 0x24bdd0, Func Offset: 0x880
	// Line 304, Address: 0x24bde4, Func Offset: 0x894
	// Line 302, Address: 0x24bde8, Func Offset: 0x898
	// Line 304, Address: 0x24bdec, Func Offset: 0x89c
	// Line 305, Address: 0x24be38, Func Offset: 0x8e8
	// Line 304, Address: 0x24be3c, Func Offset: 0x8ec
	// Line 305, Address: 0x24be40, Func Offset: 0x8f0
	// Line 304, Address: 0x24be44, Func Offset: 0x8f4
	// Line 306, Address: 0x24be48, Func Offset: 0x8f8
	// Line 307, Address: 0x24be4c, Func Offset: 0x8fc
	// Line 315, Address: 0x24be50, Func Offset: 0x900
	// Line 304, Address: 0x24be58, Func Offset: 0x908
	// Line 305, Address: 0x24be74, Func Offset: 0x924
	// Line 304, Address: 0x24be98, Func Offset: 0x948
	// Line 311, Address: 0x24beb0, Func Offset: 0x960
	// Line 304, Address: 0x24beb4, Func Offset: 0x964
	// Line 307, Address: 0x24beb8, Func Offset: 0x968
	// Line 305, Address: 0x24bebc, Func Offset: 0x96c
	// Line 307, Address: 0x24bec0, Func Offset: 0x970
	// Line 312, Address: 0x24bec8, Func Offset: 0x978
	// Line 311, Address: 0x24becc, Func Offset: 0x97c
	// Line 312, Address: 0x24bed0, Func Offset: 0x980
	// Line 311, Address: 0x24bed4, Func Offset: 0x984
	// Line 312, Address: 0x24bed8, Func Offset: 0x988
	// Line 305, Address: 0x24bee4, Func Offset: 0x994
	// Line 313, Address: 0x24bef0, Func Offset: 0x9a0
	// Line 315, Address: 0x24bef4, Func Offset: 0x9a4
	// Line 306, Address: 0x24bef8, Func Offset: 0x9a8
	// Line 305, Address: 0x24befc, Func Offset: 0x9ac
	// Line 315, Address: 0x24bf00, Func Offset: 0x9b0
	// Line 305, Address: 0x24bf04, Func Offset: 0x9b4
	// Line 315, Address: 0x24bf08, Func Offset: 0x9b8
	// Line 306, Address: 0x24bf10, Func Offset: 0x9c0
	// Line 315, Address: 0x24bf14, Func Offset: 0x9c4
	// Line 306, Address: 0x24bf1c, Func Offset: 0x9cc
	// Line 315, Address: 0x24bf20, Func Offset: 0x9d0
	// Line 306, Address: 0x24bf24, Func Offset: 0x9d4
	// Line 307, Address: 0x24bf30, Func Offset: 0x9e0
	// Line 306, Address: 0x24bf38, Func Offset: 0x9e8
	// Line 315, Address: 0x24bf3c, Func Offset: 0x9ec
	// Line 306, Address: 0x24bf40, Func Offset: 0x9f0
	// Line 307, Address: 0x24bf48, Func Offset: 0x9f8
	// Line 311, Address: 0x24bf64, Func Offset: 0xa14
	// Line 307, Address: 0x24bf68, Func Offset: 0xa18
	// Line 311, Address: 0x24bf6c, Func Offset: 0xa1c
	// Line 312, Address: 0x24bf80, Func Offset: 0xa30
	// Line 311, Address: 0x24bf84, Func Offset: 0xa34
	// Line 312, Address: 0x24bf88, Func Offset: 0xa38
	// Line 313, Address: 0x24bf9c, Func Offset: 0xa4c
	// Line 312, Address: 0x24bfa0, Func Offset: 0xa50
	// Line 313, Address: 0x24bfa4, Func Offset: 0xa54
	// Line 315, Address: 0x24bfbc, Func Offset: 0xa6c
	// Line 332, Address: 0x24c080, Func Offset: 0xb30
	// Line 341, Address: 0x24c08c, Func Offset: 0xb3c
	// Line 339, Address: 0x24c090, Func Offset: 0xb40
	// Line 341, Address: 0x24c098, Func Offset: 0xb48
	// Line 339, Address: 0x24c0a4, Func Offset: 0xb54
	// Line 368, Address: 0x24c0a8, Func Offset: 0xb58
	// Line 339, Address: 0x24c0b4, Func Offset: 0xb64
	// Line 341, Address: 0x24c0b8, Func Offset: 0xb68
	// Line 368, Address: 0x24c0bc, Func Offset: 0xb6c
	// Line 339, Address: 0x24c0c4, Func Offset: 0xb74
	// Line 368, Address: 0x24c0cc, Func Offset: 0xb7c
	// Line 339, Address: 0x24c0d0, Func Offset: 0xb80
	// Line 341, Address: 0x24c0d8, Func Offset: 0xb88
	// Line 368, Address: 0x24c0dc, Func Offset: 0xb8c
	// Line 339, Address: 0x24c0e0, Func Offset: 0xb90
	// Line 341, Address: 0x24c0e4, Func Offset: 0xb94
	// Line 368, Address: 0x24c0e8, Func Offset: 0xb98
	// Line 341, Address: 0x24c0fc, Func Offset: 0xbac
	// Line 368, Address: 0x24c104, Func Offset: 0xbb4
	// Line 341, Address: 0x24c108, Func Offset: 0xbb8
	// Line 368, Address: 0x24c114, Func Offset: 0xbc4
	// Line 369, Address: 0x24c1e0, Func Offset: 0xc90
	// Line 370, Address: 0x24c1fc, Func Offset: 0xcac
	// Line 369, Address: 0x24c210, Func Offset: 0xcc0
	// Line 370, Address: 0x24c214, Func Offset: 0xcc4
	// Line 369, Address: 0x24c224, Func Offset: 0xcd4
	// Line 370, Address: 0x24c238, Func Offset: 0xce8
	// Line 376, Address: 0x24c308, Func Offset: 0xdb8
	// Line 385, Address: 0x24c314, Func Offset: 0xdc4
	// Line 383, Address: 0x24c318, Func Offset: 0xdc8
	// Line 385, Address: 0x24c320, Func Offset: 0xdd0
	// Line 383, Address: 0x24c32c, Func Offset: 0xddc
	// Line 391, Address: 0x24c330, Func Offset: 0xde0
	// Line 383, Address: 0x24c334, Func Offset: 0xde4
	// Line 385, Address: 0x24c338, Func Offset: 0xde8
	// Line 391, Address: 0x24c33c, Func Offset: 0xdec
	// Line 383, Address: 0x24c344, Func Offset: 0xdf4
	// Line 391, Address: 0x24c34c, Func Offset: 0xdfc
	// Line 383, Address: 0x24c350, Func Offset: 0xe00
	// Line 385, Address: 0x24c360, Func Offset: 0xe10
	// Line 391, Address: 0x24c368, Func Offset: 0xe18
	// Line 383, Address: 0x24c374, Func Offset: 0xe24
	// Line 391, Address: 0x24c378, Func Offset: 0xe28
	// Line 385, Address: 0x24c380, Func Offset: 0xe30
	// Line 391, Address: 0x24c384, Func Offset: 0xe34
	// Line 385, Address: 0x24c38c, Func Offset: 0xe3c
	// Line 391, Address: 0x24c3a8, Func Offset: 0xe58
	// Line 385, Address: 0x24c3ac, Func Offset: 0xe5c
	// Line 391, Address: 0x24c3b0, Func Offset: 0xe60
	// Line 392, Address: 0x24c4a0, Func Offset: 0xf50
	// Line 393, Address: 0x24c4bc, Func Offset: 0xf6c
	// Line 392, Address: 0x24c4cc, Func Offset: 0xf7c
	// Line 393, Address: 0x24c4d8, Func Offset: 0xf88
	// Line 392, Address: 0x24c4f8, Func Offset: 0xfa8
	// Line 393, Address: 0x24c500, Func Offset: 0xfb0
	// Line 410, Address: 0x24c600, Func Offset: 0x10b0
	// Line 419, Address: 0x24c608, Func Offset: 0x10b8
	// Line 417, Address: 0x24c60c, Func Offset: 0x10bc
	// Line 419, Address: 0x24c614, Func Offset: 0x10c4
	// Line 417, Address: 0x24c620, Func Offset: 0x10d0
	// Line 425, Address: 0x24c624, Func Offset: 0x10d4
	// Line 417, Address: 0x24c630, Func Offset: 0x10e0
	// Line 419, Address: 0x24c634, Func Offset: 0x10e4
	// Line 425, Address: 0x24c638, Func Offset: 0x10e8
	// Line 417, Address: 0x24c640, Func Offset: 0x10f0
	// Line 425, Address: 0x24c648, Func Offset: 0x10f8
	// Line 417, Address: 0x24c64c, Func Offset: 0x10fc
	// Line 419, Address: 0x24c654, Func Offset: 0x1104
	// Line 425, Address: 0x24c658, Func Offset: 0x1108
	// Line 417, Address: 0x24c65c, Func Offset: 0x110c
	// Line 419, Address: 0x24c660, Func Offset: 0x1110
	// Line 425, Address: 0x24c664, Func Offset: 0x1114
	// Line 419, Address: 0x24c678, Func Offset: 0x1128
	// Line 425, Address: 0x24c680, Func Offset: 0x1130
	// Line 419, Address: 0x24c684, Func Offset: 0x1134
	// Line 425, Address: 0x24c690, Func Offset: 0x1140
	// Line 426, Address: 0x24c758, Func Offset: 0x1208
	// Line 427, Address: 0x24c778, Func Offset: 0x1228
	// Line 426, Address: 0x24c77c, Func Offset: 0x122c
	// Line 427, Address: 0x24c780, Func Offset: 0x1230
	// Line 426, Address: 0x24c788, Func Offset: 0x1238
	// Line 427, Address: 0x24c794, Func Offset: 0x1244
	// Line 426, Address: 0x24c798, Func Offset: 0x1248
	// Line 427, Address: 0x24c79c, Func Offset: 0x124c
	// Line 426, Address: 0x24c7a0, Func Offset: 0x1250
	// Line 427, Address: 0x24c7a4, Func Offset: 0x1254
	// Line 432, Address: 0x24c878, Func Offset: 0x1328
	// Line 441, Address: 0x24c884, Func Offset: 0x1334
	// Line 439, Address: 0x24c888, Func Offset: 0x1338
	// Line 441, Address: 0x24c890, Func Offset: 0x1340
	// Line 439, Address: 0x24c89c, Func Offset: 0x134c
	// Line 447, Address: 0x24c8a0, Func Offset: 0x1350
	// Line 439, Address: 0x24c8a4, Func Offset: 0x1354
	// Line 441, Address: 0x24c8a8, Func Offset: 0x1358
	// Line 447, Address: 0x24c8ac, Func Offset: 0x135c
	// Line 439, Address: 0x24c8b4, Func Offset: 0x1364
	// Line 447, Address: 0x24c8bc, Func Offset: 0x136c
	// Line 439, Address: 0x24c8c0, Func Offset: 0x1370
	// Line 441, Address: 0x24c8d0, Func Offset: 0x1380
	// Line 447, Address: 0x24c8d4, Func Offset: 0x1384
	// Line 439, Address: 0x24c8dc, Func Offset: 0x138c
	// Line 447, Address: 0x24c8e0, Func Offset: 0x1390
	// Line 441, Address: 0x24c8ec, Func Offset: 0x139c
	// Line 447, Address: 0x24c8f4, Func Offset: 0x13a4
	// Line 441, Address: 0x24c8fc, Func Offset: 0x13ac
	// Line 447, Address: 0x24c918, Func Offset: 0x13c8
	// Line 441, Address: 0x24c91c, Func Offset: 0x13cc
	// Line 447, Address: 0x24c920, Func Offset: 0x13d0
	// Line 449, Address: 0x24ca10, Func Offset: 0x14c0
	// Line 448, Address: 0x24ca14, Func Offset: 0x14c4
	// Line 449, Address: 0x24ca20, Func Offset: 0x14d0
	// Line 448, Address: 0x24ca2c, Func Offset: 0x14dc
	// Line 449, Address: 0x24ca30, Func Offset: 0x14e0
	// Line 448, Address: 0x24ca34, Func Offset: 0x14e4
	// Line 449, Address: 0x24ca4c, Func Offset: 0x14fc
	// Line 448, Address: 0x24ca50, Func Offset: 0x1500
	// Line 449, Address: 0x24ca5c, Func Offset: 0x150c
	// Line 453, Address: 0x24cb70, Func Offset: 0x1620
	// Line 454, Address: 0x24cb90, Func Offset: 0x1640
	// Line 453, Address: 0x24cb94, Func Offset: 0x1644
	// Line 454, Address: 0x24cb98, Func Offset: 0x1648
	// Line 455, Address: 0x24cbb4, Func Offset: 0x1664
	// Line 456, Address: 0x24cbbc, Func Offset: 0x166c
	// Line 458, Address: 0x24cbc4, Func Offset: 0x1674
	// Line 459, Address: 0x24cbcc, Func Offset: 0x167c
	// Func End, Address: 0x24cc00, Func Offset: 0x16b0
}

// 
// Start address: 0x24cc00
void sfFilterFocusExec(FocusParam* param)
{
	unsigned long* pk;
	int size;
	// Line 466, Address: 0x24cc00, Func Offset: 0
	// Line 471, Address: 0x24cc14, Func Offset: 0x14
	// Line 472, Address: 0x24cc20, Func Offset: 0x20
	// Line 471, Address: 0x24cc24, Func Offset: 0x24
	// Line 472, Address: 0x24cc30, Func Offset: 0x30
	// Line 473, Address: 0x24cc38, Func Offset: 0x38
	// Line 474, Address: 0x24cc40, Func Offset: 0x40
	// Line 475, Address: 0x24cc4c, Func Offset: 0x4c
	// Line 476, Address: 0x24cc5c, Func Offset: 0x5c
	// Func End, Address: 0x24cc70, Func Offset: 0x70
}

// 
// Start address: 0x24cc70
void sfFilterFocusMakeParam(FocusParam* p)
{
	// Line 486, Address: 0x24cc70, Func Offset: 0
	// Line 487, Address: 0x24cc7c, Func Offset: 0xc
	// Line 488, Address: 0x24cc84, Func Offset: 0x14
	// Line 489, Address: 0x24cc8c, Func Offset: 0x1c
	// Line 490, Address: 0x24cc94, Func Offset: 0x24
	// Line 491, Address: 0x24cc9c, Func Offset: 0x2c
	// Line 492, Address: 0x24cca8, Func Offset: 0x38
	// Line 493, Address: 0x24ccb0, Func Offset: 0x40
	// Line 494, Address: 0x24ccb8, Func Offset: 0x48
	// Line 496, Address: 0x24ccd0, Func Offset: 0x60
	// Func End, Address: 0x24cce0, Func Offset: 0x70
}

// 
// Start address: 0x24cce0
void sfFilterFocusSetType(sfFilterFocusType type)
{
	// Line 507, Address: 0x24cce0, Func Offset: 0
	// Line 508, Address: 0x24cce4, Func Offset: 0x4
	// Func End, Address: 0x24ccec, Func Offset: 0xc
}

// 
// Start address: 0x24ccf0
void sfFilterFocusSetLevel(unsigned int level)
{
	FocusWork* work;
	// Line 521, Address: 0x24ccf0, Func Offset: 0
	// Line 523, Address: 0x24ccf4, Func Offset: 0x4
	// Line 525, Address: 0x24cd00, Func Offset: 0x10
	// Line 526, Address: 0x24cd04, Func Offset: 0x14
	// Line 528, Address: 0x24cd08, Func Offset: 0x18
	// Func End, Address: 0x24cd10, Func Offset: 0x20
}

// 
// Start address: 0x24cd10
void sfFilterFocusSetFocusRange(float r)
{
	// Line 538, Address: 0x24cd10, Func Offset: 0
	// Line 539, Address: 0x24cd14, Func Offset: 0x4
	// Func End, Address: 0x24cd1c, Func Offset: 0xc
}

// 
// Start address: 0x24cd20
void sfFilterFocusSetDepth(float d)
{
	FocusWork* work;
	float near_z;
	float far_z;
	float r;
	int i;
	float view_z;
	int dd;
	// Line 545, Address: 0x24cd20, Func Offset: 0
	// Line 546, Address: 0x24cd30, Func Offset: 0x10
	// Line 547, Address: 0x24cd3c, Func Offset: 0x1c
	// Line 548, Address: 0x24cd44, Func Offset: 0x24
	// Line 553, Address: 0x24cd4c, Func Offset: 0x2c
	// Line 554, Address: 0x24cd54, Func Offset: 0x34
	// Line 555, Address: 0x24cd68, Func Offset: 0x48
	// Line 559, Address: 0x24cd70, Func Offset: 0x50
	// Line 563, Address: 0x24cd78, Func Offset: 0x58
	// Line 559, Address: 0x24cd7c, Func Offset: 0x5c
	// Line 563, Address: 0x24cd80, Func Offset: 0x60
	// Line 564, Address: 0x24cd8c, Func Offset: 0x6c
	// Line 565, Address: 0x24cd98, Func Offset: 0x78
	// Line 566, Address: 0x24cda4, Func Offset: 0x84
	// Line 568, Address: 0x24cda8, Func Offset: 0x88
	// Line 572, Address: 0x24cdbc, Func Offset: 0x9c
	// Line 574, Address: 0x24cdcc, Func Offset: 0xac
	// Line 575, Address: 0x24cddc, Func Offset: 0xbc
	// Line 574, Address: 0x24cde0, Func Offset: 0xc0
	// Line 575, Address: 0x24cde4, Func Offset: 0xc4
	// Line 576, Address: 0x24cdf0, Func Offset: 0xd0
	// Line 577, Address: 0x24cdf8, Func Offset: 0xd8
	// Func End, Address: 0x24ce10, Func Offset: 0xf0
}

// 
// Start address: 0x24ce10
void sfFilterFocusSetIntensity(float intensity)
{
	// Line 583, Address: 0x24ce10, Func Offset: 0
	// Line 584, Address: 0x24ce14, Func Offset: 0x4
	// Func End, Address: 0x24ce1c, Func Offset: 0xc
}

// 
// Start address: 0x24ce20
unsigned long sfFilterFocus()
{
	FocusParam p;
	FocusWork* work;
	// Line 629, Address: 0x24ce20, Func Offset: 0
	// Line 631, Address: 0x24ce24, Func Offset: 0x4
	// Line 629, Address: 0x24ce28, Func Offset: 0x8
	// Line 633, Address: 0x24ce2c, Func Offset: 0xc
	// Line 629, Address: 0x24ce30, Func Offset: 0x10
	// Line 633, Address: 0x24ce34, Func Offset: 0x14
	// Line 634, Address: 0x24ce40, Func Offset: 0x20
	// Line 636, Address: 0x24ce48, Func Offset: 0x28
	// Line 637, Address: 0x24ce54, Func Offset: 0x34
	// Line 639, Address: 0x24ce60, Func Offset: 0x40
	// Line 640, Address: 0x24ce68, Func Offset: 0x48
	// Line 642, Address: 0x24ce70, Func Offset: 0x50
	// Line 643, Address: 0x24ce7c, Func Offset: 0x5c
	// Line 648, Address: 0x24ce84, Func Offset: 0x64
	// Line 649, Address: 0x24ce88, Func Offset: 0x68
	// Func End, Address: 0x24ce98, Func Offset: 0x78
}

