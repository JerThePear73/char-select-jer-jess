#include "src/game/envfx_snow.h"

const GeoLayout helmet_Normal_Cap_State_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, helmet_Normal_Cap_DL_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout helmet_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(LAYER_ALPHA + 3, geo_mario_set_player_colors),
				GEO_ASM(LAYER_OPAQUE + 3, geo_mario_set_player_colors),
				GEO_ASM(LAYER_TRANSPARENT + 3, geo_mario_set_player_colors),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, helmet_Normal_Cap_DL_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, helmet_Normal_Cap_State_Switch_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, helmet_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, helmet_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
