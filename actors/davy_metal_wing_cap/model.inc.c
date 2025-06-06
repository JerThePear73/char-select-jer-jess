Lights1 davy_metal_wing_cap_Metal__METAL__001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 davy_metal_wing_cap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 davy_metal_wing_cap_Metal_Wing_Tip_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 davy_metal_wing_cap_Metal_Wing_Base_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx davy_metal_wing_cap_davy_metal_base_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_davy_metal_base_rgba16[] = {
	#include "actors/davy_metal_wing_cap/davy_metal_base.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_davy_metal_shine_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_davy_metal_shine_rgba16[] = {
	#include "actors/davy_metal_wing_cap/davy_metal_shine.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/Metal_Shade.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/Metal_Light.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx davy_metal_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 davy_metal_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16[] = {
	#include "actors/davy_metal_wing_cap/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0[58] = {
	{{ {0, 29, 106}, 0, {-260, 495}, {200, 51, 102, 255} }},
	{{ {0, 36, -4}, 0, {-260, 495}, {254, 129, 5, 255} }},
	{{ {0, 13, 134}, 0, {-260, 495}, {195, 232, 109, 255} }},
	{{ {98, 10, -2}, 0, {508, 111}, {75, 154, 7, 255} }},
	{{ {79, 19, 73}, 0, {508, -17}, {109, 12, 64, 255} }},
	{{ {75, 11, 99}, 0, {508, 111}, {69, 216, 99, 255} }},
	{{ {87, 71, 86}, 0, {764, -17}, {95, 11, 83, 255} }},
	{{ {112, 56, -3}, 0, {764, 111}, {127, 1, 0, 255} }},
	{{ {77, 9, -78}, 0, {508, 239}, {54, 153, 206, 255} }},
	{{ {88, 43, -84}, 0, {764, 239}, {96, 242, 174, 255} }},
	{{ {0, 34, -117}, 0, {764, 367}, {0, 235, 131, 255} }},
	{{ {0, 8, -99}, 0, {508, 367}, {0, 149, 188, 255} }},
	{{ {-88, 43, -84}, 0, {764, 239}, {160, 242, 174, 255} }},
	{{ {-77, 9, -78}, 0, {508, 239}, {202, 153, 206, 255} }},
	{{ {-112, 56, -3}, 0, {764, 111}, {129, 1, 0, 255} }},
	{{ {-98, 10, -2}, 0, {508, 111}, {181, 154, 7, 255} }},
	{{ {-87, 71, 86}, 0, {764, -17}, {161, 11, 83, 255} }},
	{{ {-79, 19, 73}, 0, {508, -17}, {147, 12, 64, 255} }},
	{{ {-75, 11, 99}, 0, {508, 111}, {187, 216, 99, 255} }},
	{{ {-73, 102, 81}, 0, {1020, -17}, {193, 99, 47, 255} }},
	{{ {0, 112, 104}, 0, {1020, -145}, {0, 108, 67, 255} }},
	{{ {0, 90, 118}, 0, {764, -145}, {0, 17, 126, 255} }},
	{{ {73, 102, 81}, 0, {1020, -17}, {63, 99, 47, 255} }},
	{{ {103, 83, -7}, 0, {1020, 111}, {89, 90, 244, 255} }},
	{{ {82, 74, -89}, 0, {1020, 239}, {68, 74, 179, 255} }},
	{{ {0, 87, -105}, 0, {1020, 367}, {0, 88, 165, 255} }},
	{{ {-82, 74, -89}, 0, {1020, 239}, {188, 74, 179, 255} }},
	{{ {-103, 83, -7}, 0, {1020, 111}, {167, 90, 244, 255} }},
	{{ {0, 95, -30}, 0, {1276, -145}, {0, 126, 239, 255} }},
	{{ {103, 83, -7}, 0, {1276, -17}, {89, 90, 244, 255} }},
	{{ {0, 87, -105}, 0, {1532, -145}, {0, 88, 165, 255} }},
	{{ {82, 74, -89}, 0, {1532, -17}, {68, 74, 179, 255} }},
	{{ {-103, 83, -7}, 0, {1276, -17}, {167, 90, 244, 255} }},
	{{ {0, 95, -30}, 0, {1276, -145}, {0, 126, 239, 255} }},
	{{ {0, 87, -105}, 0, {1532, -145}, {0, 88, 165, 255} }},
	{{ {-73, 102, 81}, 0, {1020, -17}, {193, 99, 47, 255} }},
	{{ {0, 112, 104}, 0, {1020, -145}, {0, 108, 67, 255} }},
	{{ {-82, 74, -89}, 0, {1532, -17}, {188, 74, 179, 255} }},
	{{ {0, 36, -4}, 0, {252, -145}, {254, 129, 5, 255} }},
	{{ {98, 10, -2}, 0, {252, -17}, {75, 154, 7, 255} }},
	{{ {75, 11, 99}, 0, {252, -17}, {69, 216, 99, 255} }},
	{{ {77, 9, -78}, 0, {-4, -17}, {54, 153, 206, 255} }},
	{{ {0, 8, -99}, 0, {-4, -145}, {0, 149, 188, 255} }},
	{{ {-77, 9, -78}, 0, {-4, -17}, {202, 153, 206, 255} }},
	{{ {-98, 10, -2}, 0, {252, -17}, {181, 154, 7, 255} }},
	{{ {-75, 11, 99}, 0, {252, -17}, {187, 216, 99, 255} }},
	{{ {79, 19, 73}, 0, {2376, 305}, {109, 12, 64, 255} }},
	{{ {87, 71, 86}, 0, {2433, -205}, {95, 11, 83, 255} }},
	{{ {0, 90, 118}, 0, {764, -442}, {0, 17, 126, 255} }},
	{{ {0, 29, 106}, 0, {764, 153}, {200, 51, 102, 255} }},
	{{ {-79, 19, 73}, 0, {-849, 305}, {147, 12, 64, 255} }},
	{{ {-87, 71, 86}, 0, {-905, -205}, {161, 11, 83, 255} }},
	{{ {79, 19, 73}, 0, {508, -17}, {109, 12, 64, 255} }},
	{{ {0, 29, 106}, 0, {508, -145}, {200, 51, 102, 255} }},
	{{ {0, 13, 134}, 0, {508, -145}, {195, 232, 109, 255} }},
	{{ {-79, 19, 73}, 0, {508, -17}, {147, 12, 64, 255} }},
	{{ {-75, 11, 99}, 0, {508, -17}, {187, 216, 99, 255} }},
	{{ {75, 11, 99}, 0, {508, -17}, {69, 216, 99, 255} }},
};

