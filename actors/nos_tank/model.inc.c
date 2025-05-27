Lights1 nos_tank_NOS_Tank_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 nos_tank_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx nos_tank_jer_tank_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 nos_tank_jer_tank_rgba16[] = {
	#include "actors/nos_tank/jer-tank.rgba16.inc.c"
};

Gfx nos_tank_stainless_steel_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 nos_tank_stainless_steel_rgba16[] = {
	#include "actors/nos_tank/stainless_steel.rgba16.inc.c"
};

Gfx nos_tank_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 nos_tank_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/nos_tank/Metal_Shade.rgba16.inc.c"
};

Gfx nos_tank_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 nos_tank_Metal_Light_rgba16_rgba16[] = {
	#include "actors/nos_tank/Metal_Light.rgba16.inc.c"
};

Vtx nos_tank_Wing_Cap_mesh_layer_1_vtx_0[79] = {
	{{ {42, 394, 0}, 0, {1110, -16}, {90, 89, 0, 255} }},
	{{ {147, 133, 69}, 0, {693, 2032}, {82, 214, 87, 255} }},
	{{ {182, 153, 0}, 0, {1110, 2032}, {126, 239, 0, 255} }},
	{{ {7, 374, 69}, 0, {693, -16}, {37, 59, 106, 255} }},
	{{ {-42, 420, 35}, 0, {693, -16}, {33, 64, 105, 255} }},
	{{ {-24, 430, 0}, 0, {1110, -16}, {86, 94, 0, 255} }},
	{{ {-76, 400, 35}, 0, {287, -16}, {184, 3, 105, 255} }},
	{{ {-62, 335, 69}, 0, {287, -16}, {187, 253, 106, 255} }},
	{{ {-94, 390, 0}, 0, {-118, -16}, {132, 229, 0, 255} }},
	{{ {-96, 315, 0}, 0, {-118, -16}, {133, 223, 0, 255} }},
	{{ {147, 133, -69}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {182, 153, 0}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {147, 133, 69}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {43, 73, 0}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {78, 93, 69}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {78, 93, -69}, 0, {-16, 2032}, {63, 146, 0, 255} }},
	{{ {78, 93, 69}, 0, {287, 2032}, {251, 164, 87, 255} }},
	{{ {-62, 335, 69}, 0, {287, -16}, {187, 253, 106, 255} }},
	{{ {43, 73, 0}, 0, {-118, 2032}, {208, 139, 0, 255} }},
	{{ {-96, 315, 0}, 0, {-118, -16}, {133, 223, 0, 255} }},
	{{ {-96, 315, 0}, 0, {1110, -16}, {133, 223, 0, 255} }},
	{{ {78, 93, -69}, 0, {693, -16}, {251, 164, 169, 255} }},
	{{ {43, 73, 0}, 0, {1110, -16}, {208, 139, 0, 255} }},
	{{ {-62, 335, -69}, 0, {693, -16}, {187, 253, 150, 255} }},
	{{ {-76, 400, -35}, 0, {693, -16}, {184, 3, 151, 255} }},
	{{ {-94, 390, 0}, 0, {1110, -16}, {132, 229, 0, 255} }},
	{{ {-84, 414, -35}, 0, {693, -16}, {174, 42, 169, 255} }},
	{{ {-102, 404, 0}, 0, {1110, -16}, {130, 17, 0, 255} }},
	{{ {-50, 434, -35}, 0, {287, -16}, {5, 92, 169, 255} }},
	{{ {-42, 420, -35}, 0, {287, -16}, {33, 64, 151, 255} }},
	{{ {-32, 444, 0}, 0, {-118, -16}, {48, 117, 0, 255} }},
	{{ {-24, 430, 0}, 0, {-118, -16}, {86, 94, 0, 255} }},
	{{ {7, 374, -69}, 0, {287, -16}, {37, 59, 150, 255} }},
	{{ {-42, 420, -35}, 0, {287, -16}, {33, 64, 151, 255} }},
	{{ {-24, 430, 0}, 0, {-118, -16}, {86, 94, 0, 255} }},
	{{ {42, 394, 0}, 0, {-118, -16}, {90, 89, 0, 255} }},
	{{ {182, 153, 0}, 0, {-118, -16}, {126, 239, 0, 255} }},
	{{ {147, 133, -69}, 0, {287, -16}, {82, 214, 169, 255} }},
	{{ {-62, 335, -69}, 0, {693, -16}, {187, 253, 150, 255} }},
	{{ {78, 93, -69}, 0, {693, -16}, {251, 164, 169, 255} }},
	{{ {-76, 400, -35}, 0, {693, -16}, {184, 3, 151, 255} }},
	{{ {-24, 430, 0}, 0, {1110, -16}, {86, 94, 0, 255} }},
	{{ {-32, 444, 0}, 0, {1110, -16}, {48, 117, 0, 255} }},
	{{ {-50, 434, 35}, 0, {693, -16}, {5, 92, 87, 255} }},
	{{ {-42, 420, 35}, 0, {693, -16}, {33, 64, 105, 255} }},
	{{ {-84, 414, 35}, 0, {287, -16}, {174, 42, 87, 255} }},
	{{ {-76, 400, 35}, 0, {287, -16}, {184, 3, 105, 255} }},
	{{ {-102, 404, 0}, 0, {-118, -16}, {130, 17, 0, 255} }},
	{{ {-94, 390, 0}, 0, {-118, -16}, {132, 229, 0, 255} }},
	{{ {-57, 430, 12}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-50, 434, 35}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-32, 444, 0}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-84, 414, 35}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-77, 418, 12}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-77, 418, -12}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-102, 404, 0}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-84, 414, -35}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-57, 430, -12}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-50, 434, -35}, 0, {-16, 2032}, {193, 110, 0, 255} }},
	{{ {-93, 492, -12}, 0, {94, 441}, {91, 176, 218, 255} }},
	{{ {-113, 480, -12}, 0, {94, 441}, {24, 137, 218, 255} }},
	{{ {-118, 477, -29}, 0, {94, 441}, {251, 164, 169, 255} }},
	{{ {-132, 469, 0}, 0, {94, 441}, {208, 139, 0, 255} }},
	{{ {-113, 480, 12}, 0, {94, 441}, {24, 137, 38, 255} }},
	{{ {-132, 469, 0}, 0, {94, 441}, {208, 139, 0, 255} }},
	{{ {-113, 480, 12}, 0, {94, 441}, {24, 137, 38, 255} }},
	{{ {-118, 477, 29}, 0, {94, 441}, {251, 164, 87, 255} }},
	{{ {-88, 494, 29}, 0, {94, 441}, {82, 214, 87, 255} }},
	{{ {-93, 492, 12}, 0, {94, 441}, {91, 176, 38, 255} }},
	{{ {-74, 503, 0}, 0, {94, 441}, {126, 239, 0, 255} }},
	{{ {-93, 492, -12}, 0, {94, 441}, {91, 176, 218, 255} }},
	{{ {-88, 494, -29}, 0, {94, 441}, {82, 214, 169, 255} }},
	{{ {-118, 477, -29}, 0, {94, 441}, {251, 164, 169, 255} }},
	{{ {-99, 514, -29}, 0, {94, 441}, {5, 92, 169, 255} }},
	{{ {-129, 497, -29}, 0, {94, 441}, {174, 42, 169, 255} }},
	{{ {-143, 488, 0}, 0, {94, 441}, {130, 17, 0, 255} }},
	{{ {-129, 497, 29}, 0, {94, 441}, {174, 42, 87, 255} }},
	{{ {-99, 514, 29}, 0, {94, 441}, {5, 92, 87, 255} }},
	{{ {-85, 522, 0}, 0, {94, 441}, {48, 117, 0, 255} }},
};

