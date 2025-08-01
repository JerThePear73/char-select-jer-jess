Lights1 miner_cap_Jessilynn_Cap_Bottom__CAP__lights = gdSPDefLights1(
	0x4A, 0x67, 0x20,
	0x99, 0xD1, 0x49, 0x28, 0x28, 0x28);

Lights1 miner_cap_Jessilynn_Cap__CAP__lights = gdSPDefLights1(
	0x4A, 0x67, 0x20,
	0x99, 0xD1, 0x49, 0x28, 0x28, 0x28);

Lights1 miner_cap_Jessilynn_Hair__HAIR__lights = gdSPDefLights1(
	0x1E, 0x11, 0x9,
	0x46, 0x2C, 0x1E, 0x28, 0x28, 0x28);

Lights1 miner_cap_Jessilynn_Headlamp__HAIR__lights = gdSPDefLights1(
	0x27, 0x15, 0xB,
	0x56, 0x34, 0x21, 0x28, 0x28, 0x28);

Gfx miner_cap_jess_headlamp_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 miner_cap_jess_headlamp_rgba16[] = {
	#include "actors/miner_cap/jess_headlamp.rgba16.inc.c"
};

Vtx miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_0[9] = {
	{{ {0, 24, -29}, 0, {240, 368}, {0, 129, 8, 255} }},
	{{ {80, 12, 89}, 0, {112, 240}, {66, 203, 95, 255} }},
	{{ {0, 7, 115}, 0, {112, 368}, {0, 217, 121, 255} }},
	{{ {114, 14, -36}, 0, {240, 240}, {99, 182, 227, 255} }},
	{{ {71, 8, -100}, 0, {368, 240}, {56, 157, 200, 255} }},
	{{ {0, 1, -119}, 0, {368, 368}, {0, 153, 182, 255} }},
	{{ {-71, 8, -100}, 0, {368, 240}, {200, 157, 200, 255} }},
	{{ {-114, 14, -36}, 0, {240, 240}, {157, 182, 227, 255} }},
	{{ {-80, 12, 89}, 0, {112, 240}, {190, 203, 95, 255} }},
};

Gfx miner_cap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(0, 8, 7, 0, 0, 2, 8, 0),
	gsSPEndDisplayList(),
};

