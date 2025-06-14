local gStateExtras = {}
for i = 0, (MAX_PLAYERS - 1) do
    gStateExtras[i] = {}
    local m = gMarioStates[i]
    IceTimer = 0
    VanishTimer = 0
end

ICE_CAP_MUSIC = audio_stream_load("ice_cap_theme.mp3")
VANISH_CAP_MUSIC = audio_stream_load("vanish_cap_theme.mp3")

local function get_cap_volume()
    local m = gMarioStates[0]
    
    if (is_jess() and (m.flags & MARIO_METAL_CAP) ~= 0) or (is_jer() and (m.flags & MARIO_VANISH_CAP) ~= 0) then
        if m.capTimer < (3 * 30) then
            return m.capTimer / 90
        end
    end

    if is_game_paused() or m.action == ACT_START_SLEEPING or m.action == ACT_SLEEPING or m.actionTimer < 80 and
        (m.action == ACT_STAR_DANCE_EXIT or m.action == ACT_STAR_DANCE_NO_EXIT or m.action == ACT_STAR_DANCE_WATER) then
        return 0.2
    end

    return 1
end   

function themes(m)
    local m = gMarioStates[0]
   
    if IceTimer > 0 then
        stop_cap_music()
        play_cap_music(0)
    elseif IceTimer == 0 and (m.flags & MARIO_WING_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_METAL_CAP) == 0 then
        if _G.FireFlowerLoaded then
            if _G.fireTimer == 0 then
                stop_cap_music()
            end
        else
            stop_cap_music()
        end
    end

    if is_jess() then
        if (m.flags & MARIO_METAL_CAP) ~= 0 then
            IceTimer = IceTimer + 1
            audio_stream_play(ICE_CAP_MUSIC, false, get_cap_volume())
        else
            audio_stream_stop(ICE_CAP_MUSIC)
            IceTimer = 0
        end 
    else
        audio_stream_stop(ICE_CAP_MUSIC)
        IceTimer = 0
    end



    if VanishTimer > 0 then
        stop_cap_music()
        play_cap_music(0)
    elseif VanishTimer == 0 and (m.flags & MARIO_WING_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_METAL_CAP) == 0 then
        if _G.FireFlowerLoaded then
            if _G.fireTimer == 0 then
                stop_cap_music()
            end
        else
            stop_cap_music()
        end
    end

    if is_jer() then
        if (m.flags & MARIO_VANISH_CAP) ~= 0 then
            VanishTimer = VanishTimer + 1
            audio_stream_play(VANISH_CAP_MUSIC, false, get_cap_volume())
        else
            audio_stream_stop(VANISH_CAP_MUSIC)
            VanishTimer = 0
        end
    else
        audio_stream_stop(VANISH_CAP_MUSIC)
        VanishTimer = 0
    end
end

hook_event(HOOK_UPDATE, themes)


hook_event(HOOK_ON_PLAY_SOUND, function (id)
	local m = gMarioStates[0]
    if is_jess() then
        if id == SOUND_ACTION_METAL_STEP or id == SOUND_ACTION_METAL_JUMP or id == SOUND_ACTION_METAL_STEP_WATER or id == SOUND_ACTION_METAL_STEP_TIPTOE or id == SOUND_ACTION_METAL_LAND_WATER or id == SOUND_ACTION_METAL_LANDING or id == SOUND_ACTION_METAL_JUMP_WATER or id == SOUND_ACTION_METAL_HEAVY_LANDING or id == SOUND_ACTION_METAL_BONK then
            play_sound(SOUND_TERRAIN_ICE, m.marioObj.header.gfx.cameraToObject)
            return NO_SOUND
        end
    end
end)