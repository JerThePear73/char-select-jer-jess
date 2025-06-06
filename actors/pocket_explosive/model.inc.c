Lights1 pocket_explosive_Bob_omb_Feet_lights = gdSPDefLights1(
	0x0, 0x68, 0x42,
	0xA0, 0xFF, 0x4F, 0x28, 0x28, 0x28);

Lights1 pocket_explosive_Bob_omb_Metal_lights = gdSPDefLights1(
	0xB8, 0x5C, 0x0,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pocket_explosive_Bob_omb_Fuse_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pocket_explosive_Bob_omb_Body_lights = gdSPDefLights1(
	0x17, 0x10, 0x21,
	0x4B, 0x4B, 0x4B, 0x28, 0x28, 0x28);

Gfx pocket_explosive_bomb_eyes_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pocket_explosive_bomb_eyes_rgba16[] = {
	#include "actors/pocket_explosive/bomb_eyes.rgba16.inc.c"
};

Vtx pocket_explosive_000_offset_005_mesh_layer_1_vtx_0[22] = {
	{{ {0, 28, 29}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {41, 28, 16}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {41, 28, -16}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {0, 28, -29}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-57, 28, 13}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-57, 28, -12}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {47, 2, -27}, 0, {-16, -16}, {96, 244, 174, 255} }},
	{{ {41, 28, -16}, 0, {-16, -16}, {74, 93, 212, 255} }},
	{{ {41, 28, 16}, 0, {-16, -16}, {73, 93, 48, 255} }},
	{{ {0, 28, -29}, 0, {-16, -16}, {253, 95, 172, 255} }},
	{{ {-1, 2, -35}, 0, {-16, -16}, {250, 248, 129, 255} }},
	{{ {31, -25, -17}, 0, {-16, -16}, {53, 152, 206, 255} }},
	{{ {47, 2, 27}, 0, {-16, -16}, {96, 247, 83, 255} }},
	{{ {-1, 2, 36}, 0, {-16, -16}, {253, 253, 127, 255} }},
	{{ {0, 28, 29}, 0, {-16, -16}, {1, 95, 85, 255} }},
	{{ {-63, 2, 17}, 0, {-16, -16}, {156, 214, 66, 255} }},
	{{ {-57, 28, 13}, 0, {-16, -16}, {184, 88, 57, 255} }},
	{{ {-57, 28, -12}, 0, {-16, -16}, {184, 89, 201, 255} }},
	{{ {-63, 2, -16}, 0, {-16, -16}, {156, 213, 191, 255} }},
	{{ {-6, -21, -26}, 0, {-16, -16}, {234, 156, 181, 255} }},
	{{ {-6, -21, 27}, 0, {-16, -16}, {234, 156, 75, 255} }},
	{{ {31, -25, 17}, 0, {-16, -16}, {53, 151, 48, 255} }},
};

Gfx pocket_explosive_000_offset_005_mesh_layer_1_tri_0[] = {
	gsSPVertex(pocket_explosive_000_offset_005_mesh_layer_1_vtx_0 + 0, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 10, 6, 11, 0),
	gsSP2Triangles(12, 11, 6, 0, 6, 8, 12, 0),
	gsSP2Triangles(13, 12, 8, 0, 13, 8, 14, 0),
	gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
	gsSP2Triangles(10, 18, 17, 0, 10, 17, 9, 0),
	gsSP2Triangles(19, 18, 10, 0, 19, 15, 18, 0),
	gsSP2Triangles(19, 20, 15, 0, 19, 21, 20, 0),
	gsSP2Triangles(19, 11, 21, 0, 10, 11, 19, 0),
	gsSP2Triangles(12, 21, 11, 0, 20, 21, 12, 0),
	gsSP2Triangles(20, 12, 13, 0, 13, 15, 20, 0),
	gsSPEndDisplayList(),
};