Vtx miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_1[57] = {
	{{ {80, 12, 89}, 0, {368, 1008}, {66, 203, 95, 255} }},
	{{ {91, 38, 60}, 0, {496, 1008}, {109, 253, 66, 255} }},
	{{ {36, 33, 87}, 0, {496, 944}, {79, 228, 95, 255} }},
	{{ {22, 22, 86}, 0, {464, 912}, {77, 250, 101, 255} }},
	{{ {0, 10, 109}, 0, {432, 880}, {0, 48, 118, 255} }},
	{{ {0, 7, 115}, 0, {368, 880}, {0, 217, 121, 255} }},
	{{ {-80, 12, 89}, 0, {368, 1008}, {190, 203, 95, 255} }},
	{{ {-22, 22, 86}, 0, {464, 912}, {179, 250, 101, 255} }},
	{{ {-36, 33, 87}, 0, {496, 944}, {177, 228, 95, 255} }},
	{{ {-91, 38, 60}, 0, {496, 1008}, {147, 253, 66, 255} }},
	{{ {91, 38, 60}, 0, {432, 48}, {109, 253, 66, 255} }},
	{{ {80, 12, 89}, 0, {368, -16}, {66, 203, 95, 255} }},
	{{ {114, 14, -36}, 0, {368, 112}, {99, 182, 227, 255} }},
	{{ {114, 74, -5}, 0, {496, 112}, {119, 43, 251, 255} }},
	{{ {71, 8, -100}, 0, {368, 240}, {56, 157, 200, 255} }},
	{{ {86, 52, -112}, 0, {496, 240}, {88, 8, 165, 255} }},
	{{ {0, 55, -130}, 0, {496, 368}, {0, 39, 135, 255} }},
	{{ {0, 1, -119}, 0, {368, 368}, {0, 153, 182, 255} }},
	{{ {-71, 8, -100}, 0, {368, 240}, {200, 157, 200, 255} }},
	{{ {-86, 52, -112}, 0, {496, 240}, {168, 8, 165, 255} }},
	{{ {-114, 74, -5}, 0, {496, 112}, {137, 43, 251, 255} }},
	{{ {-114, 14, -36}, 0, {368, 112}, {157, 182, 227, 255} }},
	{{ {-91, 38, 60}, 0, {432, 48}, {147, 253, 66, 255} }},
	{{ {-80, 12, 89}, 0, {368, -16}, {190, 203, 95, 255} }},
	{{ {-70, 80, -99}, 0, {624, 240}, {210, 98, 189, 255} }},
	{{ {0, 99, -59}, 0, {624, 368}, {0, 120, 214, 255} }},
	{{ {0, 125, 50}, 0, {752, 368}, {0, 127, 11, 255} }},
	{{ {-83, 105, 16}, 0, {752, 240}, {197, 112, 250, 255} }},
	{{ {-87, 92, 80}, 0, {880, 240}, {172, 52, 80, 255} }},
	{{ {0, 105, 106}, 0, {880, 368}, {0, 64, 110, 255} }},
	{{ {87, 92, 80}, 0, {880, 240}, {84, 52, 80, 255} }},
	{{ {83, 105, 16}, 0, {752, 240}, {59, 112, 250, 255} }},
	{{ {0, 125, 50}, 0, {752, 368}, {0, 127, 11, 255} }},
	{{ {83, 105, 16}, 0, {752, 240}, {59, 112, 250, 255} }},
	{{ {70, 80, -99}, 0, {624, 240}, {46, 98, 189, 255} }},
	{{ {0, 99, -59}, 0, {624, 368}, {0, 120, 214, 255} }},
	{{ {0, 55, -130}, 0, {496, 368}, {0, 39, 135, 255} }},
	{{ {86, 52, -112}, 0, {496, 240}, {88, 8, 165, 255} }},
	{{ {114, 74, -5}, 0, {496, 112}, {119, 43, 251, 255} }},
	{{ {83, 105, 16}, 0, {624, 112}, {59, 112, 250, 255} }},
	{{ {87, 92, 80}, 0, {624, -16}, {84, 52, 80, 255} }},
	{{ {91, 38, 60}, 0, {496, -16}, {109, 253, 66, 255} }},
	{{ {-70, 80, -99}, 0, {624, 240}, {210, 98, 189, 255} }},
	{{ {-114, 74, -5}, 0, {496, 112}, {137, 43, 251, 255} }},
	{{ {-83, 105, 16}, 0, {624, 112}, {197, 112, 250, 255} }},
	{{ {-87, 92, 80}, 0, {624, -16}, {172, 52, 80, 255} }},
	{{ {-91, 38, 60}, 0, {496, -16}, {147, 253, 66, 255} }},
	{{ {37, 75, 98}, 0, {944, 541}, {90, 22, 87, 255} }},
	{{ {91, 38, 60}, 0, {1451, 857}, {109, 253, 66, 255} }},
	{{ {87, 92, 80}, 0, {1391, 277}, {84, 52, 80, 255} }},
	{{ {36, 33, 87}, 0, {974, 831}, {79, 228, 95, 255} }},
	{{ {0, 105, 106}, 0, {498, 84}, {0, 64, 110, 255} }},
	{{ {0, 94, 102}, 0, {497, 331}, {0, 50, 117, 255} }},
	{{ {-37, 75, 98}, 0, {50, 541}, {166, 22, 87, 255} }},
	{{ {-87, 92, 80}, 0, {-396, 275}, {172, 52, 80, 255} }},
	{{ {-91, 38, 60}, 0, {-457, 855}, {147, 253, 66, 255} }},
	{{ {-36, 33, 87}, 0, {20, 831}, {177, 228, 95, 255} }},
};

