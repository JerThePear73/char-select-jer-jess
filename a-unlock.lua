-------------------
-- Davy Unlock!! --
-- Spoilerss!!!! --
-------------------

local STORAGE_DAVY_UNLOCK = "davyUnlockProgress"
local davyProgress = mod_storage_load_number(STORAGE_DAVY_UNLOCK)
local darkTimer = 0

local davy_laugh = audio_sample_load("davy_laugh.ogg")

local function unlock_progress()
	if davyProgress == 7 then
		return true
	else
		local m = gMarioStates[0]
		local LEVEL = gNetworkPlayers[0].currLevelNum
		if davyProgress == 0 then
			if LEVEL == 9 and m.numCoins == 0 then
				davyProgress = davyProgress + 1
			end
		elseif davyProgress == 1 then
			if m.numCoins == 69 then
				davyProgress = davyProgress + 1
			elseif LEVEL ~= 9 then
				davyProgress = 0
			end
		elseif davyProgress == 2 then
			if (LEVEL ~= 9 and LEVEL ~= 6 and LEVEL ~= 26 and LEVEL ~= 16) or m.action == ACT_FALL_AFTER_STAR_GRAB or m.action == ACT_EXIT_AIRBORNE then
				davyProgress = 0
			end
			if LEVEL == 26 and (m.action == ACT_DROWNING or m.action == ACT_WATER_DEATH) then
				audio_sample_play(davy_laugh, m.pos, 0.5)
				davyProgress = 4
			end
		elseif davyProgress == 4 then
			set_volume_level(0)
			if LEVEL ~= 4 and LEVEL ~= 6 and LEVEL ~= 26 and LEVEL ~= 16 then
				davyProgress = 0
			end
			if LEVEL == 4 and m.pos.x > 3125 and m.pos.z < 600 and m.action == ACT_SQUISHED then
				davyProgress = davyProgress + 1
			end
		elseif davyProgress == 5 then
			warp_to_level(26, 1, 1)
			darkTimer = darkTimer + 1
			if darkTimer > 150 then
				davyProgress = davyProgress + 1
				darkTimer = 0
				--djui_chat_message_create("You can now play as \\#ff8000\\Davy")
				return true
			end
		end
	end
	return false
end

local function davy_unlock_cutscene(m)
	-- Only for Save Resets
	if davyProgress == -1 then
		mod_storage_save_number(STORAGE_DAVY_UNLOCK, 0)
		davyProgress = 0
	end

	if davyProgress == 6 then
		-- Unlock Cutscene
		_G.charSelect.character_set_current_number(CT_DAVY)
		m.pos.x = 0
		m.pos.y = 0
		m.pos.z = -1500
		m.faceAngle.y = -32768
		play_sound_with_freq_scale(SOUND_MENU_COLLECT_SECRET, m.pos, 0.9)
		set_mario_action(m, ACT_SPECIAL_EXIT_AIRBORNE, 0)
		set_volume_level(1)

		-- Save Progress, Don't repeat
		mod_storage_save_number(STORAGE_DAVY_UNLOCK, 7)
		davyProgress = 7
	end
end
hook_event(HOOK_MARIO_UPDATE, davy_unlock_cutscene)
hook_event(HOOK_ON_MODS_LOADED, function()
	_G.charSelect.character_set_locked(CT_DAVY, unlock_progress, true)
end)

function davy_relock_fuck_you()
	davyProgress = -1
	djui_chat_message_create("[Davy save reset]")
	return true
end
_G.charSelect.hook_on_save_data_reset(davy_relock_fuck_you)