Gfx davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
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
	gsSPVertex(davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 0, 2, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 11, 10, 6, 0),
	gsSP2Triangles(11, 6, 12, 0, 6, 13, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 16, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 23, 22, 21, 0),
	gsSP2Triangles(23, 24, 22, 0, 24, 6, 22, 0),
	gsSP2Triangles(25, 22, 6, 0, 20, 22, 25, 0),
	gsSPEndDisplayList(),
};

Vtx davy_metal_wing_cap_Wings_mesh_layer_4_vtx_0[8] = {
	{{ {228, 188, -112}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {117, 39, -31}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {176, 16, -97}, 0, {1008, 2032}, {90, 237, 88, 255} }},
	{{ {169, 212, -47}, 0, {-16, -16}, {90, 237, 88, 255} }},
	{{ {-175, 16, -97}, 0, {1008, 2032}, {166, 237, 88, 255} }},
	{{ {-117, 39, -31}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-227, 188, -112}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {-16, -16}, {166, 237, 88, 255} }},
};

Gfx davy_metal_wing_cap_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(davy_metal_wing_cap_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};

Vtx davy_metal_wing_cap_Wings_mesh_layer_4_vtx_1[8] = {
	{{ {169, 212, -47}, 0, {1008, -16}, {90, 237, 88, 255} }},
	{{ {59, 62, 32}, 0, {-16, 2032}, {89, 237, 88, 255} }},
	{{ {117, 39, -31}, 0, {1008, 2032}, {89, 237, 88, 255} }},
	{{ {111, 235, 17}, 0, {-16, -16}, {89, 237, 88, 255} }},
	{{ {-117, 39, -31}, 0, {1008, 2032}, {167, 237, 88, 255} }},
	{{ {-58, 62, 32}, 0, {-16, 2032}, {167, 237, 88, 255} }},
	{{ {-169, 212, -47}, 0, {1008, -16}, {166, 237, 88, 255} }},
	{{ {-111, 235, 17}, 0, {-16, -16}, {167, 237, 88, 255} }},
};

Gfx davy_metal_wing_cap_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(davy_metal_wing_cap_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_davy_metal_wing_cap_Metal__METAL__001[] = {
	gsSPGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH, G_TEXTURE_GEN),
	gsSPCopyLightsPlayerPart(HAIR),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_davy_metal_base_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_davy_metal_shine_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_metal_wing_cap_Metal__METAL__001[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_davy_metal_wing_cap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&davy_metal_wing_cap_Metal__METAL__lights.l, 1),
    gsSPLight(&davy_metal_wing_cap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_metal_wing_cap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_davy_metal_wing_cap_Metal_Wing_Tip_001[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(davy_metal_wing_cap_Metal_Wing_Tip_001_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_custom_mario_metal_wing_tip_shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_custom_mario_metal_wing_tip_light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_metal_wing_cap_Metal_Wing_Tip_001[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_davy_metal_wing_cap_Metal_Wing_Base_001[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(davy_metal_wing_cap_Metal_Wing_Base_001_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_custom_mario_metal_wing_shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, davy_metal_wing_cap_custom_mario_metal_wing_light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_davy_metal_wing_cap_Metal_Wing_Base_001[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_davy_metal_wing_cap_Metal__METAL__001),
	gsSPDisplayList(davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_davy_metal_wing_cap_Metal__METAL__001),
	gsSPEndDisplayList(),
};

Gfx davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_davy_metal_wing_cap_Metal__METAL_),
	gsSPDisplayList(davy_metal_wing_cap_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_davy_metal_wing_cap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx davy_metal_wing_cap_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_davy_metal_wing_cap_Metal_Wing_Tip_001),
	gsSPDisplayList(davy_metal_wing_cap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_davy_metal_wing_cap_Metal_Wing_Tip_001),
	gsSPDisplayList(mat_davy_metal_wing_cap_Metal_Wing_Base_001),
	gsSPDisplayList(davy_metal_wing_cap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_davy_metal_wing_cap_Metal_Wing_Base_001),
	gsSPEndDisplayList(),
};

Gfx davy_metal_wing_cap_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_davy_metal_wing_cap_Metal__METAL_),
	gsSPDisplayList(davy_metal_wing_cap_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(davy_metal_wing_cap_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_davy_metal_wing_cap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx davy_metal_wing_cap_material_revert_render_settings[] = {
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