Gfx miner_cap_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 15, 13, 0),
	gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
	gsSP2Triangles(21, 22, 20, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 19, 20, 0, 16, 19, 24, 0),
	gsSP2Triangles(16, 24, 25, 0, 26, 25, 24, 0),
	gsSP2Triangles(26, 24, 27, 0, 26, 27, 28, 0),
	gsSP2Triangles(26, 28, 29, 0, 26, 29, 30, 0),
	gsSP1Triangle(26, 30, 31, 0),
	gsSPVertex(miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_1 + 32, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(2, 6, 5, 0, 2, 7, 6, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
	gsSP2Triangles(11, 14, 13, 0, 15, 16, 17, 0),
	gsSP2Triangles(15, 18, 16, 0, 19, 15, 17, 0),
	gsSP2Triangles(19, 20, 15, 0, 21, 20, 19, 0),
	gsSP2Triangles(21, 19, 22, 0, 23, 21, 22, 0),
	gsSP1Triangle(23, 24, 21, 0),
	gsSPEndDisplayList(),
};

Vtx miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_2[17] = {
	{{ {-37, 75, 98}, 0, {50, 541}, {166, 22, 87, 255} }},
	{{ {-36, 33, 87}, 0, {20, 831}, {177, 228, 95, 255} }},
	{{ {-36, 32, 114}, 0, {20, 831}, {164, 198, 65, 255} }},
	{{ {-37, 75, 118}, 0, {50, 541}, {164, 52, 70, 255} }},
	{{ {0, 94, 102}, 0, {497, 331}, {0, 50, 117, 255} }},
	{{ {0, 94, 118}, 0, {497, 331}, {0, 106, 70, 255} }},
	{{ {37, 75, 118}, 0, {944, 541}, {92, 52, 70, 255} }},
	{{ {37, 75, 98}, 0, {944, 541}, {90, 22, 87, 255} }},
	{{ {36, 32, 114}, 0, {974, 831}, {92, 198, 65, 255} }},
	{{ {36, 33, 87}, 0, {974, 831}, {79, 228, 95, 255} }},
	{{ {-36, 32, 114}, 0, {496, 944}, {164, 198, 65, 255} }},
	{{ {-36, 33, 87}, 0, {496, 944}, {177, 228, 95, 255} }},
	{{ {-22, 22, 86}, 0, {464, 912}, {179, 250, 101, 255} }},
	{{ {0, 10, 109}, 0, {432, 880}, {0, 48, 118, 255} }},
	{{ {22, 22, 86}, 0, {464, 912}, {77, 250, 101, 255} }},
	{{ {36, 33, 87}, 0, {496, 944}, {79, 228, 95, 255} }},
	{{ {36, 32, 114}, 0, {496, 944}, {92, 198, 65, 255} }},
};

Gfx miner_cap_Normal_Cap_DL_mesh_layer_1_tri_2[] = {
	gsSPVertex(miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_2 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 13, 0),
	gsSPEndDisplayList(),
};

Vtx miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_3[7] = {
	{{ {-36, 32, 114}, 0, {2, 766}, {164, 198, 65, 255} }},
	{{ {0, 10, 109}, 0, {499, 1033}, {0, 48, 118, 255} }},
	{{ {0, 50, 127}, 0, {496, 489}, {0, 242, 126, 255} }},
	{{ {36, 32, 114}, 0, {993, 758}, {92, 198, 65, 255} }},
	{{ {37, 75, 118}, 0, {1007, 206}, {92, 52, 70, 255} }},
	{{ {0, 94, 118}, 0, {493, -40}, {0, 106, 70, 255} }},
	{{ {-37, 75, 118}, 0, {-18, 214}, {164, 52, 70, 255} }},
};

Gfx miner_cap_Normal_Cap_DL_mesh_layer_1_tri_3[] = {
	gsSPVertex(miner_cap_Normal_Cap_DL_mesh_layer_1_vtx_3 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
	gsSP2Triangles(5, 6, 2, 0, 6, 0, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_miner_cap_Jessilynn_Cap_Bottom__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 137, 137, 137, 255),
	gsSPEndDisplayList(),
};

Gfx mat_miner_cap_Jessilynn_Cap__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_miner_cap_Jessilynn_Hair__HAIR_[] = {
	gsSPCopyLightsPlayerPart(HAIR),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_miner_cap_Jessilynn_Headlamp__HAIR_[] = {
	gsSPCopyLightsPlayerPart(HAIR),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, miner_cap_jess_headlamp_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx miner_cap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_miner_cap_Jessilynn_Cap_Bottom__CAP_),
	gsSPDisplayList(miner_cap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_miner_cap_Jessilynn_Cap__CAP_),
	gsSPDisplayList(miner_cap_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_miner_cap_Jessilynn_Hair__HAIR_),
	gsSPDisplayList(miner_cap_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_miner_cap_Jessilynn_Headlamp__HAIR_),
	gsSPDisplayList(miner_cap_Normal_Cap_DL_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx miner_cap_material_revert_render_settings[] = {
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

