if not _G.charSelectExists then return end

local gStateExtras = {}
for i = 0, (MAX_PLAYERS - 1) do
    gStateExtras[i] = {}
    local m = gMarioStates[i]
    IceTimer = 0
    VanishTimer = 0
    MagmaTimer = 0
end

MUSIC_ICE = audio_stream_load("jj_music_ice_flower.ogg")
MUSIC_LIMINAL = audio_stream_load("jj_music_liminal_flower.ogg")
MUSIC_MAGMA = audio_stream_load("jj_music_magma_flower.ogg")

local BITRATE = 22050
local START = 1.669*BITRATE
local END = 67.894*BITRATE

audio_stream_set_loop_points(MUSIC_ICE, START, END)
audio_stream_set_loop_points(MUSIC_LIMINAL, START, END)
audio_stream_set_loop_points(MUSIC_MAGMA, START, END)
audio_stream_set_looping(MUSIC_ICE, true)
audio_stream_set_looping(MUSIC_LIMINAL, true)
audio_stream_set_looping(MUSIC_MAGMA, true)

local function get_cap_volume()
    local m = gMarioStates[0]
    
    if (is_jess() and (m.flags & MARIO_METAL_CAP) ~= 0) or (is_jer() and (m.flags & MARIO_VANISH_CAP) ~= 0) or (is_davy() and (m.flags & MARIO_METAL_CAP) ~= 0) then
        if m.capTimer < (3 * 30) then
            return m.capTimer / 90
        end
    end

    if is_game_paused() or m.action == ACT_START_SLEEPING or m.action == ACT_SLEEPING or m.actionTimer < 80 and
        (m.action == ACT_STAR_DANCE_EXIT or m.action == ACT_STAR_DANCE_NO_EXIT or m.action == ACT_STAR_DANCE_WATER) then
        return 0.2
    end

    if _G.charSelect.is_menu_open() then
        return 0
    end

    return 1
end   

function themes(m)
    local m = gMarioStates[0]
   
    if IceTimer > 0 then
        stop_cap_music()
        play_cap_music(0)
    elseif IceTimer == 0 and (m.flags & MARIO_WING_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_METAL_CAP) == 0 then
        stop_cap_music()
    end

    if is_jess() then
        if (m.flags & MARIO_METAL_CAP) ~= 0 then
            IceTimer = IceTimer + 1
            audio_stream_play(MUSIC_ICE, false, get_cap_volume())
        else
            audio_stream_stop(MUSIC_ICE)
            IceTimer = 0
        end 
    else
        audio_stream_stop(MUSIC_ICE)
        IceTimer = 0
    end



    if VanishTimer > 0 then
        stop_cap_music()
        play_cap_music(0)
    elseif VanishTimer == 0 and (m.flags & MARIO_WING_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_METAL_CAP) == 0 then
        stop_cap_music()
    end

    if is_jer() then
        if (m.flags & MARIO_VANISH_CAP) ~= 0 then
            VanishTimer = VanishTimer + 1
            audio_stream_play(MUSIC_LIMINAL, false, get_cap_volume())
        else
            audio_stream_stop(MUSIC_LIMINAL)
            VanishTimer = 0
        end
    else
        audio_stream_stop(MUSIC_LIMINAL)
        VanishTimer = 0
    end

    if MagmaTimer > 0 then
        stop_cap_music()
        play_cap_music(0)
    elseif MagmaTimer == 0 and (m.flags & MARIO_WING_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_METAL_CAP) == 0 then
        stop_cap_music()
    end

    if is_davy() then
        if (m.flags & MARIO_METAL_CAP) ~= 0 then
            MagmaTimer = MagmaTimer + 1
            audio_stream_play(MUSIC_MAGMA, false, get_cap_volume())
        else
            audio_stream_stop(MUSIC_MAGMA)
            MagmaTimer = 0
        end 
    else
        audio_stream_stop(MUSIC_MAGMA)
        MagmaTimer = 0
    end
end

hook_event(HOOK_UPDATE, themes)


hook_event(HOOK_ON_PLAY_SOUND, function(id)
	local m = gMarioStates[0]
    if is_jess() then
        if id == SOUND_ACTION_METAL_STEP or id == SOUND_ACTION_METAL_JUMP or id == SOUND_ACTION_METAL_STEP_WATER or id == SOUND_ACTION_METAL_STEP_TIPTOE or id == SOUND_ACTION_METAL_LAND_WATER or id == SOUND_ACTION_METAL_LANDING or id == SOUND_ACTION_METAL_JUMP_WATER or id == SOUND_ACTION_METAL_HEAVY_LANDING or id == SOUND_ACTION_METAL_BONK then
            return SOUND_OBJ_BULLY_WALK
        end
    end
end)