Lights1 j_ice_wing_cap_Metal__METAL__002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 j_ice_wing_cap_Metal__METAL__003_lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 j_ice_wing_cap_Metal_Wing_Tip_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 j_ice_wing_cap_Metal_Wing_Base_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx j_ice_wing_cap_jess_ice_base_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_jess_ice_base_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/jess_ice_base.rgba16.inc.c"
};

Gfx j_ice_wing_cap_jess_ice_shine_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_jess_ice_shine_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/jess_ice_shine.rgba16.inc.c"
};

Gfx j_ice_wing_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/Metal_Shade.rgba16.inc.c"
};

Gfx j_ice_wing_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/Metal_Light.rgba16.inc.c"
};

Gfx j_ice_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx j_ice_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx j_ice_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx j_ice_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 j_ice_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16[] = {
	#include "actors/j_ice_wing_cap/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0[53] = {
	{{ {95, 16, 112}, 0, {508, 495}, {70, 209, 95, 255} }},
	{{ {108, 44, 78}, 0, {764, 495}, {105, 2, 72, 255} }},
	{{ {0, 44, 113}, 0, {764, 367}, {0, 54, 115, 255} }},
	{{ {0, 13, 165}, 0, {508, 367}, {0, 227, 124, 255} }},
	{{ {-95, 16, 112}, 0, {508, 495}, {186, 209, 95, 255} }},
	{{ {-108, 44, 78}, 0, {764, 495}, {151, 2, 72, 255} }},
	{{ {103, 110, 98}, 0, {2554, -236}, {80, 56, 81, 255} }},
	{{ {0, 44, 113}, 0, {766, 294}, {0, 54, 115, 255} }},
	{{ {108, 44, 78}, 0, {2674, 344}, {105, 2, 72, 255} }},
	{{ {0, 129, 127}, 0, {767, -429}, {0, 70, 106, 255} }},
	{{ {-103, 110, 98}, 0, {-1020, -237}, {176, 56, 81, 255} }},
	{{ {-108, 44, 78}, 0, {-1143, 343}, {151, 2, 72, 255} }},
	{{ {0, 20, -25}, 0, {252, -145}, {0, 131, 20, 255} }},
	{{ {95, 16, 112}, 0, {-4, -273}, {70, 209, 95, 255} }},
	{{ {0, 13, 165}, 0, {-4, -145}, {0, 227, 124, 255} }},
	{{ {120, 8, -13}, 0, {252, -273}, {84, 161, 2, 255} }},
	{{ {94, -6, -99}, 0, {508, -273}, {66, 153, 220, 255} }},
	{{ {0, -17, -121}, 0, {508, -145}, {0, 137, 211, 255} }},
	{{ {-94, -6, -99}, 0, {508, -273}, {190, 153, 220, 255} }},
	{{ {-120, 8, -13}, 0, {252, -273}, {172, 161, 2, 255} }},
	{{ {-95, 16, 112}, 0, {-4, -273}, {186, 209, 95, 255} }},
	{{ {0, 44, -165}, 0, {764, -145}, {0, 243, 130, 255} }},
	{{ {102, 44, -127}, 0, {764, -273}, {93, 249, 170, 255} }},
	{{ {84, 81, -123}, 0, {1020, -273}, {64, 80, 181, 255} }},
	{{ {0, 99, -142}, 0, {1020, -145}, {0, 95, 172, 255} }},
	{{ {-84, 81, -123}, 0, {1020, -273}, {192, 80, 181, 255} }},
	{{ {-102, 44, -127}, 0, {764, -273}, {163, 249, 170, 255} }},
	{{ {-135, 81, -1}, 0, {764, -401}, {134, 35, 249, 255} }},
	{{ {-120, 8, -13}, 0, {508, -401}, {172, 161, 2, 255} }},
	{{ {-95, 16, 112}, 0, {508, -529}, {186, 209, 95, 255} }},
	{{ {-108, 44, 78}, 0, {764, -529}, {151, 2, 72, 255} }},
	{{ {-103, 110, 98}, 0, {1020, -529}, {176, 56, 81, 255} }},
	{{ {-135, 81, -1}, 0, {764, -401}, {134, 35, 249, 255} }},
	{{ {-103, 110, 98}, 0, {1020, -529}, {176, 56, 81, 255} }},
	{{ {-99, 120, 21}, 0, {1020, -401}, {193, 110, 245, 255} }},
	{{ {-84, 81, -123}, 0, {1020, -273}, {192, 80, 181, 255} }},
	{{ {-102, 44, -127}, 0, {764, -273}, {163, 249, 170, 255} }},
	{{ {0, 149, 40}, 0, {1276, -145}, {0, 127, 253, 255} }},
	{{ {0, 99, -142}, 0, {1020, -145}, {0, 95, 172, 255} }},
	{{ {84, 81, -123}, 0, {1020, -273}, {64, 80, 181, 255} }},
	{{ {99, 120, 21}, 0, {1276, -273}, {63, 110, 245, 255} }},
	{{ {103, 110, 98}, 0, {1532, -273}, {80, 56, 81, 255} }},
	{{ {0, 129, 127}, 0, {1532, -145}, {0, 70, 106, 255} }},
	{{ {-103, 110, 98}, 0, {1532, -273}, {176, 56, 81, 255} }},
	{{ {-99, 120, 21}, 0, {1276, -273}, {193, 110, 245, 255} }},
	{{ {135, 81, -1}, 0, {764, -401}, {122, 35, 249, 255} }},
	{{ {108, 44, 78}, 0, {764, -529}, {105, 2, 72, 255} }},
	{{ {95, 16, 112}, 0, {508, -529}, {70, 209, 95, 255} }},
	{{ {103, 110, 98}, 0, {1020, -529}, {80, 56, 81, 255} }},
	{{ {99, 120, 21}, 0, {1020, -401}, {63, 110, 245, 255} }},
	{{ {102, 44, -127}, 0, {764, -273}, {93, 249, 170, 255} }},
	{{ {94, -6, -99}, 0, {508, -273}, {66, 153, 220, 255} }},
	{{ {120, 8, -13}, 0, {508, -401}, {84, 161, 2, 255} }},
};

