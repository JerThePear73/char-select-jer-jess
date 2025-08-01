Lights1 davy_wing_cap_Davy_Cap__CAP__lights = gdSPDefLights1(
	0x7F, 0x45, 0x0,
	0xFF, 0x90, 0x0, 0x28, 0x28, 0x28);

Lights1 davy_wing_cap_Davy_Cap_Bottom__CAP__lights = gdSPDefLights1(
	0x7F, 0x45, 0x0,
	0xFF, 0x90, 0x0, 0x28, 0x28, 0x28);

Lights1 davy_wing_cap_Davy_Logo__CAP__lights = gdSPDefLights1(
	0x7F, 0x45, 0x0,
	0xFF, 0x90, 0x0, 0x28, 0x28, 0x28);

Lights1 davy_wing_cap_Davy_Emblem__EMBLEM__lights = gdSPDefLights1(
	0x7F, 0x45, 0x0,
	0xFF, 0x90, 0x0, 0x28, 0x28, 0x28);

Gfx davy_wing_cap_cap_logo_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_wing_cap_cap_logo_rgba16[] = {
	#include "actors/davy_wing_cap/cap_logo.rgba16.inc.c"
};

Gfx davy_wing_cap_davy_letter_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_wing_cap_davy_letter_rgba16[] = {
	#include "actors/davy_wing_cap/davy_letter.rgba16.inc.c"
};

Gfx davy_wing_cap_wing_2_ia8_aligner[] = {gsSPEndDisplayList()};
u8 davy_wing_cap_wing_2_ia8[] = {
	#include "actors/davy_wing_cap/wing_2.ia8.inc.c"
};

Gfx davy_wing_cap_wing1_ia8_aligner[] = {gsSPEndDisplayList()};
u8 davy_wing_cap_wing1_ia8[] = {
	#include "actors/davy_wing_cap/wing1.ia8.inc.c"
};

Vtx davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_0[44] = {
	{{ {0, 29, 106}, 0, {-16, 1008}, {200, 51, 102, 255} }},
	{{ {0, 36, -4}, 0, {-16, 1008}, {254, 129, 5, 255} }},
	{{ {0, 13, 134}, 0, {-16, 1008}, {195, 232, 109, 255} }},
	{{ {98, 10, -2}, 0, {368, 624}, {75, 154, 7, 255} }},
	{{ {79, 19, 73}, 0, {368, 496}, {109, 12, 64, 255} }},
	{{ {75, 11, 99}, 0, {368, 624}, {69, 216, 99, 255} }},
	{{ {87, 71, 86}, 0, {496, 496}, {95, 11, 83, 255} }},
	{{ {112, 56, -3}, 0, {496, 624}, {127, 1, 0, 255} }},
	{{ {77, 9, -78}, 0, {368, 752}, {54, 153, 206, 255} }},
	{{ {88, 43, -84}, 0, {496, 752}, {96, 242, 174, 255} }},
	{{ {0, 34, -117}, 0, {496, 880}, {0, 235, 131, 255} }},
	{{ {0, 8, -99}, 0, {368, 880}, {0, 149, 188, 255} }},
	{{ {-88, 43, -84}, 0, {496, 752}, {160, 242, 174, 255} }},
	{{ {-77, 9, -78}, 0, {368, 752}, {202, 153, 206, 255} }},
	{{ {-112, 56, -3}, 0, {496, 624}, {129, 1, 0, 255} }},
	{{ {-98, 10, -2}, 0, {368, 624}, {181, 154, 7, 255} }},
	{{ {-87, 71, 86}, 0, {496, 496}, {161, 11, 83, 255} }},
	{{ {-79, 19, 73}, 0, {368, 496}, {147, 12, 64, 255} }},
	{{ {-75, 11, 99}, 0, {368, 624}, {187, 216, 99, 255} }},
	{{ {-73, 102, 81}, 0, {624, 496}, {193, 99, 47, 255} }},
	{{ {0, 112, 104}, 0, {624, 368}, {0, 108, 67, 255} }},
	{{ {0, 90, 118}, 0, {496, 368}, {0, 17, 126, 255} }},
	{{ {73, 102, 81}, 0, {624, 496}, {63, 99, 47, 255} }},
	{{ {103, 83, -7}, 0, {624, 624}, {89, 90, 244, 255} }},
	{{ {82, 74, -89}, 0, {624, 752}, {68, 74, 179, 255} }},
	{{ {0, 87, -105}, 0, {624, 880}, {0, 88, 165, 255} }},
	{{ {-82, 74, -89}, 0, {624, 752}, {188, 74, 179, 255} }},
	{{ {-103, 83, -7}, 0, {624, 624}, {167, 90, 244, 255} }},
	{{ {0, 95, -30}, 0, {752, 368}, {0, 126, 239, 255} }},
	{{ {103, 83, -7}, 0, {752, 496}, {89, 90, 244, 255} }},
	{{ {0, 87, -105}, 0, {880, 368}, {0, 88, 165, 255} }},
	{{ {82, 74, -89}, 0, {880, 496}, {68, 74, 179, 255} }},
	{{ {-103, 83, -7}, 0, {752, 496}, {167, 90, 244, 255} }},
	{{ {0, 95, -30}, 0, {752, 368}, {0, 126, 239, 255} }},
	{{ {0, 87, -105}, 0, {880, 368}, {0, 88, 165, 255} }},
	{{ {-73, 102, 81}, 0, {624, 496}, {193, 99, 47, 255} }},
	{{ {0, 112, 104}, 0, {624, 368}, {0, 108, 67, 255} }},
	{{ {-82, 74, -89}, 0, {880, 496}, {188, 74, 179, 255} }},
	{{ {79, 19, 73}, 0, {368, 496}, {109, 12, 64, 255} }},
	{{ {0, 29, 106}, 0, {368, 368}, {200, 51, 102, 255} }},
	{{ {0, 13, 134}, 0, {368, 368}, {195, 232, 109, 255} }},
	{{ {-79, 19, 73}, 0, {368, 496}, {147, 12, 64, 255} }},
	{{ {-75, 11, 99}, 0, {368, 496}, {187, 216, 99, 255} }},
	{{ {75, 11, 99}, 0, {368, 496}, {69, 216, 99, 255} }},
};

