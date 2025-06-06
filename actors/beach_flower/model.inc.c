Lights1 beach_flower_Headband_lights = gdSPDefLights1(
	0x4, 0x2E, 0x2,
	0x10, 0x65, 0xB, 0x28, 0x28, 0x28);

Lights1 beach_flower_Flower_Petals__CAP__lights = gdSPDefLights1(
	0x62, 0x23, 0x1C,
	0xC6, 0x4F, 0x42, 0x28, 0x28, 0x28);

Lights1 beach_flower_Flower_Center__EMBLEM__lights = gdSPDefLights1(
	0x7F, 0x69, 0x14,
	0xFF, 0xD5, 0x32, 0x28, 0x28, 0x28);

Vtx beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_0[12] = {
	{{ {102, 16, -7}, 0, {-16, -16}, {122, 33, 239, 255} }},
	{{ {102, 35, 29}, 0, {1008, -16}, {125, 22, 244, 255} }},
	{{ {95, 5, 34}, 0, {-16, -16}, {124, 232, 13, 255} }},
	{{ {69, 64, -33}, 0, {-16, -16}, {80, 87, 210, 255} }},
	{{ {69, 83, 3}, 0, {1008, -16}, {80, 87, 210, 255} }},
	{{ {0, 85, -44}, 0, {-16, 1008}, {0, 112, 196, 255} }},
	{{ {0, 104, -8}, 0, {1008, 1008}, {0, 112, 196, 255} }},
	{{ {-69, 83, 3}, 0, {1008, -16}, {176, 87, 210, 255} }},
	{{ {-69, 64, -33}, 0, {-16, -16}, {176, 87, 210, 255} }},
	{{ {-102, 35, 29}, 0, {1008, -16}, {131, 22, 244, 255} }},
	{{ {-102, 16, -7}, 0, {-16, -16}, {134, 33, 239, 255} }},
	{{ {-95, 5, 34}, 0, {-16, -16}, {132, 232, 13, 255} }},
};

Gfx beach_flower_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 6, 4, 0, 5, 7, 6, 0),
	gsSP2Triangles(5, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSPEndDisplayList(),
};

