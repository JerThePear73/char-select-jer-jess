Lights1 jj_cap_jess_ice_Metal_Flower_Stem_lights = gdSPDefLights1(
	0x9, 0x20, 0x17,
	0x1E, 0x4A, 0x38, 0x28, 0x28, 0x28);

Lights1 jj_cap_jess_ice_Metal_Flower_Leaf_lights = gdSPDefLights1(
	0x9, 0x20, 0x17,
	0x1E, 0x4A, 0x38, 0x28, 0x28, 0x28);

Gfx jj_cap_jess_ice_JessIce_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jess_ice_JessIce_rgba16[] = {
	#include "actors/jj_cap_jess_ice/JessIce.rgba16.inc.c"
};

Gfx jj_cap_jess_ice_FlowerEyesIce_ia8_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jess_ice_FlowerEyesIce_ia8[] = {
	#include "actors/jj_cap_jess_ice/FlowerEyesIce.ia8.inc.c"
};

Gfx jj_cap_jess_ice_FlowerLeaves_ia8_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jess_ice_FlowerLeaves_ia8[] = {
	#include "actors/jj_cap_jess_ice/FlowerLeaves.ia8.inc.c"
};

Vtx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_1_vtx_0[23] = {
	{{ {32, 0, -4}, 0, {624, 752}, {204, 142, 22, 255} }},
	{{ {0, 0, 28}, 0, {368, 368}, {254, 129, 248, 255} }},
	{{ {0, 0, -36}, 0, {624, 880}, {254, 129, 8, 255} }},
	{{ {0, 0, -36}, 0, {112, 368}, {254, 129, 8, 255} }},
	{{ {-32, 0, -4}, 0, {240, 496}, {95, 178, 32, 255} }},
	{{ {0, 0, 28}, 0, {624, 368}, {4, 53, 115, 255} }},
	{{ {32, 0, -4}, 0, {624, 496}, {77, 91, 213, 255} }},
	{{ {14, 49, -4}, 0, {624, 496}, {102, 26, 70, 255} }},
	{{ {0, 49, 10}, 0, {624, 368}, {255, 40, 120, 255} }},
	{{ {9, 111, -4}, 0, {624, 496}, {74, 154, 16, 255} }},
	{{ {0, 111, 5}, 0, {624, 368}, {0, 169, 92, 255} }},
	{{ {-9, 111, -4}, 0, {624, 496}, {186, 150, 5, 255} }},
	{{ {-14, 49, -4}, 0, {624, 496}, {152, 20, 186, 255} }},
	{{ {-32, 0, -4}, 0, {624, 496}, {248, 113, 199, 255} }},
	{{ {32, 0, -4}, 0, {624, 752}, {77, 91, 213, 255} }},
	{{ {0, 0, -36}, 0, {624, 880}, {4, 53, 141, 255} }},
	{{ {0, 49, -18}, 0, {624, 880}, {255, 40, 136, 255} }},
	{{ {-32, 0, -4}, 0, {624, 752}, {248, 113, 199, 255} }},
	{{ {-14, 49, -4}, 0, {624, 752}, {152, 20, 186, 255} }},
	{{ {0, 111, -13}, 0, {624, 880}, {4, 170, 162, 255} }},
	{{ {-9, 111, -4}, 0, {624, 752}, {186, 150, 5, 255} }},
	{{ {14, 49, -4}, 0, {624, 752}, {102, 26, 70, 255} }},
	{{ {9, 111, -4}, 0, {624, 752}, {74, 154, 16, 255} }},
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_1_vtx_0 + 0, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
	gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(8, 10, 11, 0, 8, 11, 12, 0),
	gsSP2Triangles(5, 8, 12, 0, 5, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 17, 16, 15, 0),
	gsSP2Triangles(17, 18, 16, 0, 18, 19, 16, 0),
	gsSP2Triangles(18, 20, 19, 0, 21, 16, 19, 0),
	gsSP2Triangles(14, 16, 21, 0, 21, 19, 22, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7_vtx_0[45] = {
	{{ {9, 111, -4}, 0, {1532, 764}, {74, 154, 16, 255} }},
	{{ {46, 139, -47}, 0, {1532, 764}, {70, 171, 192, 255} }},
	{{ {62, 139, -4}, 0, {1276, 764}, {93, 169, 0, 255} }},
	{{ {69, 214, -75}, 0, {1532, 764}, {87, 20, 166, 255} }},
	{{ {102, 214, -4}, 0, {1276, 764}, {124, 228, 0, 255} }},
	{{ {46, 139, 39}, 0, {1020, 764}, {64, 171, 69, 255} }},
	{{ {69, 214, 67}, 0, {1020, 764}, {87, 20, 90, 255} }},
	{{ {0, 139, 56}, 0, {1020, 508}, {0, 166, 89, 255} }},
	{{ {0, 214, 96}, 0, {1020, 508}, {0, 228, 124, 255} }},
	{{ {-69, 214, 67}, 0, {1020, 764}, {169, 20, 90, 255} }},
	{{ {-46, 139, 39}, 0, {1020, 764}, {190, 169, 65, 255} }},
	{{ {-102, 214, -4}, 0, {1276, 764}, {132, 228, 0, 255} }},
	{{ {-62, 139, -4}, 0, {1276, 764}, {162, 171, 254, 255} }},
	{{ {-69, 214, -75}, 0, {1532, 764}, {169, 20, 166, 255} }},
	{{ {-46, 139, -47}, 0, {1532, 764}, {190, 169, 191, 255} }},
	{{ {-9, 111, -4}, 0, {1276, 764}, {186, 150, 5, 255} }},
	{{ {-9, 111, -4}, 0, {1020, 764}, {186, 150, 5, 255} }},
	{{ {0, 111, 5}, 0, {1020, 508}, {0, 169, 92, 255} }},
	{{ {9, 111, -4}, 0, {1020, 764}, {74, 154, 16, 255} }},
	{{ {9, 111, -4}, 0, {1276, 764}, {74, 154, 16, 255} }},
	{{ {46, 139, -47}, 0, {1020, 1276}, {70, 171, 192, 255} }},
	{{ {0, 214, -104}, 0, {1020, 1532}, {0, 228, 132, 255} }},
	{{ {69, 214, -75}, 0, {1020, 1276}, {87, 20, 166, 255} }},
	{{ {0, 139, -65}, 0, {1020, 1532}, {6, 169, 164, 255} }},
	{{ {9, 111, -4}, 0, {1020, 1276}, {74, 154, 16, 255} }},
	{{ {0, 111, -13}, 0, {1020, 1532}, {4, 170, 162, 255} }},
	{{ {-9, 111, -4}, 0, {1020, 1276}, {186, 150, 5, 255} }},
	{{ {-46, 139, -47}, 0, {1020, 1276}, {190, 169, 191, 255} }},
	{{ {-69, 214, -75}, 0, {1020, 1276}, {169, 20, 166, 255} }},
	{{ {0, 214, -104}, 0, {-260, 1788}, {0, 228, 132, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {0, 115, 203, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {87, 20, 166, 255} }},
	{{ {0, 214, -104}, 0, {-260, 1788}, {0, 228, 132, 255} }},
	{{ {-69, 214, -75}, 0, {-260, 1788}, {169, 20, 166, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {0, 115, 203, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {0, 127, 0, 255} }},
	{{ {-102, 291, -4}, 0, {-260, 1788}, {201, 114, 0, 255} }},
	{{ {-102, 214, -4}, 0, {-260, 1788}, {132, 228, 0, 255} }},
	{{ {-69, 214, 67}, 0, {-260, 1788}, {169, 20, 90, 255} }},
	{{ {0, 291, 96}, 0, {-260, 1788}, {0, 115, 53, 255} }},
	{{ {0, 214, 96}, 0, {-260, 1788}, {0, 228, 124, 255} }},
	{{ {69, 214, 67}, 0, {-260, 1788}, {87, 20, 90, 255} }},
	{{ {102, 291, -4}, 0, {-260, 1788}, {55, 114, 0, 255} }},
	{{ {102, 214, -4}, 0, {-260, 1788}, {124, 228, 0, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {87, 20, 166, 255} }},
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7_tri_0[] = {
	gsSPVertex(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(2, 3, 4, 0, 5, 2, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
	gsSP2Triangles(16, 10, 12, 0, 17, 10, 16, 0),
	gsSP2Triangles(17, 7, 10, 0, 17, 5, 7, 0),
	gsSP2Triangles(17, 18, 5, 0, 19, 2, 5, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(24, 23, 20, 0, 24, 25, 23, 0),
	gsSP2Triangles(26, 23, 25, 0, 26, 27, 23, 0),
	gsSP2Triangles(27, 21, 23, 0, 27, 28, 21, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7_vtx_0 + 32, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 4, 6, 3, 0),
	gsSP2Triangles(6, 7, 3, 0, 8, 7, 6, 0),
	gsSP2Triangles(8, 9, 7, 0, 9, 3, 7, 0),
	gsSP2Triangles(10, 3, 9, 0, 11, 10, 9, 0),
	gsSP2Triangles(12, 10, 11, 0, 12, 3, 10, 0),
	gsSP1Triangle(12, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_vtx_0[6] = {
	{{ {0, 139, 57}, 0, {510, 799}, {255, 255, 255, 255} }},
	{{ {57, 139, 37}, 0, {927, 802}, {255, 255, 255, 255} }},
	{{ {80, 214, 65}, 0, {1007, 248}, {255, 255, 255, 255} }},
	{{ {0, 214, 96}, 0, {504, 258}, {255, 255, 255, 255} }},
	{{ {-80, 214, 65}, 0, {1007, 248}, {255, 255, 255, 255} }},
	{{ {-57, 139, 37}, 0, {927, 802}, {255, 255, 255, 255} }},
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_vtx_1[15] = {
	{{ {134, 71, 0}, 0, {6, -32}, {219, 121, 0, 255} }},
	{{ {134, 71, -55}, 0, {171, -32}, {219, 121, 0, 255} }},
	{{ {83, 55, -55}, 0, {171, 216}, {203, 115, 0, 255} }},
	{{ {83, 55, 0}, 0, {6, 216}, {203, 115, 0, 255} }},
	{{ {0, 3, -55}, 0, {171, 612}, {255, 127, 255, 255} }},
	{{ {0, 3, 0}, 0, {6, 612}, {1, 127, 0, 255} }},
	{{ {-83, 55, -55}, 0, {171, 216}, {54, 115, 255, 255} }},
	{{ {-83, 55, 0}, 0, {6, 216}, {54, 115, 0, 255} }},
	{{ {-134, 71, -55}, 0, {171, -32}, {37, 121, 0, 255} }},
	{{ {-134, 71, 0}, 0, {6, -32}, {37, 121, 0, 255} }},
	{{ {-83, 55, 55}, 0, {171, 216}, {54, 115, 1, 255} }},
	{{ {-134, 71, 55}, 0, {171, -32}, {37, 121, 0, 255} }},
	{{ {0, 3, 55}, 0, {171, 612}, {1, 127, 1, 255} }},
	{{ {83, 55, 55}, 0, {171, 216}, {203, 115, 0, 255} }},
	{{ {134, 71, 55}, 0, {171, -32}, {219, 121, 0, 255} }},
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_vtx_1 + 0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(7, 10, 12, 0, 7, 12, 5, 0),
	gsSP2Triangles(13, 5, 12, 0, 13, 3, 5, 0),
	gsSP2Triangles(14, 3, 13, 0, 14, 0, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_jj_cap_jess_ice_Metal_Flower_Stem[] = {
	gsSPSetLights1(jj_cap_jess_ice_Metal_Flower_Stem_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jess_ice_Ice[] = {
	gsSPGeometryMode(G_SHADE, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPTexture(4032, 4032, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, jj_cap_jess_ice_JessIce_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 4095, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jess_ice_Ice[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_SHADE),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jess_ice_Metal_Flower_Eyes_Texture[] = {
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, jj_cap_jess_ice_FlowerEyesIce_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jess_ice_Metal_Flower_Eyes_Texture[] = {
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jess_ice_Metal_Flower_Leaf[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(jj_cap_jess_ice_Metal_Flower_Leaf_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, jj_cap_jess_ice_FlowerLeaves_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 2048),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jess_ice_Metal_Flower_Leaf[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_jj_cap_jess_ice_Metal_Flower_Stem),
	gsSPDisplayList(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7[] = {
	gsSPDisplayList(mat_jj_cap_jess_ice_Ice),
	gsSPDisplayList(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_7_tri_0),
	gsSPDisplayList(mat_revert_jj_cap_jess_ice_Ice),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_jj_cap_jess_ice_Metal_Flower_Eyes_Texture),
	gsSPDisplayList(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jj_cap_jess_ice_Metal_Flower_Eyes_Texture),
	gsSPDisplayList(mat_jj_cap_jess_ice_Metal_Flower_Leaf),
	gsSPDisplayList(jj_cap_jess_ice_Metal_Cap_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_jj_cap_jess_ice_Metal_Flower_Leaf),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jess_ice_material_revert_render_settings[] = {
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