Gfx davy_wing_cap_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 3, 7, 6, 0),
	gsSP2Triangles(7, 3, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
	gsSP2Triangles(15, 18, 17, 0, 14, 16, 19, 0),
	gsSP2Triangles(16, 20, 19, 0, 16, 21, 20, 0),
	gsSP2Triangles(6, 20, 21, 0, 6, 22, 20, 0),
	gsSP2Triangles(7, 22, 6, 0, 7, 23, 22, 0),
	gsSP2Triangles(9, 23, 7, 0, 9, 24, 23, 0),
	gsSP2Triangles(10, 24, 9, 0, 10, 25, 24, 0),
	gsSP2Triangles(10, 26, 25, 0, 10, 12, 26, 0),
	gsSP2Triangles(12, 27, 26, 0, 12, 14, 27, 0),
	gsSP2Triangles(14, 19, 27, 0, 22, 28, 20, 0),
	gsSP2Triangles(22, 29, 28, 0, 29, 30, 28, 0),
	gsSP1Triangle(29, 31, 30, 0),
	gsSPVertex(davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_0 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 0, 2, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 6, 8, 11, 0),
	gsSPEndDisplayList(),
};

Vtx davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_1[11] = {
	{{ {0, 36, -4}, 0, {240, 368}, {254, 129, 5, 255} }},
	{{ {98, 10, -2}, 0, {240, 496}, {75, 154, 7, 255} }},
	{{ {75, 11, 99}, 0, {240, 496}, {69, 216, 99, 255} }},
	{{ {77, 9, -78}, 0, {112, 496}, {54, 153, 206, 255} }},
	{{ {0, 8, -99}, 0, {112, 368}, {0, 149, 188, 255} }},
	{{ {-77, 9, -78}, 0, {112, 496}, {202, 153, 206, 255} }},
	{{ {-98, 10, -2}, 0, {240, 496}, {181, 154, 7, 255} }},
	{{ {-75, 11, 99}, 0, {240, 496}, {187, 216, 99, 255} }},
	{{ {75, 11, 99}, 0, {368, 496}, {69, 216, 99, 255} }},
	{{ {0, 13, 134}, 0, {368, 368}, {195, 232, 109, 255} }},
	{{ {-75, 11, 99}, 0, {368, 496}, {187, 216, 99, 255} }},
};