Vtx beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_1[70] = {
	{{ {68, 104, 8}, 0, {368, 496}, {176, 27, 95, 255} }},
	{{ {94, 90, 30}, 0, {240, 496}, {183, 217, 96, 255} }},
	{{ {91, 127, 21}, 0, {368, 496}, {251, 127, 2, 255} }},
	{{ {89, 84, 19}, 0, {240, 496}, {165, 202, 70, 255} }},
	{{ {73, 69, -13}, 0, {240, 368}, {165, 202, 70, 255} }},
	{{ {51, 101, -18}, 0, {368, 368}, {165, 202, 70, 255} }},
	{{ {43, 111, -19}, 0, {368, 368}, {149, 232, 64, 255} }},
	{{ {65, 137, -3}, 0, {368, 496}, {50, 104, 54, 255} }},
	{{ {75, 96, -4}, 0, {624, 496}, {90, 58, 188, 255} }},
	{{ {91, 127, 21}, 0, {624, 496}, {251, 127, 2, 255} }},
	{{ {89, 83, 4}, 0, {752, 496}, {88, 52, 180, 255} }},
	{{ {110, 102, 32}, 0, {752, 496}, {93, 57, 191, 255} }},
	{{ {128, 74, 29}, 0, {624, 496}, {116, 211, 25, 255} }},
	{{ {98, 64, 1}, 0, {624, 496}, {94, 53, 189, 255} }},
	{{ {102, 57, 14}, 0, {368, 496}, {242, 190, 108, 255} }},
	{{ {133, 42, 10}, 0, {368, 496}, {107, 23, 65, 255} }},
	{{ {103, 27, -7}, 0, {368, 368}, {188, 176, 72, 255} }},
	{{ {95, 37, -9}, 0, {368, 368}, {165, 202, 70, 255} }},
	{{ {128, 74, 29}, 0, {368, 496}, {116, 211, 25, 255} }},
	{{ {78, 33, -34}, 0, {368, 496}, {196, 145, 14, 255} }},
	{{ {106, 16, -44}, 0, {368, 496}, {22, 195, 147, 255} }},
	{{ {82, 49, -32}, 0, {624, 496}, {91, 51, 183, 255} }},
	{{ {81, 27, -68}, 0, {624, 496}, {76, 172, 199, 255} }},
	{{ {68, 62, -39}, 0, {752, 496}, {93, 57, 191, 255} }},
	{{ {58, 50, -76}, 0, {752, 496}, {88, 52, 180, 255} }},
	{{ {44, 80, -75}, 0, {624, 496}, {211, 87, 175, 255} }},
	{{ {59, 80, -36}, 0, {624, 496}, {88, 56, 183, 255} }},
	{{ {44, 81, -41}, 0, {368, 496}, {130, 238, 1, 255} }},
	{{ {39, 112, -57}, 0, {368, 496}, {221, 20, 136, 255} }},
	{{ {57, 53, -46}, 0, {240, 496}, {165, 202, 70, 255} }},
	{{ {52, 48, -56}, 0, {240, 496}, {155, 190, 39, 255} }},
	{{ {44, 80, -75}, 0, {368, 496}, {211, 87, 175, 255} }},
	{{ {78, 33, -34}, 0, {368, 496}, {196, 145, 14, 255} }},
	{{ {52, 48, -56}, 0, {240, 496}, {155, 190, 39, 255} }},
	{{ {81, 27, -68}, 0, {368, 496}, {76, 172, 199, 255} }},
	{{ {43, 111, -19}, 0, {368, 368}, {149, 232, 64, 255} }},
	{{ {65, 137, -3}, 0, {368, 496}, {50, 104, 54, 255} }},
	{{ {31, 143, -29}, 0, {368, 368}, {179, 100, 246, 255} }},
	{{ {39, 112, -57}, 0, {368, 496}, {221, 20, 136, 255} }},
	{{ {91, 127, 21}, 0, {368, 496}, {251, 127, 2, 255} }},
	{{ {94, 90, 30}, 0, {368, 624}, {183, 217, 96, 255} }},
	{{ {115, 108, 52}, 0, {-16, 1008}, {46, 48, 108, 255} }},
	{{ {128, 74, 29}, 0, {368, 496}, {116, 211, 25, 255} }},
	{{ {110, 102, 32}, 0, {624, 624}, {93, 57, 191, 255} }},
	{{ {91, 127, 21}, 0, {624, 496}, {251, 127, 2, 255} }},
	{{ {128, 74, 29}, 0, {624, 496}, {116, 211, 25, 255} }},
	{{ {103, 27, -7}, 0, {368, 368}, {188, 176, 72, 255} }},
	{{ {130, 3, -9}, 0, {368, 368}, {68, 150, 18, 255} }},
	{{ {133, 42, 10}, 0, {368, 496}, {107, 23, 65, 255} }},
	{{ {106, 16, -44}, 0, {368, 496}, {22, 195, 147, 255} }},
	{{ {44, 80, -75}, 0, {368, 496}, {211, 87, 175, 255} }},
	{{ {46, 39, -90}, 0, {-16, 1008}, {200, 203, 155, 255} }},
	{{ {52, 48, -56}, 0, {368, 624}, {155, 190, 39, 255} }},
	{{ {58, 50, -76}, 0, {624, 624}, {88, 52, 180, 255} }},
	{{ {44, 80, -75}, 0, {624, 496}, {211, 87, 175, 255} }},
	{{ {81, 27, -68}, 0, {624, 496}, {76, 172, 199, 255} }},
	{{ {65, 137, -3}, 0, {624, 496}, {50, 104, 54, 255} }},
	{{ {47, 129, -29}, 0, {624, 368}, {87, 60, 185, 255} }},
	{{ {31, 143, -29}, 0, {624, 496}, {179, 100, 246, 255} }},
	{{ {64, 93, -20}, 0, {624, 368}, {94, 49, 186, 255} }},
	{{ {75, 96, -4}, 0, {624, 496}, {90, 58, 188, 255} }},
	{{ {39, 112, -57}, 0, {624, 496}, {221, 20, 136, 255} }},
	{{ {59, 80, -36}, 0, {624, 496}, {88, 56, 183, 255} }},
	{{ {133, 42, 10}, 0, {624, 496}, {107, 23, 65, 255} }},
	{{ {130, 3, -9}, 0, {624, 496}, {68, 150, 18, 255} }},
	{{ {121, 23, -15}, 0, {624, 368}, {94, 49, 186, 255} }},
	{{ {106, 16, -44}, 0, {624, 496}, {22, 195, 147, 255} }},
	{{ {93, 51, -15}, 0, {624, 368}, {87, 60, 185, 255} }},
	{{ {82, 49, -32}, 0, {624, 496}, {91, 51, 183, 255} }},
	{{ {98, 64, 1}, 0, {624, 496}, {94, 53, 189, 255} }},
};