Gfx nos_tank_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(nos_tank_Wing_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(3, 4, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
	gsSP2Triangles(12, 14, 13, 0, 13, 15, 10, 0),
	gsSP2Triangles(3, 16, 1, 0, 3, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(20, 24, 23, 0, 20, 25, 24, 0),
	gsSP2Triangles(25, 26, 24, 0, 25, 27, 26, 0),
	gsSP2Triangles(24, 26, 28, 0, 24, 28, 29, 0),
	gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
	gsSPVertex(nos_tank_Wing_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(6, 0, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 1, 0, 0, 6, 8, 1, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(14, 13, 15, 0, 14, 15, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 18, 17, 20, 0),
	gsSP2Triangles(17, 21, 20, 0, 21, 22, 20, 0),
	gsSP2Triangles(22, 23, 20, 0, 24, 23, 22, 0),
	gsSP2Triangles(25, 24, 22, 0, 26, 24, 25, 0),
	gsSP2Triangles(26, 25, 19, 0, 25, 17, 19, 0),
	gsSP2Triangles(27, 28, 29, 0, 30, 29, 28, 0),
	gsSP1Triangle(28, 31, 30, 0),
	gsSPVertex(nos_tank_Wing_Cap_mesh_layer_1_vtx_0 + 64, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(4, 3, 1, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 0, 10, 8, 0),
	gsSP2Triangles(0, 11, 10, 0, 2, 11, 0, 0),
	gsSP2Triangles(2, 12, 11, 0, 3, 12, 2, 0),
	gsSP2Triangles(3, 13, 12, 0, 5, 13, 3, 0),
	gsSP2Triangles(5, 14, 13, 0, 7, 14, 5, 0),
	gsSP2Triangles(7, 9, 14, 0, 14, 9, 10, 0),
	gsSP2Triangles(12, 14, 10, 0, 10, 11, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx nos_tank_Wing_Cap_mesh_layer_1_vtx_1[18] = {
	{{ {-77, 464, 12}, 0, {432, 188}, {43, 25, 117, 255} }},
	{{ {-77, 418, 12}, 0, {-260, 495}, {156, 27, 73, 255} }},
	{{ {-57, 430, 12}, 0, {-260, 495}, {232, 119, 38, 255} }},
	{{ {-113, 480, 12}, 0, {-40, -300}, {24, 137, 38, 255} }},
	{{ {-93, 492, 12}, 0, {-40, -300}, {91, 176, 38, 255} }},
	{{ {-97, 452, -12}, 0, {252, 343}, {178, 211, 166, 255} }},
	{{ {-113, 480, -12}, 0, {252, 343}, {24, 137, 218, 255} }},
	{{ {-84, 477, -12}, 0, {72, 188}, {32, 61, 149, 255} }},
	{{ {-93, 492, -12}, 0, {72, 188}, {91, 176, 218, 255} }},
	{{ {-93, 492, 12}, 0, {432, 188}, {91, 176, 38, 255} }},
	{{ {-36, 505, -12}, 0, {72, 188}, {15, 115, 204, 255} }},
	{{ {-28, 492, 12}, 0, {432, 188}, {61, 35, 106, 255} }},
	{{ {-69, 451, -12}, 0, {72, 188}, {69, 253, 149, 255} }},
	{{ {-57, 430, 12}, 0, {432, 188}, {232, 119, 38, 255} }},
	{{ {-57, 430, -12}, 0, {72, 188}, {232, 119, 218, 255} }},
	{{ {-77, 418, -12}, 0, {252, 343}, {165, 80, 218, 255} }},
	{{ {-21, 479, -12}, 0, {72, 188}, {107, 211, 204, 255} }},
	{{ {-77, 418, -12}, 0, {-260, 495}, {165, 80, 218, 255} }},
};

Gfx nos_tank_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(nos_tank_Wing_Cap_mesh_layer_1_vtx_1 + 0, 18, 0),
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


Gfx mat_nos_tank_NOS_Tank[] = {
	gsSPSetLights1(nos_tank_NOS_Tank_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nos_tank_jer_tank_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_nos_tank_Steel[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nos_tank_stainless_steel_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nos_tank_Steel[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_nos_tank_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&nos_tank_Metal__METAL__lights.l, 1),
    gsSPLight(&nos_tank_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nos_tank_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, nos_tank_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_nos_tank_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx nos_tank_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_nos_tank_NOS_Tank),
	gsSPDisplayList(nos_tank_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_nos_tank_Steel),
	gsSPDisplayList(nos_tank_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_nos_tank_Steel),
	gsSPEndDisplayList(),
};

Gfx nos_tank_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_nos_tank_Metal__METAL_),
	gsSPDisplayList(nos_tank_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(nos_tank_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_nos_tank_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx nos_tank_material_revert_render_settings[] = {
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