Gfx davy_wing_cap_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_1 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 7, 6, 0),
	gsSP2Triangles(8, 9, 0, 0, 10, 0, 9, 0),
	gsSPEndDisplayList(),
};

Vtx davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_2[6] = {
	{{ {79, 19, 73}, 0, {1302, 817}, {109, 12, 64, 255} }},
	{{ {87, 71, 86}, 0, {1330, 307}, {95, 11, 83, 255} }},
	{{ {0, 90, 118}, 0, {496, 71}, {0, 17, 126, 255} }},
	{{ {0, 29, 106}, 0, {496, 666}, {200, 51, 102, 255} }},
	{{ {-79, 19, 73}, 0, {-310, 817}, {147, 12, 64, 255} }},
	{{ {-87, 71, 86}, 0, {-338, 307}, {161, 11, 83, 255} }},
};

Gfx davy_wing_cap_Wing_Cap_mesh_layer_1_tri_2[] = {
	gsSPVertex(davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_2 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSPEndDisplayList(),
};

Vtx davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_3[6] = {
	{{ {22, 29, 100}, 0, {844, 844}, {37, 232, 119, 255} }},
	{{ {22, 70, 108}, 0, {844, 148}, {37, 232, 119, 255} }},
	{{ {0, 69, 114}, 0, {496, 148}, {0, 231, 125, 255} }},
	{{ {0, 28, 106}, 0, {496, 844}, {0, 231, 125, 255} }},
	{{ {-22, 29, 100}, 0, {148, 844}, {219, 232, 119, 255} }},
	{{ {-22, 70, 108}, 0, {148, 148}, {219, 232, 119, 255} }},
};

Gfx davy_wing_cap_Wing_Cap_mesh_layer_1_tri_3[] = {
	gsSPVertex(davy_wing_cap_Wing_Cap_mesh_layer_1_vtx_3 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSPEndDisplayList(),
};

Vtx davy_wing_cap_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {-175, 16, -97}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, 39, -31}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 188, -112}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {-16, -16}, {166, 237, 88, 255} }},
	{{ {228, 188, -112}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, 39, -31}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, 16, -97}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 212, -47}, 0, {-16, -16}, {90, 237, 88, 255} }},
};

Gfx davy_wing_cap_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(davy_wing_cap_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx davy_wing_cap_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {-117, 39, -31}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 62, 32}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 235, 17}, 0, {-16, -16}, {167, 237, 88, 255} }},
	{{ {169, 212, -47}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 62, 32}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, 39, -31}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 235, 17}, 0, {-16, -16}, {89, 237, 88, 255} }},
};

Gfx davy_wing_cap_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(davy_wing_cap_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_davy_wing_cap_Davy_Cap__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_davy_wing_cap_Davy_Cap_Bottom__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 137, 137, 137, 255),
	gsSPEndDisplayList(),
};

Gfx mat_davy_wing_cap_Davy_Logo__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_wing_cap_cap_logo_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_davy_wing_cap_Davy_Emblem__EMBLEM_[] = {
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_wing_cap_davy_letter_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_davy_wing_cap_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, davy_wing_cap_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_wing_cap_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_davy_wing_cap_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, davy_wing_cap_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_wing_cap_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx davy_wing_cap_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_davy_wing_cap_Davy_Cap__CAP_),
	gsSPDisplayList(davy_wing_cap_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_davy_wing_cap_Davy_Cap_Bottom__CAP_),
	gsSPDisplayList(davy_wing_cap_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_davy_wing_cap_Davy_Logo__CAP_),
	gsSPDisplayList(davy_wing_cap_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_davy_wing_cap_Davy_Emblem__EMBLEM_),
	gsSPDisplayList(davy_wing_cap_Wing_Cap_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx davy_wing_cap_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_davy_wing_cap_Wing_Tip),
	gsSPDisplayList(davy_wing_cap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_davy_wing_cap_Wing_Tip),
	gsSPDisplayList(mat_davy_wing_cap_Wing_Base),
	gsSPDisplayList(davy_wing_cap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_davy_wing_cap_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx davy_wing_cap_material_revert_render_settings[] = {
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

