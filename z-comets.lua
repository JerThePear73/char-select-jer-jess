local m = gMarioStates[0]
--smlua_text_utils_act_name_replace(22, 6, "Jess Icy Hot Challenge") -- this crashes the game for some reason

local function comets_init(m)
	local Level = gNetworkPlayers[0].currLevelNum
    local Area = gNetworkPlayers[0].currAreaIndex
	local Star = gNetworkPlayers[0].currActNum

	if is_jess() and Level == 22 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		if m.action == ACT_SPAWN_SPIN_LANDING then
			play_sound(SOUND_MENU_EXIT_PIPE, m.marioObj.header.gfx.cameraToObject)
			m.flags = m.flags | MARIO_METAL_CAP
			m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE | PARTICLE_HORIZONTAL_STAR | PARTICLE_SPARKLES
			m.capTimer = 100*30
			djui_chat_message_create("\\#ffff00\\You got the Ice Cap with extended time! \\#ff4422\\Quick, grab 100 coins as fast as you can!")
		end
		if m.action == ACT_STAR_DANCE_EXIT then
			m.action = ACT_STAR_DANCE_NO_EXIT
		end
	end

	if is_jer() and Level == 14 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		if m.action == ACT_SPAWN_SPIN_LANDING then
			play_sound(SOUND_MENU_EXIT_PIPE, m.marioObj.header.gfx.cameraToObject)
			m.flags = m.flags | MARIO_VANISH_CAP
			m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE | PARTICLE_HORIZONTAL_STAR | PARTICLE_SPARKLES
			m.capTimer = 100*30
			djui_chat_message_create("\\#ffff00\\You got the Liminal Cap with extended time! \\#ff4422\\Quick, grab 100 coins as fast as you can!")
		end
		if m.action == ACT_STAR_DANCE_EXIT then
			m.action = ACT_STAR_DANCE_NO_EXIT
		end
	end
end
local function comets_update(m)
	local Level = gNetworkPlayers[0].currLevelNum
    local Area = gNetworkPlayers[0].currAreaIndex
	local Star = gNetworkPlayers[0].currActNum

	if is_jess() and Level == 22 and Area == 1 and Star == 6 and m.playerIndex == 0 then
		warp_to_level(22, 1, 0)
	end
	if is_jer() and Level == 14 and Area == 1 and Star == 6 and m.playerIndex == 0 then
		warp_to_level(14, 1, 0)
	end

	if is_jess() and Level == 22 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		if m.action ~= ACT_SPAWN_SPIN_AIRBORNE and m.action ~= ACT_STANDING_DEATH and m.flags & MARIO_METAL_CAP == 0 and m.pos.y == m.floorHeight and m.action ~= ACT_FALL_AFTER_STAR_GRAB and m.action ~= ACT_STAR_DANCE_NO_EXIT then
			set_mario_action(m, ACT_STANDING_DEATH, 0)
		end
		if m.flags & MARIO_WING_CAP ~= 0 or m.action == ACT_RIDING_SHELL_GROUND then
			m.capTimer = 1
			stop_shell_music()
		end
	end
	if is_jer() and Level == 14 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		if m.action ~= ACT_SPAWN_SPIN_AIRBORNE and m.action ~= ACT_STANDING_DEATH and m.flags & MARIO_VANISH_CAP == 0 and m.pos.y == m.floorHeight and m.action ~= ACT_FALL_AFTER_STAR_GRAB and m.action ~= ACT_STAR_DANCE_NO_EXIT then
			set_mario_action(m, ACT_STANDING_DEATH, 0)
		end
	end
end
local function hud_render()
	local Level = gNetworkPlayers[0].currLevelNum
    local Area = gNetworkPlayers[0].currAreaIndex
	local Star = gNetworkPlayers[0].currActNum
	local screenWidth = djui_hud_get_screen_width()
	local screenHeight = djui_hud_get_screen_height()

	if is_jess() and Level == 22 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		djui_hud_set_color(255, 255, 255, 255)
        djui_hud_set_resolution(RESOLUTION_N64)
        djui_hud_set_font(FONT_HUD)
		if m.capTimer > 0 then
			djui_hud_print_text(string.format("%.0f", m.capTimer/30), 215, 50, 1)
		end
	end
	if is_jer() and Level == 14 and Area == 1 and Star == 0 and m.playerIndex == 0 then
		djui_hud_set_color(255, 255, 255, 255)
        djui_hud_set_resolution(RESOLUTION_N64)
        djui_hud_set_font(FONT_HUD)
		if m.capTimer > 0 then
			djui_hud_print_text(string.format("%.0f", m.capTimer/30), 215, 50, 1)
		end
	end
end

hook_event(HOOK_ON_SET_MARIO_ACTION, comets_init)
hook_event(HOOK_MARIO_UPDATE, comets_update)
hook_event(HOOK_ON_HUD_RENDER_BEHIND, hud_render)