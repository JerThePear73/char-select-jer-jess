Lights1 j_cap_J__EMBLEM__lights = gdSPDefLights1(
	0x0, 0x3D, 0x0,
	0x0, 0x80, 0x0, 0x28, 0x28, 0x28);

Lights1 j_cap_Cap_Bottom__CAP__lights = gdSPDefLights1(
	0x0, 0x3D, 0x0,
	0x0, 0x80, 0x0, 0x28, 0x28, 0x28);

Lights1 j_cap_Hat__CAP__lights = gdSPDefLights1(
	0x0, 0x3D, 0x0,
	0x0, 0x80, 0x0, 0x28, 0x28, 0x28);

Lights1 j_cap_Logo__CAP__lights = gdSPDefLights1(
	0x0, 0x3D, 0x0,
	0x0, 0x80, 0x0, 0x28, 0x28, 0x28);

Lights1 j_cap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx j_cap_letter_rgba16_alpha_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_cap_letter_rgba16_alpha_rgba16[] = {
	#include "actors/j_cap/letter.rgba16_alpha.rgba16.inc.c"
};

Gfx j_cap_jer_shade_alpha_ia8_aligner[] = {gsSPEndDisplayList()};
u8 j_cap_jer_shade_alpha_ia8[] = {
	#include "actors/j_cap/jer_shade_alpha.ia8.inc.c"
};

Gfx j_cap_logo2_rgba16_alpha_ia8_aligner[] = {gsSPEndDisplayList()};
u8 j_cap_logo2_rgba16_alpha_ia8[] = {
	#include "actors/j_cap/logo2.rgba16_alpha.ia8.inc.c"
};

Gfx j_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/j_cap/Metal_Shade.rgba16.inc.c"
};

Gfx j_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/j_cap/Metal_Light.rgba16.inc.c"
};