Vtx pocket_explosive_000_offset_008_mesh_layer_1_vtx_0[22] = {
	{{ {0, 28, 27}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {41, 28, 16}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {41, 28, -16}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {0, 28, -29}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-56, 28, 12}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-56, 28, -14}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {46, 3, -27}, 0, {-16, -16}, {96, 244, 174, 255} }},
	{{ {41, 28, -16}, 0, {-16, -16}, {75, 92, 211, 255} }},
	{{ {41, 28, 16}, 0, {-16, -16}, {74, 91, 49, 255} }},
	{{ {0, 28, -29}, 0, {-16, -16}, {254, 96, 173, 255} }},
	{{ {-1, 3, -36}, 0, {-16, -16}, {252, 250, 129, 255} }},
	{{ {31, -24, -17}, 0, {-16, -16}, {55, 153, 207, 255} }},
	{{ {46, 3, 27}, 0, {-16, -16}, {95, 246, 84, 255} }},
	{{ {-1, 3, 35}, 0, {-16, -16}, {251, 253, 127, 255} }},
	{{ {0, 28, 27}, 0, {-16, -16}, {0, 95, 84, 255} }},
	{{ {-63, 3, 16}, 0, {-16, -16}, {155, 215, 65, 255} }},
	{{ {-56, 28, 12}, 0, {-16, -16}, {186, 89, 56, 255} }},
	{{ {-56, 28, -14}, 0, {-16, -16}, {185, 90, 201, 255} }},
	{{ {-63, 3, -17}, 0, {-16, -16}, {155, 215, 191, 255} }},
	{{ {-6, -21, -27}, 0, {-16, -16}, {236, 155, 181, 255} }},
	{{ {-6, -21, 26}, 0, {-16, -16}, {235, 155, 74, 255} }},
	{{ {31, -24, 17}, 0, {-16, -16}, {55, 152, 49, 255} }},
};