Gfx j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 10, 11, 7, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(12, 16, 15, 0, 12, 17, 16, 0),
	gsSP2Triangles(12, 18, 17, 0, 12, 19, 18, 0),
	gsSP2Triangles(12, 20, 19, 0, 12, 14, 20, 0),
	gsSP2Triangles(21, 17, 18, 0, 21, 16, 17, 0),
	gsSP2Triangles(21, 22, 16, 0, 21, 23, 22, 0),
	gsSP2Triangles(21, 24, 23, 0, 21, 25, 24, 0),
	gsSP2Triangles(21, 26, 25, 0, 21, 18, 26, 0),
	gsSP2Triangles(18, 27, 26, 0, 18, 28, 27, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
	gsSP1Triangle(27, 30, 31, 0),
	gsSPVertex(j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 4, 0, 0, 5, 6, 3, 0),
	gsSP2Triangles(5, 7, 6, 0, 5, 8, 7, 0),
	gsSP2Triangles(5, 9, 8, 0, 5, 10, 9, 0),
	gsSP2Triangles(5, 11, 10, 0, 5, 12, 11, 0),
	gsSP2Triangles(5, 3, 12, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 16, 14, 0, 13, 17, 16, 0),
	gsSP2Triangles(7, 17, 13, 0, 7, 13, 18, 0),
	gsSP2Triangles(19, 18, 13, 0, 19, 13, 20, 0),
	gsSP1Triangle(13, 15, 20, 0),
	gsSPEndDisplayList(),
};

Vtx j_ice_wing_cap_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {228, 188, -112}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, 40, -31}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, 16, -97}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 212, -47}, 0, {-16, -16}, {90, 237, 88, 255} }},
	{{ {-175, 16, -97}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, 40, -31}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 188, -112}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {-16, -16}, {166, 237, 88, 255} }},
};

Gfx j_ice_wing_cap_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(j_ice_wing_cap_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};

Vtx j_ice_wing_cap_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {169, 212, -47}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 63, 32}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, 40, -31}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 235, 17}, 0, {-16, -16}, {89, 237, 88, 255} }},
	{{ {-117, 40, -31}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 63, 32}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 235, 17}, 0, {-16, -16}, {167, 237, 88, 255} }},
};

Gfx j_ice_wing_cap_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(j_ice_wing_cap_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_j_ice_wing_cap_Metal__METAL__002[] = {
	gsSPGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH, G_TEXTURE_GEN),
	gsSPSetLights1(j_ice_wing_cap_Metal__METAL__002_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_jess_ice_base_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_jess_ice_shine_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_j_ice_wing_cap_Metal__METAL__002[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_j_ice_wing_cap_Metal__METAL__003[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&j_ice_wing_cap_Metal__METAL__003_lights.l, 1),
    gsSPLight(&j_ice_wing_cap_Metal__METAL__003_lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_j_ice_wing_cap_Metal__METAL__003[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_j_ice_wing_cap_Metal_Wing_Tip_002[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(j_ice_wing_cap_Metal_Wing_Tip_002_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_j_ice_wing_cap_Metal_Wing_Tip_002[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_j_ice_wing_cap_Metal_Wing_Base_002[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(j_ice_wing_cap_Metal_Wing_Base_002_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, j_ice_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_j_ice_wing_cap_Metal_Wing_Base_002[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_j_ice_wing_cap_Metal__METAL__002),
	gsSPDisplayList(j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_j_ice_wing_cap_Metal__METAL__002),
	gsSPEndDisplayList(),
};

Gfx j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__003_0[] = {
	gsSPDisplayList(mat_j_ice_wing_cap_Metal__METAL__003),
	gsSPDisplayList(j_ice_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_j_ice_wing_cap_Metal__METAL__003),
	gsSPEndDisplayList(),
};

Gfx j_ice_wing_cap_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_j_ice_wing_cap_Metal_Wing_Tip_002),
	gsSPDisplayList(j_ice_wing_cap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_j_ice_wing_cap_Metal_Wing_Tip_002),
	gsSPDisplayList(mat_j_ice_wing_cap_Metal_Wing_Base_002),
	gsSPDisplayList(j_ice_wing_cap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_j_ice_wing_cap_Metal_Wing_Base_002),
	gsSPEndDisplayList(),
};

Gfx j_ice_wing_cap_Wings_mesh_layer_4_mat_override_Metal__METAL__003_0[] = {
	gsSPDisplayList(mat_j_ice_wing_cap_Metal__METAL__003),
	gsSPDisplayList(j_ice_wing_cap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(j_ice_wing_cap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_j_ice_wing_cap_Metal__METAL__003),
	gsSPEndDisplayList(),
};

Gfx j_ice_wing_cap_material_revert_render_settings[] = {
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

