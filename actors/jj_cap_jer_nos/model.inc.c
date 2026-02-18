Lights1 jj_cap_jer_nos_Nos_Label_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx jj_cap_jer_nos_NosEnvMap_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_nos_NosEnvMap_rgba16[] = {
	#include "actors/jj_cap_jer_nos/NosEnvMap.rgba16.inc.c"
};

Gfx jj_cap_jer_nos_HaloVisor_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_nos_HaloVisor_rgba16[] = {
	#include "actors/jj_cap_jer_nos/HaloVisor.rgba16.inc.c"
};

Gfx jj_cap_jer_nos_JerNos_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_nos_JerNos_rgba16[] = {
	#include "actors/jj_cap_jer_nos/JerNos.rgba16.inc.c"
};

Vtx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_vtx_0[54] = {
	{{ {37, 1, -75}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {77, 1, -5}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {37, 1, 66}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {-85, 1, -5}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {-45, 1, 66}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {-45, 1, -75}, 0, {-529, 495}, {0, 129, 0, 255} }},
	{{ {77, 286, -5}, 0, {598, -529}, {123, 32, 0, 255} }},
	{{ {37, 1, 66}, 0, {180, 495}, {63, 0, 110, 255} }},
	{{ {77, 1, -5}, 0, {598, 495}, {127, 0, 0, 255} }},
	{{ {37, 286, 66}, 0, {180, -529}, {61, 32, 106, 255} }},
	{{ {16, 351, 31}, 0, {180, -529}, {61, 38, 105, 255} }},
	{{ {37, 351, -5}, 0, {598, -529}, {121, 38, 0, 255} }},
	{{ {16, 368, 31}, 0, {180, -529}, {63, 0, 110, 255} }},
	{{ {37, 368, -5}, 0, {598, -529}, {127, 0, 0, 255} }},
	{{ {-24, 368, 31}, 0, {-225, -529}, {193, 0, 110, 255} }},
	{{ {-24, 351, 31}, 0, {-225, -529}, {195, 38, 105, 255} }},
	{{ {-45, 368, -5}, 0, {-631, -529}, {129, 0, 0, 255} }},
	{{ {-45, 351, -5}, 0, {-631, -529}, {135, 38, 0, 255} }},
	{{ {-45, 286, 66}, 0, {-225, -529}, {195, 32, 106, 255} }},
	{{ {-85, 286, -5}, 0, {-631, -529}, {133, 32, 0, 255} }},
	{{ {-45, 1, 66}, 0, {-225, 495}, {193, 0, 110, 255} }},
	{{ {-85, 1, -5}, 0, {-631, 495}, {129, 0, 0, 255} }},
	{{ {-85, 286, -5}, 0, {-631, -528}, {133, 32, 0, 255} }},
	{{ {-45, 351, -5}, 0, {598, -529}, {135, 38, 0, 255} }},
	{{ {-45, 368, -5}, 0, {598, -529}, {129, 0, 0, 255} }},
	{{ {-24, 368, -40}, 0, {180, -529}, {193, 0, 146, 255} }},
	{{ {-24, 351, -40}, 0, {180, -529}, {195, 38, 151, 255} }},
	{{ {16, 368, -40}, 0, {-225, -529}, {63, 0, 146, 255} }},
	{{ {16, 351, -40}, 0, {-225, -529}, {61, 38, 151, 255} }},
	{{ {37, 368, -5}, 0, {-631, -529}, {127, 0, 0, 255} }},
	{{ {37, 351, -5}, 0, {-631, -529}, {121, 38, 0, 255} }},
	{{ {37, 286, -75}, 0, {-225, -529}, {61, 32, 150, 255} }},
	{{ {37, 286, -75}, 0, {-225, -529}, {61, 32, 150, 255} }},
	{{ {37, 351, -5}, 0, {-631, -529}, {121, 38, 0, 255} }},
	{{ {77, 286, -5}, 0, {-631, -529}, {123, 32, 0, 255} }},
	{{ {77, 1, -5}, 0, {-631, -529}, {127, 0, 0, 255} }},
	{{ {37, 1, -75}, 0, {-225, -529}, {63, 0, 146, 255} }},
	{{ {-45, 286, -75}, 0, {180, -529}, {195, 32, 150, 255} }},
	{{ {-45, 1, -75}, 0, {180, -529}, {193, 0, 146, 255} }},
	{{ {-85, 286, -5}, 0, {598, -529}, {133, 32, 0, 255} }},
	{{ {-85, 1, -5}, 0, {598, -529}, {129, 0, 0, 255} }},
	{{ {-24, 351, -40}, 0, {180, -529}, {195, 38, 151, 255} }},
	{{ {-45, 351, -5}, 0, {598, -529}, {135, 38, 0, 255} }},
	{{ {16, 351, -40}, 0, {-225, -529}, {61, 38, 151, 255} }},
	{{ {8, 368, 8}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {16, 368, 31}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {37, 368, -5}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {-24, 368, 31}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {-16, 368, 8}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {-16, 368, -17}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {-45, 368, -5}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {-24, 368, -40}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {8, 368, -17}, 0, {-529, 495}, {0, 127, 0, 255} }},
	{{ {16, 368, -40}, 0, {-529, 495}, {0, 127, 0, 255} }},
};