Gfx beach_flower_Normal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(0, 8, 7, 0, 8, 0, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 14, 15, 13, 0),
	gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
	gsSP2Triangles(4, 17, 14, 0, 4, 14, 3, 0),
	gsSP2Triangles(14, 1, 3, 0, 14, 18, 1, 0),
	gsSP2Triangles(19, 17, 4, 0, 19, 16, 17, 0),
	gsSP2Triangles(19, 20, 16, 0, 19, 21, 20, 0),
	gsSP2Triangles(21, 19, 22, 0, 23, 21, 22, 0),
	gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
	gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
	gsSP2Triangles(27, 28, 26, 0, 6, 28, 27, 0),
	gsSP2Triangles(6, 27, 5, 0, 4, 5, 27, 0),
	gsSP2Triangles(4, 27, 29, 0, 27, 30, 29, 0),
	gsSP2Triangles(27, 31, 30, 0, 19, 29, 30, 0),
	gsSP1Triangle(19, 4, 29, 0),
	gsSPVertex(beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_1 + 32, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 11, 12, 9, 0),
	gsSP2Triangles(11, 9, 13, 0, 14, 15, 16, 0),
	gsSP2Triangles(14, 17, 15, 0, 18, 19, 20, 0),
	gsSP2Triangles(2, 20, 19, 0, 21, 19, 22, 0),
	gsSP2Triangles(21, 23, 19, 0, 24, 25, 26, 0),
	gsSP2Triangles(27, 25, 24, 0, 27, 24, 28, 0),
	gsSP2Triangles(29, 25, 27, 0, 29, 26, 25, 0),
	gsSP1Triangle(29, 27, 30, 0),
	gsSPVertex(beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_1 + 63, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(4, 2, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(0, 2, 4, 0, 0, 4, 6, 0),
	gsSPEndDisplayList(),
};

Vtx beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_2[9] = {
	{{ {75, 96, -4}, 0, {624, 496}, {90, 58, 188, 255} }},
	{{ {82, 75, -20}, 0, {752, 368}, {91, 54, 186, 255} }},
	{{ {64, 93, -20}, 0, {624, 368}, {94, 49, 186, 255} }},
	{{ {89, 83, 4}, 0, {752, 496}, {88, 52, 180, 255} }},
	{{ {98, 64, 1}, 0, {624, 496}, {94, 53, 189, 255} }},
	{{ {93, 51, -15}, 0, {624, 368}, {87, 60, 185, 255} }},
	{{ {82, 49, -32}, 0, {624, 496}, {91, 51, 183, 255} }},
	{{ {68, 62, -39}, 0, {752, 496}, {93, 57, 191, 255} }},
	{{ {59, 80, -36}, 0, {624, 496}, {88, 56, 183, 255} }},
};

Gfx beach_flower_Normal_Cap_DL_mesh_layer_1_tri_2[] = {
	gsSPVertex(beach_flower_Normal_Cap_DL_mesh_layer_1_vtx_2 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(6, 1, 5, 0, 6, 7, 1, 0),
	gsSP2Triangles(8, 1, 7, 0, 8, 2, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_beach_flower_Headband[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(beach_flower_Headband_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_beach_flower_Headband[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_beach_flower_Flower_Petals__CAP_[] = {
	gsSPCopyLightsPlayerPart(CAP),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_beach_flower_Flower_Center__EMBLEM_[] = {
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx beach_flower_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_beach_flower_Headband),
	gsSPDisplayList(beach_flower_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_beach_flower_Headband),
	gsSPDisplayList(mat_beach_flower_Flower_Petals__CAP_),
	gsSPDisplayList(beach_flower_Normal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_beach_flower_Flower_Center__EMBLEM_),
	gsSPDisplayList(beach_flower_Normal_Cap_DL_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx beach_flower_material_revert_render_settings[] = {
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

