Lights1 jj_cap_jer_metal_Metal_Flower_Stem_lights = gdSPDefLights1(
	0x20, 0x20, 0xD,
	0x4A, 0x49, 0x25, 0x28, 0x28, 0x28);

Lights1 jj_cap_jer_metal_Metal_Flower_Leaf_lights = gdSPDefLights1(
	0x20, 0x20, 0xD,
	0x4A, 0x49, 0x25, 0x28, 0x28, 0x28);

Gfx jj_cap_jer_metal_JerMetal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_metal_JerMetal_rgba16[] = {
	#include "actors/jj_cap_jer_metal/JerMetal.rgba16.inc.c"
};

Gfx jj_cap_jer_metal_FlowerEyesMetal_ia8_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_metal_FlowerEyesMetal_ia8[] = {
	#include "actors/jj_cap_jer_metal/FlowerEyesMetal.ia8.inc.c"
};

Gfx jj_cap_jer_metal_FlowerLeaves_ia8_aligner[] = {gsSPEndDisplayList()};
u8 jj_cap_jer_metal_FlowerLeaves_ia8[] = {
	#include "actors/jj_cap_jer_metal/FlowerLeaves.ia8.inc.c"
};

Vtx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_0[23] = {
	{{ {32, 0, -4}, 0, {624, 752}, {204, 142, 22, 255} }},
	{{ {0, 0, 28}, 0, {368, 368}, {254, 129, 248, 255} }},
	{{ {0, 0, -36}, 0, {624, 880}, {254, 129, 8, 255} }},
	{{ {0, 0, -36}, 0, {112, 368}, {254, 129, 8, 255} }},
	{{ {-32, 0, -4}, 0, {240, 496}, {95, 178, 32, 255} }},
	{{ {0, 0, 28}, 0, {624, 368}, {4, 53, 115, 255} }},
	{{ {32, 0, -4}, 0, {624, 496}, {77, 91, 213, 255} }},
	{{ {14, 49, -4}, 0, {624, 496}, {102, 26, 70, 255} }},
	{{ {0, 49, 10}, 0, {624, 368}, {255, 40, 120, 255} }},
	{{ {9, 111, -4}, 0, {624, 496}, {103, 244, 73, 255} }},
	{{ {0, 111, 5}, 0, {624, 368}, {0, 10, 127, 255} }},
	{{ {-9, 111, -4}, 0, {624, 496}, {153, 244, 183, 255} }},
	{{ {-14, 49, -4}, 0, {624, 496}, {152, 20, 186, 255} }},
	{{ {-32, 0, -4}, 0, {624, 496}, {248, 113, 199, 255} }},
	{{ {14, 49, -4}, 0, {624, 752}, {102, 26, 70, 255} }},
	{{ {0, 111, -13}, 0, {624, 880}, {0, 10, 129, 255} }},
	{{ {9, 111, -4}, 0, {624, 752}, {103, 244, 73, 255} }},
	{{ {0, 49, -18}, 0, {624, 880}, {255, 40, 136, 255} }},
	{{ {32, 0, -4}, 0, {624, 752}, {77, 91, 213, 255} }},
	{{ {0, 0, -36}, 0, {624, 880}, {4, 53, 141, 255} }},
	{{ {-32, 0, -4}, 0, {624, 752}, {248, 113, 199, 255} }},
	{{ {-14, 49, -4}, 0, {624, 752}, {152, 20, 186, 255} }},
	{{ {-9, 111, -4}, 0, {624, 752}, {153, 244, 183, 255} }},
};

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_0 + 0, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
	gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(8, 10, 11, 0, 8, 11, 12, 0),
	gsSP2Triangles(5, 8, 12, 0, 5, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
	gsSP2Triangles(18, 17, 14, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 17, 19, 0, 20, 21, 17, 0),
	gsSP2Triangles(21, 15, 17, 0, 21, 22, 15, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_1[108] = {
	{{ {9, 111, -4}, 0, {1532, 764}, {61, 146, 237, 255} }},
	{{ {46, 139, -47}, 0, {1532, 764}, {61, 146, 237, 255} }},
	{{ {62, 139, -4}, 0, {1276, 764}, {61, 146, 237, 255} }},
	{{ {9, 111, -4}, 0, {1276, 764}, {61, 146, 19, 255} }},
	{{ {62, 139, -4}, 0, {1276, 764}, {61, 146, 19, 255} }},
	{{ {46, 139, 39}, 0, {1020, 764}, {61, 146, 19, 255} }},
	{{ {0, 214, -104}, 0, {-260, 1788}, {49, 0, 139, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {49, 0, 139, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {49, 0, 139, 255} }},
	{{ {0, 214, -104}, 0, {-260, 1788}, {207, 0, 139, 255} }},
	{{ {-69, 214, -75}, 0, {-260, 1788}, {207, 0, 139, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {207, 0, 139, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {115, 0, 202, 255} }},
	{{ {102, 291, -4}, 0, {-260, 1788}, {115, 0, 202, 255} }},
	{{ {102, 214, -4}, 0, {-260, 1788}, {115, 0, 202, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {68, 85, 65, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {68, 85, 65, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {68, 85, 65, 255} }},
	{{ {69, 214, -75}, 0, {-260, 1788}, {190, 88, 192, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {190, 88, 192, 255} }},
	{{ {102, 291, -4}, 0, {-260, 1788}, {190, 88, 192, 255} }},
	{{ {102, 214, -4}, 0, {-260, 1788}, {115, 0, 54, 255} }},
	{{ {102, 291, -4}, 0, {-260, 1788}, {115, 0, 54, 255} }},
	{{ {69, 214, 67}, 0, {-260, 1788}, {115, 0, 54, 255} }},
	{{ {0, 214, 96}, 0, {-260, 1788}, {49, 0, 117, 255} }},
	{{ {69, 214, 67}, 0, {-260, 1788}, {49, 0, 117, 255} }},
	{{ {0, 291, 96}, 0, {-260, 1788}, {49, 0, 117, 255} }},
	{{ {102, 291, -4}, 0, {-260, 1788}, {190, 88, 64, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {190, 88, 64, 255} }},
	{{ {69, 214, 67}, 0, {-260, 1788}, {190, 88, 64, 255} }},
	{{ {69, 214, 67}, 0, {-260, 1788}, {68, 85, 191, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {68, 85, 191, 255} }},
	{{ {0, 291, 96}, 0, {-260, 1788}, {68, 85, 191, 255} }},
	{{ {0, 214, 96}, 0, {-260, 1788}, {207, 0, 117, 255} }},
	{{ {0, 291, 96}, 0, {-260, 1788}, {207, 0, 117, 255} }},
	{{ {-69, 214, 67}, 0, {-260, 1788}, {207, 0, 117, 255} }},
	{{ {-69, 214, -75}, 0, {-260, 1788}, {188, 85, 65, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {188, 85, 65, 255} }},
	{{ {0, 291, -104}, 0, {-260, 1788}, {188, 85, 65, 255} }},
	{{ {-69, 214, -75}, 0, {-260, 1788}, {66, 88, 192, 255} }},
	{{ {-102, 291, -4}, 0, {-260, 1788}, {66, 88, 192, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {66, 88, 192, 255} }},
	{{ {-102, 291, -4}, 0, {-260, 1788}, {66, 88, 64, 255} }},
	{{ {-69, 214, 67}, 0, {-260, 1788}, {66, 88, 64, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {66, 88, 64, 255} }},
	{{ {-69, 214, 67}, 0, {-260, 1788}, {188, 85, 191, 255} }},
	{{ {0, 291, 96}, 0, {-260, 1788}, {188, 85, 191, 255} }},
	{{ {0, 214, -4}, 0, {-260, 1788}, {188, 85, 191, 255} }},
	{{ {-9, 111, -4}, 0, {1276, 764}, {195, 146, 237, 255} }},
	{{ {-62, 139, -4}, 0, {1276, 764}, {195, 146, 237, 255} }},
	{{ {-46, 139, -47}, 0, {1532, 764}, {195, 146, 237, 255} }},
	{{ {-9, 111, -4}, 0, {1020, 764}, {195, 146, 19, 255} }},
	{{ {-46, 139, 39}, 0, {1020, 764}, {195, 146, 19, 255} }},
	{{ {-62, 139, -4}, 0, {1276, 764}, {195, 146, 19, 255} }},
	{{ {-69, 214, -75}, 0, {-260, 1788}, {141, 0, 202, 255} }},
	{{ {-102, 214, -4}, 0, {-260, 1788}, {141, 0, 202, 255} }},
	{{ {-102, 291, -4}, 0, {-260, 1788}, {141, 0, 202, 255} }},
	{{ {-102, 214, -4}, 0, {-260, 1788}, {141, 0, 54, 255} }},
	{{ {-69, 214, 67}, 0, {-260, 1788}, {141, 0, 54, 255} }},
	{{ {-102, 291, -4}, 0, {-260, 1788}, {141, 0, 54, 255} }},
	{{ {9, 111, -4}, 0, {1020, 1276}, {20, 147, 193, 255} }},
	{{ {0, 111, -13}, 0, {1020, 1532}, {20, 147, 193, 255} }},
	{{ {0, 139, -65}, 0, {1020, 1532}, {20, 147, 193, 255} }},
	{{ {46, 139, -47}, 0, {1020, 1276}, {20, 147, 193, 255} }},
	{{ {-9, 111, -4}, 0, {1020, 1276}, {236, 147, 193, 255} }},
	{{ {0, 139, -65}, 0, {1020, 1532}, {236, 147, 193, 255} }},
	{{ {0, 111, -13}, 0, {1020, 1532}, {236, 147, 193, 255} }},
	{{ {-46, 139, -47}, 0, {1020, 1276}, {236, 147, 193, 255} }},
	{{ {0, 111, 5}, 0, {1020, 508}, {20, 147, 63, 255} }},
	{{ {9, 111, -4}, 0, {1020, 764}, {20, 147, 63, 255} }},
	{{ {46, 139, 39}, 0, {1020, 764}, {20, 147, 63, 255} }},
	{{ {0, 139, 56}, 0, {1020, 508}, {20, 147, 63, 255} }},
	{{ {0, 111, 5}, 0, {1020, 508}, {236, 147, 63, 255} }},
	{{ {0, 139, 56}, 0, {1020, 508}, {236, 147, 63, 255} }},
	{{ {-46, 139, 39}, 0, {1020, 764}, {236, 147, 63, 255} }},
	{{ {-9, 111, -4}, 0, {1020, 764}, {236, 147, 63, 255} }},
	{{ {46, 139, -47}, 0, {1020, 1276}, {43, 202, 150, 255} }},
	{{ {0, 139, -65}, 0, {1020, 1532}, {43, 202, 150, 255} }},
	{{ {0, 214, -104}, 0, {1020, 1532}, {43, 202, 150, 255} }},
	{{ {69, 214, -75}, 0, {1020, 1276}, {43, 202, 150, 255} }},
	{{ {-46, 139, -47}, 0, {1020, 1276}, {213, 202, 150, 255} }},
	{{ {0, 214, -104}, 0, {1020, 1532}, {213, 202, 150, 255} }},
	{{ {0, 139, -65}, 0, {1020, 1532}, {213, 202, 150, 255} }},
	{{ {-69, 214, -75}, 0, {1020, 1276}, {213, 202, 150, 255} }},
	{{ {62, 139, -4}, 0, {1276, 764}, {106, 203, 210, 255} }},
	{{ {46, 139, -47}, 0, {1532, 764}, {106, 203, 210, 255} }},
	{{ {69, 214, -75}, 0, {1532, 764}, {106, 203, 210, 255} }},
	{{ {102, 214, -4}, 0, {1276, 764}, {106, 203, 210, 255} }},
	{{ {0, 139, 56}, 0, {1020, 508}, {43, 202, 106, 255} }},
	{{ {46, 139, 39}, 0, {1020, 764}, {43, 202, 106, 255} }},
	{{ {69, 214, 67}, 0, {1020, 764}, {43, 202, 106, 255} }},
	{{ {0, 214, 96}, 0, {1020, 508}, {43, 202, 106, 255} }},
	{{ {46, 139, 39}, 0, {1020, 764}, {106, 203, 46, 255} }},
	{{ {62, 139, -4}, 0, {1276, 764}, {106, 203, 46, 255} }},
	{{ {102, 214, -4}, 0, {1276, 764}, {106, 203, 46, 255} }},
	{{ {69, 214, 67}, 0, {1020, 764}, {106, 203, 46, 255} }},
	{{ {0, 139, 56}, 0, {1020, 508}, {213, 202, 106, 255} }},
	{{ {0, 214, 96}, 0, {1020, 508}, {213, 202, 106, 255} }},
	{{ {-69, 214, 67}, 0, {1020, 764}, {213, 202, 106, 255} }},
	{{ {-46, 139, 39}, 0, {1020, 764}, {213, 202, 106, 255} }},
	{{ {-62, 139, -4}, 0, {1276, 764}, {150, 203, 210, 255} }},
	{{ {-69, 214, -75}, 0, {1532, 764}, {150, 203, 210, 255} }},
	{{ {-46, 139, -47}, 0, {1532, 764}, {150, 203, 210, 255} }},
	{{ {-102, 214, -4}, 0, {1276, 764}, {150, 203, 210, 255} }},
	{{ {-46, 139, 39}, 0, {1020, 764}, {150, 203, 46, 255} }},
	{{ {-69, 214, 67}, 0, {1020, 764}, {150, 203, 46, 255} }},
	{{ {-102, 214, -4}, 0, {1276, 764}, {150, 203, 46, 255} }},
	{{ {-62, 139, -4}, 0, {1276, 764}, {150, 203, 46, 255} }},
};

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_1 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_1 + 30, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_1 + 60, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_vtx_1 + 92, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_vtx_0[6] = {
	{{ {0, 139, 57}, 0, {510, 799}, {255, 255, 255, 255} }},
	{{ {57, 139, 37}, 0, {927, 802}, {255, 255, 255, 255} }},
	{{ {80, 214, 65}, 0, {1007, 248}, {255, 255, 255, 255} }},
	{{ {0, 214, 96}, 0, {504, 258}, {255, 255, 255, 255} }},
	{{ {-80, 214, 65}, 0, {1007, 248}, {255, 255, 255, 255} }},
	{{ {-57, 139, 37}, 0, {927, 802}, {255, 255, 255, 255} }},
};

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_vtx_1[15] = {
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

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_vtx_1 + 0, 15, 0),
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


Gfx mat_jj_cap_jer_metal_Metal_Flower_Stem[] = {
	gsSPSetLights1(jj_cap_jer_metal_Metal_Flower_Stem_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jer_metal_Metal[] = {
	gsSPGeometryMode(G_SHADE, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 4032, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, jj_cap_jer_metal_JerMetal_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 4095, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_metal_Metal[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_SHADE),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jer_metal_Metal_Flower_Eyes_Texture[] = {
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, jj_cap_jer_metal_FlowerEyesMetal_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_metal_Metal_Flower_Eyes_Texture[] = {
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jj_cap_jer_metal_Metal_Flower_Leaf[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(jj_cap_jer_metal_Metal_Flower_Leaf_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, jj_cap_jer_metal_FlowerLeaves_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 2048),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jj_cap_jer_metal_Metal_Flower_Leaf[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_jj_cap_jer_metal_Metal_Flower_Stem),
	gsSPDisplayList(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_jj_cap_jer_metal_Metal),
	gsSPDisplayList(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_jj_cap_jer_metal_Metal),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_jj_cap_jer_metal_Metal_Flower_Eyes_Texture),
	gsSPDisplayList(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jj_cap_jer_metal_Metal_Flower_Eyes_Texture),
	gsSPDisplayList(mat_jj_cap_jer_metal_Metal_Flower_Leaf),
	gsSPDisplayList(jj_cap_jer_metal_Metal_Cap_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_jj_cap_jer_metal_Metal_Flower_Leaf),
	gsSPEndDisplayList(),
};

Gfx jj_cap_jer_metal_material_revert_render_settings[] = {
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