Gfx pocket_explosive_000_offset_008_mesh_layer_1_tri_0[] = {
	gsSPVertex(pocket_explosive_000_offset_008_mesh_layer_1_vtx_0 + 0, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
	gsSP2Triangles(9, 6, 10, 0, 10, 6, 11, 0),
	gsSP2Triangles(12, 11, 6, 0, 6, 8, 12, 0),
	gsSP2Triangles(13, 12, 8, 0, 13, 8, 14, 0),
	gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
	gsSP2Triangles(10, 18, 17, 0, 10, 17, 9, 0),
	gsSP2Triangles(19, 18, 10, 0, 19, 15, 18, 0),
	gsSP2Triangles(19, 20, 15, 0, 19, 21, 20, 0),
	gsSP2Triangles(19, 11, 21, 0, 10, 11, 19, 0),
	gsSP2Triangles(12, 21, 11, 0, 20, 21, 12, 0),
	gsSP2Triangles(20, 12, 13, 0, 13, 15, 20, 0),
	gsSPEndDisplayList(),
};

Vtx pocket_explosive_006_offset_mesh_layer_1_vtx_0[39] = {
	{{ {9, -62, 3}, 0, {-1092, -1092}, {255, 129, 254, 255} }},
	{{ {0, -62, -13}, 0, {-1092, -1092}, {255, 129, 254, 255} }},
	{{ {0, -61, -47}, 0, {-1092, -1092}, {255, 129, 254, 255} }},
	{{ {39, -63, 20}, 0, {-1092, -1092}, {255, 129, 254, 255} }},
	{{ {39, -62, -24}, 0, {-1092, -1092}, {255, 129, 254, 255} }},
	{{ {0, -61, -47}, 0, {-1092, -1092}, {1, 129, 254, 255} }},
	{{ {0, -62, -13}, 0, {-1092, -1092}, {1, 129, 254, 255} }},
	{{ {-9, -62, 3}, 0, {-1092, -1092}, {1, 129, 254, 255} }},
	{{ {-39, -63, 20}, 0, {-1092, -1092}, {1, 129, 254, 255} }},
	{{ {-39, -62, -24}, 0, {-1092, -1092}, {1, 129, 254, 255} }},
	{{ {-39, -25, -23}, 0, {-1092, -1092}, {192, 2, 146, 255} }},
	{{ {0, -24, -46}, 0, {-1092, -1092}, {192, 2, 146, 255} }},
	{{ {0, -61, -47}, 0, {-1092, -1092}, {192, 2, 146, 255} }},
	{{ {-39, -62, -24}, 0, {-1092, -1092}, {192, 2, 146, 255} }},
	{{ {0, -24, -46}, 0, {-1092, -1092}, {64, 2, 146, 255} }},
	{{ {39, -25, -23}, 0, {-1092, -1092}, {64, 2, 146, 255} }},
	{{ {39, -62, -24}, 0, {-1092, -1092}, {64, 2, 146, 255} }},
	{{ {0, -61, -47}, 0, {-1092, -1092}, {64, 2, 146, 255} }},
	{{ {39, -25, -23}, 0, {-1092, -1092}, {127, 0, 0, 255} }},
	{{ {39, -26, 20}, 0, {-1092, -1092}, {127, 0, 0, 255} }},
	{{ {39, -63, 20}, 0, {-1092, -1092}, {127, 0, 0, 255} }},
	{{ {39, -62, -24}, 0, {-1092, -1092}, {127, 0, 0, 255} }},
	{{ {-39, -63, 20}, 0, {-1092, -1092}, {0, 129, 253, 255} }},
	{{ {-9, -62, 3}, 0, {-1092, -1092}, {0, 129, 253, 255} }},
	{{ {9, -62, 3}, 0, {-1092, -1092}, {0, 129, 253, 255} }},
	{{ {39, -63, 20}, 0, {-1092, -1092}, {0, 129, 253, 255} }},
	{{ {0, -64, 42}, 0, {-1092, -1092}, {0, 129, 253, 255} }},
	{{ {-39, -26, 20}, 0, {-1092, -1092}, {129, 0, 0, 255} }},
	{{ {-39, -25, -23}, 0, {-1092, -1092}, {129, 0, 0, 255} }},
	{{ {-39, -62, -24}, 0, {-1092, -1092}, {129, 0, 0, 255} }},
	{{ {-39, -63, 20}, 0, {-1092, -1092}, {129, 0, 0, 255} }},
	{{ {0, -26, 43}, 0, {-1092, -1092}, {192, 254, 110, 255} }},
	{{ {-39, -26, 20}, 0, {-1092, -1092}, {192, 254, 110, 255} }},
	{{ {-39, -63, 20}, 0, {-1092, -1092}, {192, 254, 110, 255} }},
	{{ {0, -64, 42}, 0, {-1092, -1092}, {192, 254, 110, 255} }},
	{{ {39, -26, 20}, 0, {-1092, -1092}, {64, 254, 110, 255} }},
	{{ {0, -26, 43}, 0, {-1092, -1092}, {64, 254, 110, 255} }},
	{{ {0, -64, 42}, 0, {-1092, -1092}, {64, 254, 110, 255} }},
	{{ {39, -63, 20}, 0, {-1092, -1092}, {64, 254, 110, 255} }},
};

Gfx pocket_explosive_006_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(pocket_explosive_006_offset_mesh_layer_1_vtx_0 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 8, 9, 5, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
	gsSP2Triangles(25, 26, 22, 0, 27, 28, 29, 0),
	gsSP1Triangle(27, 29, 30, 0),
	gsSPVertex(pocket_explosive_006_offset_mesh_layer_1_vtx_0 + 31, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx pocket_explosive_006_offset_mesh_layer_1_vtx_1[9] = {
	{{ {0, -62, -13}, 0, {-16, -16}, {0, 135, 216, 255} }},
	{{ {-9, -92, 2}, 0, {-16, -16}, {150, 17, 69, 255} }},
	{{ {-9, -62, 3}, 0, {-16, -16}, {225, 134, 15, 255} }},
	{{ {0, -91, -14}, 0, {-16, -16}, {11, 255, 129, 255} }},
	{{ {9, -62, 3}, 0, {-16, -16}, {31, 134, 15, 255} }},
	{{ {9, -92, 2}, 0, {-16, -16}, {111, 238, 58, 255} }},
	{{ {0, -119, 2}, 0, {-16, -16}, {49, 149, 48, 255} }},
	{{ {-15, -108, 2}, 0, {-16, -16}, {143, 235, 54, 255} }},
	{{ {-7, -113, -14}, 0, {-16, -16}, {232, 193, 148, 255} }},
};

Gfx pocket_explosive_006_offset_mesh_layer_1_tri_1[] = {
	gsSPVertex(pocket_explosive_006_offset_mesh_layer_1_vtx_1 + 0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(2, 5, 4, 0, 2, 1, 5, 0),
	gsSP2Triangles(1, 6, 5, 0, 1, 7, 6, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 3, 8, 0),
	gsSP2Triangles(3, 6, 8, 0, 3, 5, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx pocket_explosive_006_offset_mesh_layer_1_vtx_2[26] = {
	{{ {-56, -16, 56}, 0, {-16, 1008}, {183, 183, 73, 255} }},
	{{ {-69, 40, 69}, 0, {-16, 1008}, {166, 0, 90, 255} }},
	{{ {-95, 40, 0}, 0, {-16, 1008}, {129, 0, 0, 255} }},
	{{ {0, -29, 69}, 0, {-16, 1008}, {0, 166, 90, 255} }},
	{{ {-69, -29, 0}, 0, {-16, 1008}, {166, 166, 0, 255} }},
	{{ {-69, 40, -69}, 0, {-16, 1008}, {166, 0, 166, 255} }},
	{{ {-56, 96, -56}, 0, {-16, 1008}, {183, 73, 183, 255} }},
	{{ {-69, 109, 0}, 0, {-16, 1008}, {166, 90, 0, 255} }},
	{{ {-56, 96, 56}, 0, {-16, 1008}, {183, 73, 73, 255} }},
	{{ {0, 40, 95}, 0, {-16, 1008}, {0, 0, 127, 255} }},
	{{ {56, -16, 56}, 0, {-16, 1008}, {73, 183, 73, 255} }},
	{{ {0, -55, 0}, 0, {-16, 1008}, {0, 129, 0, 255} }},
	{{ {-56, -16, -56}, 0, {-16, 1008}, {183, 183, 183, 255} }},
	{{ {0, 40, -95}, 0, {-16, 1008}, {0, 0, 129, 255} }},
	{{ {0, 109, -69}, 0, {-16, 1008}, {0, 90, 166, 255} }},
	{{ {0, 135, 0}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {0, 109, 69}, 0, {-16, 1008}, {0, 90, 90, 255} }},
	{{ {69, 40, 69}, 0, {-16, 1008}, {90, 0, 90, 255} }},
	{{ {69, -29, 0}, 0, {-16, 1008}, {90, 166, 0, 255} }},
	{{ {0, -29, -69}, 0, {-16, 1008}, {0, 166, 166, 255} }},
	{{ {69, 40, -69}, 0, {-16, 1008}, {90, 0, 166, 255} }},
	{{ {56, 96, -56}, 0, {-16, 1008}, {73, 73, 183, 255} }},
	{{ {69, 109, 0}, 0, {-16, 1008}, {90, 90, 0, 255} }},
	{{ {56, 96, 56}, 0, {-16, 1008}, {73, 73, 73, 255} }},
	{{ {95, 40, 0}, 0, {-16, 1008}, {127, 0, 0, 255} }},
	{{ {56, -16, -56}, 0, {-16, 1008}, {73, 183, 183, 255} }},
};

Gfx pocket_explosive_006_offset_mesh_layer_1_tri_2[] = {
	gsSPVertex(pocket_explosive_006_offset_mesh_layer_1_vtx_2 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 0, 2, 4, 0),
	gsSP2Triangles(4, 2, 5, 0, 2, 6, 5, 0),
	gsSP2Triangles(2, 7, 6, 0, 1, 7, 2, 0),
	gsSP2Triangles(1, 8, 7, 0, 9, 8, 1, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 9, 3, 0),
	gsSP2Triangles(11, 10, 3, 0, 4, 11, 3, 0),
	gsSP2Triangles(12, 11, 4, 0, 4, 5, 12, 0),
	gsSP2Triangles(12, 5, 13, 0, 5, 14, 13, 0),
	gsSP2Triangles(5, 6, 14, 0, 14, 6, 7, 0),
	gsSP2Triangles(14, 7, 15, 0, 15, 7, 8, 0),
	gsSP2Triangles(15, 8, 16, 0, 9, 16, 8, 0),
	gsSP2Triangles(17, 16, 9, 0, 10, 17, 9, 0),
	gsSP2Triangles(18, 17, 10, 0, 11, 18, 10, 0),
	gsSP2Triangles(19, 18, 11, 0, 12, 19, 11, 0),
	gsSP2Triangles(12, 13, 19, 0, 19, 13, 20, 0),
	gsSP2Triangles(13, 21, 20, 0, 13, 14, 21, 0),
	gsSP2Triangles(21, 14, 15, 0, 21, 15, 22, 0),
	gsSP2Triangles(22, 15, 16, 0, 22, 16, 23, 0),
	gsSP2Triangles(17, 23, 16, 0, 24, 23, 17, 0),
	gsSP2Triangles(18, 24, 17, 0, 25, 24, 18, 0),
	gsSP2Triangles(19, 25, 18, 0, 19, 20, 25, 0),
	gsSP2Triangles(25, 20, 24, 0, 20, 22, 24, 0),
	gsSP2Triangles(20, 21, 22, 0, 24, 22, 23, 0),
	gsSPEndDisplayList(),
};

Vtx pocket_explosive_000_offset_009_mesh_layer_4_vtx_0[6] = {
	{{ {84, 4, -71}, 0, {-16, -16}, {125, 0, 233, 255} }},
	{{ {84, 78, -71}, 0, {-16, 496}, {125, 0, 233, 255} }},
	{{ {97, 78, 0}, 0, {496, 496}, {127, 0, 0, 255} }},
	{{ {97, 4, 0}, 0, {496, -16}, {127, 0, 0, 255} }},
	{{ {84, 78, 72}, 0, {1008, 496}, {125, 0, 22, 255} }},
	{{ {84, 4, 72}, 0, {1008, -16}, {125, 0, 22, 255} }},
};

Gfx pocket_explosive_000_offset_009_mesh_layer_4_tri_0[] = {
	gsSPVertex(pocket_explosive_000_offset_009_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pocket_explosive_Bob_omb_Feet[] = {
	gsSPSetLights1(pocket_explosive_Bob_omb_Feet_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_pocket_explosive_Bob_omb_Metal[] = {
	gsSPSetLights1(pocket_explosive_Bob_omb_Metal_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(960, 960, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_pocket_explosive_Bob_omb_Fuse[] = {
	gsSPSetLights1(pocket_explosive_Bob_omb_Fuse_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_pocket_explosive_Bob_omb_Body[] = {
	gsSPSetLights1(pocket_explosive_Bob_omb_Body_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_pocket_explosive_Bob_omb_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pocket_explosive_bomb_eyes_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPEndDisplayList(),
};

Gfx pocket_explosive_000_offset_005_mesh_layer_1[] = {
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Feet),
	gsSPDisplayList(pocket_explosive_000_offset_005_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx pocket_explosive_000_offset_008_mesh_layer_1[] = {
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Feet),
	gsSPDisplayList(pocket_explosive_000_offset_008_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx pocket_explosive_006_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Metal),
	gsSPDisplayList(pocket_explosive_006_offset_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Fuse),
	gsSPDisplayList(pocket_explosive_006_offset_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Body),
	gsSPDisplayList(pocket_explosive_006_offset_mesh_layer_1_tri_2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx pocket_explosive_000_offset_009_mesh_layer_4[] = {
	gsSPDisplayList(mat_pocket_explosive_Bob_omb_Eyes),
	gsSPDisplayList(pocket_explosive_000_offset_009_mesh_layer_4_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