Vtx j_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[6] = {
	{{ {-26, 103, 119}, 0, {231, 231}, {228, 232, 122, 255} }},
	{{ {-26, 52, 109}, 0, {231, 761}, {228, 232, 122, 255} }},
	{{ {0, 52, 115}, 0, {496, 761}, {0, 232, 125, 255} }},
	{{ {0, 103, 125}, 0, {496, 231}, {0, 232, 125, 255} }},
	{{ {26, 52, 109}, 0, {761, 761}, {28, 232, 122, 255} }},
	{{ {26, 103, 119}, 0, {761, 231}, {28, 232, 122, 255} }},
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(j_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx j_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[9] = {
	{{ {0, 20, -25}, 0, {240, 368}, {0, 131, 20, 255} }},
	{{ {95, 16, 112}, 0, {112, 240}, {70, 209, 95, 255} }},
	{{ {0, 14, 165}, 0, {112, 368}, {0, 227, 124, 255} }},
	{{ {120, 8, -13}, 0, {240, 240}, {84, 161, 2, 255} }},
	{{ {94, -6, -99}, 0, {368, 240}, {66, 153, 220, 255} }},
	{{ {0, -16, -121}, 0, {368, 368}, {0, 137, 211, 255} }},
	{{ {-94, -6, -99}, 0, {368, 240}, {190, 153, 220, 255} }},
	{{ {-120, 8, -13}, 0, {240, 240}, {172, 161, 2, 255} }},
	{{ {-95, 16, 112}, 0, {112, 240}, {186, 209, 95, 255} }},
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(j_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(0, 8, 7, 0, 0, 2, 8, 0),
	gsSPEndDisplayList(),
};

Vtx j_cap_Normal_Cap_DL_mesh_layer_1_vtx_2[36] = {
	{{ {95, 16, 112}, 0, {368, 1008}, {70, 209, 95, 255} }},
	{{ {108, 44, 78}, 0, {496, 1008}, {105, 2, 72, 255} }},
	{{ {0, 44, 113}, 0, {496, 880}, {0, 54, 115, 255} }},
	{{ {0, 14, 165}, 0, {368, 880}, {0, 227, 124, 255} }},
	{{ {-95, 16, 112}, 0, {368, 1008}, {186, 209, 95, 255} }},
	{{ {-108, 44, 78}, 0, {496, 1008}, {151, 2, 72, 255} }},
	{{ {135, 81, -1}, 0, {496, 112}, {122, 35, 249, 255} }},
	{{ {108, 44, 78}, 0, {496, -16}, {105, 2, 72, 255} }},
	{{ {95, 16, 112}, 0, {368, -16}, {70, 209, 95, 255} }},
	{{ {103, 110, 98}, 0, {624, -16}, {80, 56, 81, 255} }},
	{{ {99, 120, 21}, 0, {624, 112}, {63, 110, 245, 255} }},
	{{ {84, 81, -123}, 0, {624, 240}, {64, 80, 181, 255} }},
	{{ {102, 44, -127}, 0, {496, 240}, {93, 249, 170, 255} }},
	{{ {94, -6, -99}, 0, {368, 240}, {66, 153, 220, 255} }},
	{{ {120, 8, -13}, 0, {368, 112}, {84, 161, 2, 255} }},
	{{ {0, 44, -165}, 0, {496, 368}, {0, 243, 130, 255} }},
	{{ {0, 100, -142}, 0, {624, 368}, {0, 95, 172, 255} }},
	{{ {-84, 81, -123}, 0, {624, 240}, {192, 80, 181, 255} }},
	{{ {-102, 44, -127}, 0, {496, 240}, {163, 249, 170, 255} }},
	{{ {-94, -6, -99}, 0, {368, 240}, {190, 153, 220, 255} }},
	{{ {0, -16, -121}, 0, {368, 368}, {0, 137, 211, 255} }},
	{{ {-135, 81, -1}, 0, {496, 112}, {134, 35, 249, 255} }},
	{{ {-120, 8, -13}, 0, {368, 112}, {172, 161, 2, 255} }},
	{{ {-95, 16, 112}, 0, {368, -16}, {186, 209, 95, 255} }},
	{{ {-108, 44, 78}, 0, {496, -16}, {151, 2, 72, 255} }},
	{{ {-103, 110, 98}, 0, {624, -16}, {176, 56, 81, 255} }},
	{{ {-99, 120, 21}, 0, {624, 112}, {193, 110, 245, 255} }},
	{{ {0, 149, 40}, 0, {752, 368}, {0, 127, 253, 255} }},
	{{ {-99, 120, 21}, 0, {752, 240}, {193, 110, 245, 255} }},
	{{ {-103, 110, 98}, 0, {880, 240}, {176, 56, 81, 255} }},
	{{ {99, 120, 21}, 0, {752, 240}, {63, 110, 245, 255} }},
	{{ {103, 110, 98}, 0, {880, 240}, {80, 56, 81, 255} }},
	{{ {0, 149, 40}, 0, {752, 368}, {0, 127, 253, 255} }},
	{{ {0, 129, 127}, 0, {880, 368}, {0, 70, 106, 255} }},
	{{ {103, 110, 98}, 0, {880, 240}, {80, 56, 81, 255} }},
	{{ {-103, 110, 98}, 0, {880, 240}, {176, 56, 81, 255} }},
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_1_tri_2[] = {
	gsSPVertex(j_cap_Normal_Cap_DL_mesh_layer_1_vtx_2 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 10, 9, 0, 11, 10, 6, 0),
	gsSP2Triangles(11, 6, 12, 0, 13, 12, 6, 0),
	gsSP2Triangles(13, 6, 14, 0, 6, 8, 14, 0),
	gsSP2Triangles(15, 12, 13, 0, 15, 11, 12, 0),
	gsSP2Triangles(15, 16, 11, 0, 15, 17, 16, 0),
	gsSP2Triangles(15, 18, 17, 0, 15, 19, 18, 0),
	gsSP2Triangles(15, 20, 19, 0, 15, 13, 20, 0),
	gsSP2Triangles(19, 21, 18, 0, 19, 22, 21, 0),
	gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
	gsSP2Triangles(21, 24, 25, 0, 21, 25, 26, 0),
	gsSP2Triangles(17, 21, 26, 0, 17, 18, 21, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 17, 28, 0),
	gsSP2Triangles(27, 16, 17, 0, 27, 11, 16, 0),
	gsSP2Triangles(27, 30, 11, 0, 27, 31, 30, 0),
	gsSPVertex(j_cap_Normal_Cap_DL_mesh_layer_1_vtx_2 + 32, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx j_cap_Normal_Cap_DL_mesh_layer_4_vtx_0[6] = {
	{{ {103, 110, 98}, 0, {1391, 277}, {80, 56, 81, 255} }},
	{{ {0, 44, 113}, 0, {497, 806}, {0, 54, 115, 255} }},
	{{ {108, 44, 78}, 0, {1451, 857}, {105, 2, 72, 255} }},
	{{ {0, 129, 127}, 0, {498, 84}, {0, 70, 106, 255} }},
	{{ {-103, 110, 98}, 0, {-396, 275}, {176, 56, 81, 255} }},
	{{ {-108, 44, 78}, 0, {-457, 855}, {151, 2, 72, 255} }},
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(j_cap_Normal_Cap_DL_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_j_cap_J__EMBLEM_[] = {
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_cap_letter_rgba16_alpha_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_j_cap_Cap_Bottom__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, j_cap_jer_shade_alpha_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_j_cap_Hat__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_j_cap_Logo__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, j_cap_logo2_rgba16_alpha_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_j_cap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&j_cap_Metal__METAL__lights.l, 1),
    gsSPLight(&j_cap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_j_cap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_j_cap_J__EMBLEM_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_j_cap_Cap_Bottom__CAP_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_j_cap_Hat__CAP_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_j_cap_Metal__METAL_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_j_cap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_j_cap_Logo__CAP_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_4_tri_0),
	gsSPEndDisplayList(),
};

Gfx j_cap_Normal_Cap_DL_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_j_cap_Metal__METAL_),
	gsSPDisplayList(j_cap_Normal_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_j_cap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx j_cap_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