Gfx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 10, 9, 0, 6, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(10, 12, 14, 0, 10, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 15, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(9, 15, 18, 0, 9, 10, 15, 0),
	gsSP2Triangles(9, 18, 20, 0, 18, 21, 20, 0),
	gsSP2Triangles(18, 22, 21, 0, 9, 20, 7, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(26, 25, 27, 0, 26, 27, 28, 0),
	gsSP2Triangles(28, 27, 29, 0, 28, 29, 30, 0),
	gsSP1Triangle(31, 28, 30, 0),
	gsSPVertex(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_vtx_0 + 32, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 9, 5, 0),
	gsSP2Triangles(7, 10, 9, 0, 5, 9, 11, 0),
	gsSP2Triangles(5, 11, 0, 0, 12, 13, 14, 0),
	gsSP2Triangles(13, 12, 15, 0, 12, 16, 15, 0),
	gsSP2Triangles(16, 17, 15, 0, 17, 18, 15, 0),
	gsSP2Triangles(19, 18, 17, 0, 20, 19, 17, 0),
	gsSP2Triangles(21, 19, 20, 0, 21, 20, 14, 0),
	gsSP1Triangle(20, 12, 14, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_vtx_1[18] = {
	{{ {8, 408, 8}, 0, {432, 1172}, {50, 0, 117, 255} }},
	{{ {-16, 368, 8}, 0, {-260, 1788}, {166, 0, 90, 255} }},
	{{ {8, 368, 8}, 0, {-260, 1788}, {90, 0, 90, 255} }},
	{{ {-16, 441, 8}, 0, {-40, 198}, {218, 141, 38, 255} }},
	{{ {8, 441, 8}, 0, {-40, 198}, {38, 141, 38, 255} }},
	{{ {-16, 408, -17}, 0, {252, 1484}, {166, 0, 166, 255} }},
	{{ {-16, 441, -17}, 0, {252, 1484}, {218, 141, 218, 255} }},
	{{ {8, 423, -17}, 0, {72, 1172}, {58, 37, 149, 255} }},
	{{ {8, 441, -17}, 0, {72, 1172}, {38, 141, 218, 255} }},
	{{ {8, 441, 8}, 0, {432, 1172}, {38, 141, 38, 255} }},
	{{ {65, 423, -17}, 0, {72, 1172}, {70, 92, 204, 255} }},
	{{ {65, 408, 8}, 0, {432, 1172}, {71, 0, 106, 255} }},
	{{ {8, 393, -17}, 0, {72, 1172}, {58, 219, 149, 255} }},
	{{ {8, 368, 8}, 0, {432, 1172}, {90, 0, 90, 255} }},
	{{ {8, 368, -17}, 0, {72, 1172}, {90, 0, 166, 255} }},
	{{ {-16, 368, -17}, 0, {252, 1484}, {166, 0, 166, 255} }},
	{{ {65, 393, -17}, 0, {72, 1172}, {70, 164, 204, 255} }},
	{{ {-16, 368, -17}, 0, {-260, 1788}, {166, 0, 166, 255} }},
};

Gfx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_vtx_1 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 1, 3, 5, 0),
	gsSP2Triangles(6, 5, 3, 0, 7, 5, 6, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 0, 0, 0, 10, 7, 0),
	gsSP2Triangles(0, 11, 10, 0, 12, 11, 0, 0),
	gsSP2Triangles(13, 12, 0, 0, 13, 14, 12, 0),
	gsSP2Triangles(12, 14, 15, 0, 15, 5, 12, 0),
	gsSP2Triangles(12, 5, 7, 0, 7, 16, 12, 0),
	gsSP2Triangles(7, 10, 16, 0, 10, 11, 16, 0),
	gsSP2Triangles(12, 16, 11, 0, 5, 17, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4_vtx_0[40] = {
	{{ {-21, 464, 25}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {13, 464, 25}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {30, 464, -5}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {-21, 464, -34}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {13, 464, -34}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {-38, 464, -5}, 0, {94, 441}, {0, 127, 0, 255} }},
	{{ {77, 286, -2}, 0, {1110, -16}, {110, 0, 63, 255} }},
	{{ {37, 1, 69}, 0, {693, 2032}, {63, 0, 110, 255} }},
	{{ {77, 1, -2}, 0, {1110, 2032}, {110, 0, 63, 255} }},
	{{ {37, 286, 69}, 0, {693, -16}, {63, 0, 110, 255} }},
	{{ {-45, 1, 69}, 0, {287, 2032}, {193, 0, 110, 255} }},
	{{ {-45, 286, 69}, 0, {287, -16}, {193, 0, 110, 255} }},
	{{ {-85, 1, -2}, 0, {-118, 2032}, {146, 0, 63, 255} }},
	{{ {-85, 286, -2}, 0, {-118, -16}, {146, 0, 63, 255} }},
	{{ {8, 441, 8}, 0, {94, 441}, {38, 141, 38, 255} }},
	{{ {13, 441, 25}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {-16, 441, 8}, 0, {94, 441}, {218, 141, 38, 255} }},
	{{ {30, 441, -5}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {8, 441, -17}, 0, {94, 441}, {38, 141, 218, 255} }},
	{{ {13, 441, -34}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {-21, 441, -34}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {-16, 441, -17}, 0, {94, 441}, {218, 141, 218, 255} }},
	{{ {-38, 441, -5}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {-21, 441, 25}, 0, {94, 441}, {0, 129, 0, 255} }},
	{{ {30, 441, -5}, 0, {94, 441}, {127, 0, 0, 255} }},
	{{ {13, 464, 25}, 0, {94, 441}, {63, 0, 110, 255} }},
	{{ {13, 441, 25}, 0, {94, 441}, {63, 0, 110, 255} }},
	{{ {30, 464, -5}, 0, {94, 441}, {127, 0, 0, 255} }},
	{{ {13, 441, -34}, 0, {94, 441}, {63, 0, 146, 255} }},
	{{ {13, 464, -34}, 0, {94, 441}, {63, 0, 146, 255} }},
	{{ {-21, 441, -34}, 0, {94, 441}, {193, 0, 146, 255} }},
	{{ {-21, 464, -34}, 0, {94, 441}, {193, 0, 146, 255} }},
	{{ {-38, 441, -5}, 0, {94, 441}, {129, 0, 0, 255} }},
	{{ {-21, 464, -34}, 0, {94, 441}, {193, 0, 146, 255} }},
	{{ {-21, 441, -34}, 0, {94, 441}, {193, 0, 146, 255} }},
	{{ {-38, 464, -5}, 0, {94, 441}, {129, 0, 0, 255} }},
	{{ {-21, 441, 25}, 0, {94, 441}, {193, 0, 110, 255} }},
	{{ {-21, 464, 25}, 0, {94, 441}, {193, 0, 110, 255} }},
	{{ {13, 441, 25}, 0, {94, 441}, {63, 0, 110, 255} }},
	{{ {13, 464, 25}, 0, {94, 441}, {63, 0, 110, 255} }},
};

Gfx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
	gsSP2Triangles(14, 18, 17, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 18, 21, 20, 0),
	gsSP2Triangles(22, 20, 21, 0, 21, 16, 22, 0),
	gsSP2Triangles(22, 16, 23, 0, 23, 16, 15, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
	gsSP2Triangles(28, 27, 24, 0, 28, 29, 27, 0),
	gsSP2Triangles(30, 29, 28, 0, 30, 31, 29, 0),
	gsSPVertex(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4_vtx_0 + 32, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_jj_cap_jer_nos_Nos_Env_Map[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, jj_cap_jer_nos_NosEnvMap_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_nos_Nos_Env_Map[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jer_nos_Visor[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 4032, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, jj_cap_jer_nos_HaloVisor_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 4095, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_nos_Visor[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jer_nos_Nos_Label[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(jj_cap_jer_nos_Nos_Label_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, jj_cap_jer_nos_JerNos_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_nos_Nos_Label[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_jj_cap_jer_nos_Nos_Env_Map),
	gsSPDisplayList(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_jj_cap_jer_nos_Nos_Env_Map),
	gsSPDisplayList(mat_jj_cap_jer_nos_Visor),
	gsSPDisplayList(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_jj_cap_jer_nos_Visor),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_jj_cap_jer_nos_Nos_Label),
	gsSPDisplayList(jj_cap_jer_nos_Wing_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jj_cap_jer_nos_Nos_Label),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_nos_material_revert_render_settings[] = {
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

