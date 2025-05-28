local ACT_ELEGANT_JUMP = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION | ACT_FLAG_CONTROL_JUMP_HEIGHT) -- Credit: Character Movesets; By: steven3004
local ACT_WALL_SLIDE = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_MOVING | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION) -- Credit: Character Movesets; By: steven3004

local ACT_ICE_SKATING = allocate_mario_action(ACT_GROUP_MOVING | ACT_FLAG_MOVING | ACT_FLAG_ATTACKING | ACT_FLAG_RIDING_SHELL)
local ACT_JERNADO = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR)
local ACT_FLUDD_HOVER = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_CONTROL_JUMP_HEIGHT)
local ACT_SPRINGFLIP = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION)
local ACT_CARTWHEEL = allocate_mario_action(ACT_GROUP_MOVING | ACT_FLAG_MOVING | ACT_FLAG_ATTACKING)
local ACT_GALAXY_SPIN = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR | ACT_FLAG_ATTACKING)

local function limit_angle(a)
    return (a + 0x8000) % 0x10000 - 0x8000
end

local jessMaxWater = 3000
local jessMaxHover = 75

gJerJessExtraStates = {}
local function jer_jess_reset_extra_states(index)
    if index == nil then index = 0 end
    gJerJessExtraStates[index] = {
        index = network_global_index_from_local(0),
        canJernado = true,
        jerBoost = 0,
        jessWater = 0,
        jessHover = 0,
        jessPrevVel = 0,
        fluddSoundLoop = false,
        stepTimer = 0,
        stepMax = 5,
        twirlNerf = false,
        wheelAccel = 0,
        wheelSpeed = 0,
        prevAction = 0,
        animArg = 0,
        rotAngle = 0,
    }
    if gNetworkPlayers[0].currLevelNum == 29 then 
        gJerJessExtraStates[index].jessWater = jessMaxWater
        gJerJessExtraStates[index].jessHover = jessMaxHover  
    end
end
for i = 0, MAX_PLAYERS - 1 do
    jer_jess_reset_extra_states(i)
end

local SOUND_JER_BOOST_PULSE = audio_sample_load("jer_boost_pulse.mp3")
local SOUND_JER_BOOST_HOLD = audio_sample_load("jer_boost_hold.mp3")
local SOUND_FLUDD_PICKUP = audio_sample_load("fludd_pickup.mp3")
local SOUND_FLUDD_HOVER = audio_sample_load("fludd_hover.mp3")
local SOUND_FLUDD_HOVER_END = audio_sample_load("fludd_hover_end.mp3")
local SOUND_FLUDD_LOOP = audio_stream_load("fludd_loop.mp3")
local SOUND_COMEDIC_METAL_PIPE = audio_sample_load("pipe.ogg")
local SOUND_ZAP = audio_sample_load("zap.mp3")
local SOUND_WHEEL_STEP = audio_sample_load("wheel_step.mp3")
local SOUND_GALAXY_SPIN = audio_sample_load("smg_spin.mp3") -- this is an edited sound effect from extra characters



------------------
-- CUSTOM MOVES --
------------------

local function act_wall_slide(m)
        if (m.input & INPUT_A_PRESSED) ~= 0 then
            local rc = set_mario_action(m, ACT_WALL_KICK_AIR, 0)
            m.vel.y = 72.0

            if m.forwardVel < 20.0 then
                m.forwardVel = 20.0
            end
            m.wallKickTimer = 0
            return rc
        end

        -- attempt to stick to the wall a bit. if it's 0, sometimes you'll get kicked off of slightly sloped walls
        mario_set_forward_vel(m, -1.0)

        m.particleFlags = m.particleFlags | PARTICLE_DUST

        play_sound(SOUND_MOVING_TERRAIN_SLIDE + m.terrainSoundAddend, m.marioObj.header.gfx.cameraToObject)
        set_mario_animation(m, MARIO_ANIM_START_WALLKICK)

        if perform_air_step(m, 0) == AIR_STEP_LANDED then
            mario_set_forward_vel(m, 0.0)
            if check_fall_damage_or_get_stuck(m, ACT_HARD_BACKWARD_GROUND_KB) == 0 then
                return set_mario_action(m, ACT_FREEFALL_LAND, 0)
            end
        end

        m.actionTimer = m.actionTimer + 1
        if m.wall == nil and m.actionTimer > 2 then
            mario_set_forward_vel(m, 0.0)
            return set_mario_action(m, ACT_FREEFALL, 0)
        end
    
        -- gravity
        m.vel.y = m.vel.y + 2
    
        return 0
end
hook_mario_action(ACT_WALL_SLIDE, act_wall_slide)

local function act_ice_skating(m)
    m.faceAngle.y = m.intendedYaw - approach_s32(limit_angle(m.intendedYaw - m.faceAngle.y), 0, 10, 10)
    perform_ground_step(m)
    update_walking_speed(m)
    set_mario_anim_with_accel(m, MARIO_ANIM_RUNNING_UNUSED, m.forwardVel / 5 * 11000)
    smlua_anim_util_set_animation(m.marioObj, "jess_skating")
    play_sound(SOUND_MOVING_SLIDE_DOWN_POLE, m.marioObj.header.gfx.cameraToObject)
    if m.input & INPUT_NONZERO_ANALOG ~= 0 then
        if m.forwardVel < 55 then
            m.forwardVel = m.forwardVel + 2
        end
    elseif m.forwardVel < 30 then
        m.forwardVel = 30
    end
    if m.forwardVel > 5 then
        m.particleFlags = m.particleFlags | PARTICLE_DUST
    end
    if m.pos.y > (m.waterLevel + 4) then
        set_mario_action(m, ACT_WALKING, 0)
    end
    -- skating jump
    if (m.input & INPUT_A_PRESSED) ~= 0 then
        m.forwardVel = m.forwardVel - 15
        m.vel.y = 55
        m.pos.y = m.pos.y + 4
        set_mario_action(m, ACT_ELEGANT_JUMP, 0)
    end
    -- fall when ice cap ends
    if (m.flags & MARIO_METAL_CAP) == 0 or not is_jess() then
        set_mario_action(m, ACT_FREEFALL, 0)
    end
end
hook_mario_action(ACT_ICE_SKATING, act_ice_skating)

local function act_elegant_jump(m)
    local j = gJerJessExtraStates[m.playerIndex]

    if m.actionTimer == 0 then
        m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE
        play_character_sound(m, CHAR_SOUND_HAHA)
        j.animArg = math.floor(math.random(1,3))
    end
    local stepResult = common_air_action_step(m, ACT_DOUBLE_JUMP_LAND, MARIO_ANIM_RUNNING_UNUSED, 
                                                                AIR_STEP_NONE)
    smlua_anim_util_set_animation(m.marioObj, "jess_ice_jump_" .. tostring(j.animArg))
    m.particleFlags = m.particleFlags | PARTICLE_SPARKLES
    m.marioBodyState.handState = MARIO_HAND_OPEN

    if (m.input & INPUT_NONZERO_ANALOG) ~= 0 then
        mario_set_forward_vel(m, math.abs(m.forwardVel))
    end
    
    if stepResult == AIR_STEP_LANDED then
        play_sound(SOUND_ACTION_TERRAIN_LANDING, m.marioObj.header.gfx.cameraToObject)
        set_mario_action(m, ACT_DOUBLE_JUMP_LAND, 0)
    end

    j.rotAngle = j.rotAngle + 0x1800
    m.marioObj.header.gfx.angle.y = j.rotAngle
    
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_ELEGANT_JUMP, act_elegant_jump)

local function act_jernado(m)

    if (m.flags & MARIO_VANISH_CAP) ~= 0 then
        smlua_anim_util_set_animation(m.marioObj, "jernado_alt")
        m.marioBodyState.eyeState = MARIO_EYES_CLOSED
    else
        smlua_anim_util_set_animation(m.marioObj, "jernado")
    end
    if m.actionTimer == 0 then
        m.faceAngle.y = m.intendedYaw
        play_character_sound(m, CHAR_SOUND_PRESS_START_TO_PLAY)
        if m.input & INPUT_NONZERO_ANALOG ~= 0 then
            m.forwardVel = 5
        end
    elseif m.actionTimer < 35 then
        local stepResult = common_air_action_step(m, ACT_FREEFALL, MARIO_ANIM_RUNNING_UNUSED, AIR_STEP_NONE)

        m.faceAngle.y = m.intendedYaw - approach_s32(limit_angle(m.intendedYaw - m.faceAngle.y), 0, 0x200, 0x200)

        if m.actionTimer == 5 or m.actionTimer == 10 or m.actionTimer == 15 or m.actionTimer == 20 or m.actionTimer == 26 then -- spin sound
            play_sound(SOUND_ACTION_TWIRL, m.marioObj.header.gfx.cameraToObject)
        end

        if m.actionTimer < 20 then
            if m.actionTimer > -1 then
                m.particleFlags = m.particleFlags | PARTICLE_SPARKLES
                m.vel.y = 18 - (m.actionTimer * (m.forwardVel/25))
            end
        else
            m.vel.y = m.vel.y + 3
        end

        if (m.actionTimer > 3 and m.actionTimer < 23) or (m.actionTimer > 27) then
            m.marioBodyState.handState = MARIO_HAND_OPEN
        end

        if stepResult == AIR_STEP_LANDED then
            set_mario_action(m, ACT_FREEFALL_LAND, 0)
        end
    else
        set_mario_action(m, ACT_FREEFALL, 0)
    end

    if (m.input & INPUT_NONZERO_ANALOG) ~= 0 then
        mario_set_forward_vel(m, math.abs(m.forwardVel))
    end
  
    
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_JERNADO, act_jernado)

local function act_fludd_hover(m)
    local j = gJerJessExtraStates[m.playerIndex]
        
    local stepResult = common_air_action_step(m, ACT_FREEFALL, MARIO_ANIM_RUNNING_UNUSED, AIR_STEP_NONE)
    smlua_anim_util_set_animation(m.marioObj, "jess_fludd_hover")
    m.faceAngle.y = m.intendedYaw - approach_s32(limit_angle(m.intendedYaw - m.faceAngle.y), 0, 0x400, 0x400)
    m.particleFlags = m.particleFlags | PARTICLE_SNOW
    if j.jessHover > 45 then
        m.vel.y = (j.jessHover/2) - 20.5
    else
        m.vel.y = 2
    end
    if m.forwardVel > 30 then
        m.forwardVel = m.forwardVel - 1
    end
    if stepResult == AIR_STEP_LANDED then
        set_mario_action(m, ACT_FREEFALL_LAND, 0)
        audio_sample_play(SOUND_FLUDD_HOVER_END, m.pos, 1)
    end
    if (m.input & INPUT_A_DOWN) == 0 or j.jessHover < 1 then
        
        if m.actionTimer < 73 then
            audio_sample_play(SOUND_FLUDD_HOVER_END, m.pos, 1)
        end
        set_mario_action(m, ACT_FREEFALL, 0)
    end
    if (m.input & INPUT_Z_PRESSED) ~= 0 then
        set_mario_action(m, ACT_GROUND_POUND, 0)
    end
    if (m.input & INPUT_B_PRESSED) ~= 0 then
        set_mario_action(m, ACT_DIVE, 0)
    end

 
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_FLUDD_HOVER, act_fludd_hover)

local function act_springflip(m)

    set_mario_animation(m, MARIO_ANIM_TRIPLE_JUMP_GROUND_POUND)

    if m.actionTimer == 4 then
        m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE
        m.vel.y = 48
        m.forwardVel = m.forwardVel + 4
        play_character_sound(m, CHAR_SOUND_YAHOO)
    end
    if m.actionTimer > 4 then
        local stepResult = common_air_action_step(m, ACT_TRIPLE_JUMP_LAND, MARIO_ANIM_TRIPLE_JUMP_GROUND_POUND, AIR_STEP_NONE)
        if m.vel.y < 1 then
            m.vel.y = m.vel.y + 2
        end
        if m.actionTimer > 20 then
            m.marioBodyState.handState = MARIO_HAND_OPEN
        elseif m.forwardVel > 50 then
            m.particleFlags = m.particleFlags | PARTICLE_DUST
        end
    end

    if m.actionTimer == 6 or m.actionTimer == 15 then -- spin sound
        play_sound(SOUND_ACTION_TWIRL, m.marioObj.header.gfx.cameraToObject)
    end
    
    if stepResult == AIR_STEP_LANDED then
        play_sound(SOUND_ACTION_TERRAIN_LANDING, m.marioObj.header.gfx.cameraToObject)
    end
    
    m.actionTimer = m.actionTimer + 1
    return smlua_anim_util_set_animation(m.marioObj, "jess_springflip")
end
hook_mario_action(ACT_SPRINGFLIP, act_springflip)

local function act_cartwheel(m)
    local j = gJerJessExtraStates[m.playerIndex]

    m.faceAngle.y = m.intendedYaw - approach_s32(limit_angle(m.intendedYaw - m.faceAngle.y), 0, 0x200, 0x200)

    set_mario_anim_with_accel(m, MARIO_ANIM_RUNNING_UNUSED, m.forwardVel / 5 * 11000)
    smlua_anim_util_set_animation(m.marioObj, "jer_wheel")
    if (m.marioObj.header.gfx.animInfo.animFrame > 8 and m.marioObj.header.gfx.animInfo.animFrame < 12) or m.marioObj.header.gfx.animInfo.animFrame == 0 then
        audio_sample_stop(SOUND_WHEEL_STEP)
        audio_sample_play(SOUND_WHEEL_STEP, m.pos, 1)
    end

    if m.actionTimer == 0 then
        j.wheelSpeed = m.forwardVel
        j.wheelAccel = 0
        m.vel.y = 0
    end
    if (m.input & INPUT_Z_DOWN) ~= 0 and j.wheelAccel < 4 then
        j.wheelAccel = j.wheelAccel + 0.2
    elseif j.wheelAccel > -1 then
        j.wheelAccel = j.wheelAccel - 0.4
    end

    if j.wheelSpeed > 25 or j.wheelAccel > 0 then
        j.wheelSpeed = j.wheelSpeed + j.wheelAccel
    end
    if j.wheelSpeed > 40 then
        m.particleFlags = m.particleFlags | PARTICLE_DUST
    end
    if j.wheelSpeed > 90 then
        m.vel.y = 40
        m.action = ACT_FORWARD_AIR_KB
        m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
        spawn_mist_particles_variable(20, 0, 50)
        play_sound(SOUND_GENERAL_BREAK_BOX, m.marioObj.header.gfx.cameraToObject)
    end

    mario_set_forward_vel(m, j.wheelSpeed)

    local stepResult = perform_ground_step(m)
    if stepResult == GROUND_STEP_HIT_WALL then
        m.vel.y = j.wheelSpeed
        m.pos.y = m.pos.y + 1
        mario_set_forward_vel(m, (0 - j.wheelSpeed)) -- doesn't work cuz ACT_BACKWARD_AIR_KB has vel capped, maybe make custom action
        m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
        m.action = ACT_BACKWARD_AIR_KB
    elseif stepResult == GROUND_STEP_LEFT_GROUND then
        m.action = ACT_FREEFALL
        m.vel.y = 5
    else
        mario_set_forward_vel(m, j.wheelSpeed)
    end

    if (m.input & INPUT_B_PRESSED) ~= 0 or (m.input & INPUT_A_PRESSED) ~= 0 then
        set_mario_action(m, ACT_FORWARD_ROLLOUT, 0)
    end
    
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_CARTWHEEL, act_cartwheel)

local function act_galaxy_spin(m)

    smlua_anim_util_set_animation(m.marioObj, "jess_galaxy_spin")

    if m.actionTimer == 0 then
        play_character_sound(m, CHAR_SOUND_PUNCH_HOO)
        audio_sample_play(SOUND_GALAXY_SPIN, m.pos, 1)
        if m.forwardVel > 30 then
            m.forwardVel = 30
        end
        m.vel.y = 30
    end
    local stepResult = common_air_action_step(m, ACT_FREEFALL_LAND, MARIO_ANIM_RUNNING_UNUSED, AIR_STEP_CHECK_LEDGE_GRAB)
    m.vel.y = m.vel.y + 1

    if m.actionTimer > 0 and m.actionTimer < 10 then
        m.particleFlags = m.particleFlags | PARTICLE_SPARKLES
    end
    
    if (m.input & INPUT_Z_PRESSED) ~= 0 then
        set_mario_action(m, ACT_GROUND_POUND, 0)
    end

    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_GALAXY_SPIN, act_galaxy_spin)

----------
-- JESS --
----------

local function jess_set_action(m)
    local j = gJerJessExtraStates[m.playerIndex]

    -- wall slide
    if m.action == ACT_SOFT_BONK then
        m.faceAngle.y = m.faceAngle.y + 0x8000
        set_mario_action(m, ACT_WALL_SLIDE, 0)
        m.vel.x = 0
        m.vel.y = 0
        m.vel.z = 0
    end


    -- triple jump to twirl
    if (m.action == ACT_TRIPLE_JUMP and m.forwardVel > 0) or m.action == ACT_FLYING_TRIPLE_JUMP then
        j.twirlNerf = true
        play_character_sound(m, CHAR_SOUND_YAHOO)
		set_mario_action(m, ACT_TWIRLING, 0)
    end
    -- pole jump twirl
    if m.action == ACT_TOP_OF_POLE_JUMP then
        m.vel.y = 70
        play_character_sound(m, CHAR_SOUND_TWIRL_BOUNCE)
        return set_mario_action(m, ACT_TWIRLING, 0)
    end
    -- extra height on backflip
    if m.action == ACT_BACKFLIP then
        m.vel.y = m.vel.y + 7
    end
    -- extra height on triple jump
    if m.action == ACT_TRIPLE_JUMP then
        m.vel.y = m.vel.y + 5
    end
    -- sunshine dive
    if m.action == ACT_FORWARD_ROLLOUT and (m.input & INPUT_B_PRESSED) ~= 0 and (m.input & INPUT_Z_DOWN) == 0 then
        set_mario_action(m, ACT_DIVE, 0)
        m.vel.y = 25
    end
    -- dont allow flying
    if m.action == ACT_FLYING then
        set_mario_action(m, ACT_FREEFALL, 0)
    end
    -- galaxy spin
    if (m.action == ACT_JUMP_KICK or (m.action == ACT_DIVE and (((m.forwardVel < 30) or (m.input & INPUT_NONZERO_ANALOG) == 0) and (j.prevAction ~= ACT_GROUND_POUND)))) then
        if m.action == ACT_DIVE then
            m.forwardVel = m.forwardVel - 15
        end
        set_mario_action(m, ACT_GALAXY_SPIN, 0)
    end
    -- better water recovery
    if m.action == ACT_WATER_JUMP then
        m.vel.y = m.vel.y + 10
    end
    
    j.prevAction = m.action
end

local function jess_before_set_action(m, act)
    -- derpy crouch
    if act == ACT_START_CROUCHING then
        return ACT_CROUCHING
    elseif act == ACT_STOP_CROUCHING then
        return ACT_IDLE
    end
    -- twirl landing momentum
    if act == ACT_TWIRL_LAND and m.input & INPUT_NONZERO_ANALOG ~= 0 then
        return ACT_WALKING
    end
end

local function jess_before_phys_step(m)
    local hScale = 1.0
    local vScale = 1.0

    -- faster swimming
    if (m.action & ACT_FLAG_SWIMMING) ~= 0 then
        hScale = hScale * 1.5
        if m.action ~= ACT_WATER_PLUNGE and m.action ~= ACT_FORWARD_WATER_KB and m.action ~= ACT_BACKWARD_WATER_KB then
            vScale = vScale * 1.5
        end
    end

    m.vel.x = m.vel.x * hScale
    m.vel.y = m.vel.y * vScale
    m.vel.z = m.vel.z * hScale
end

local function jess_update(m)
    local j = gJerJessExtraStates[m.playerIndex]

    -- sprinting
    if m.input & INPUT_NONZERO_ANALOG ~= 0 and m.action == ACT_WALKING and m.floor.normal.y > 0.94 and m.forwardVel >= 47 then
        m.forwardVel = m.forwardVel + 0.98
    end    
    -- dust
    if m.action == ACT_WALKING and m.forwardVel > 20 and m.pos.y > m.waterLevel then
        j.stepTimer = j.stepTimer + 1

        if j.stepTimer > j.stepMax then
            j.stepTimer = 0
            m.particleFlags = m.particleFlags | PARTICLE_DUST
        end
    end
    -- GP cancel
    if m.action == ACT_GROUND_POUND and (m.input & INPUT_B_PRESSED) ~= 0 then
        m.faceAngle.y = m.intendedYaw
        set_mario_action(m, ACT_DIVE, 0)
        if j.canJernado then
            m.forwardVel = m.forwardVel + 25
            m.vel.y = 20
            m.particleFlags = m.particleFlags | PARTICLE_HORIZONTAL_STAR
        else
            m.vel.y = 0
            m.forwardVel = 20
        end
    end


    -- twirl cancel
    if m.action == ACT_TWIRLING and (m.input & INPUT_Z_PRESSED) ~= 0 then
        set_mario_action(m, ACT_GROUND_POUND, 0)
    end
    -- ice cap
    if (m.flags & MARIO_METAL_CAP) ~= 0 and m.action ~= ACT_PUTTING_ON_CAP and (m.pos.y < (m.waterLevel + 4) or m.floor.type == SURFACE_BURNING and m.pos.y < m.floorHeight + 4) and m.action ~= ACT_FALL_AFTER_STAR_GRAB and m.action ~= ACT_STAR_DANCE_EXIT and m.action ~= ACT_STAR_DANCE_NO_EXIT then
        set_mario_action(m, ACT_ICE_SKATING, 0)
    end
    -- GP jump
    if m.action == ACT_GROUND_POUND_LAND and (m.input & INPUT_A_PRESSED) ~= 0 then
        if (m.flags & MARIO_WING_CAP) ~= 0 and j.jessWater > 1 then
            set_mario_action(m, ACT_DOUBLE_JUMP, 0)
            m.vel.y = 120
            play_sound(SOUND_OBJ_CANNON4, m.marioObj.header.gfx.cameraToObject)
            audio_sample_play(SOUND_FLUDD_HOVER_END, m.pos, 1)
            j.jessWater = j.jessWater - (jessMaxWater/10)
        else
            set_mario_action(m, ACT_TRIPLE_JUMP, 0)
            m.vel.y = m.vel.y - 4
        end
    end
    if (m.flags & MARIO_WING_CAP) ~= 0 and m.action == ACT_DOUBLE_JUMP and m.vel.y > 70 then
        m.particleFlags = m.particleFlags | PARTICLE_DUST | PARTICLE_SNOW
        m.vel.x = 0
        m.vel.z = 0
        m.forwardVel = 0
    end
    -- dont get stuck in water
    if (m.flags & MARIO_METAL_CAP) ~= 0 and (m.pos.y < (m.waterLevel + 1)) then
        m.pos.y = m.waterLevel + 4
    end
    -- backflip mobility
    if m.action == ACT_BACKFLIP and m.forwardVel > -30 and m.forwardVel < 0 then
        m.forwardVel = m.forwardVel * 1.1
    end
    -- fludd physics
    if j.jessWater > 1 and (m.flags & MARIO_METAL_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 then
        m.capTimer = j.jessWater
    end

    if (m.flags & MARIO_WING_CAP) ~= 0 then
        local canFludd = (m.action == ACT_JUMP or m.action == ACT_DOUBLE_JUMP or m.action == ACT_TWIRLING or m.action == ACT_SIDE_FLIP or m.action == ACT_BACKFLIP or m.action == ACT_FREEFALL or m.action == ACT_WALL_KICK_AIR or m.action == ACT_FORWARD_ROLLOUT or m.action == ACT_STEEP_JUMP) and (m.vel.y < 10)

        if m.pos.y == m.floorHeight and j.jessHover < jessMaxHover then
            j.jessHover = jessMaxHover
        end
        if canFludd and (m.input & INPUT_A_PRESSED) ~= 0 and j.jessHover > 0 then
            set_mario_action(m, ACT_FLUDD_HOVER, 0)
        end
        if m.action == ACT_DIVE_SLIDE and (m.input & INPUT_Z_DOWN) ~= 0 then 
            if m.forwardVel < 60 and m.forwardVel > 0 then
                m.slideVelZ = m.vel.z * 1.1
                m.slideVelX = m.vel.x * 1.1
            end
            m.particleFlags = m.particleFlags | PARTICLE_DUST | PARTICLE_SNOW
            j.fluddSoundLoop = true
            if j.jessWater > 0 then
                j.jessWater = j.jessWater - 2
            end
        end

        if m.pos.y < m.waterLevel then
            j.jessWater = j.jessWater + 15
        end
        if j.jessWater > jessMaxWater then
            j.jessWater = jessMaxWater
        elseif j.jessWater < 0 then
            j.jessWater = 0
            m.capTimer = 1
        end

        if m.action == ACT_FLUDD_HOVER then
            if j.jessHover > 0 then
                j.jessHover = j.jessHover - 1
            end
            if j.jessWater > 0 then
                j.jessWater = j.jessWater - 2
            end
        end
        if m.action == ACT_GALAXY_SPIN and (m.input & INPUT_A_PRESSED) ~= 0 and j.jessHover == jessMaxHover then
            j.jessHover = 0
            j.jessWater = j.jessWater - (jessMaxWater/50)
            set_mario_action(m, ACT_DOUBLE_JUMP, 0)
            audio_sample_play(SOUND_FLUDD_HOVER_END, m.pos, 1)
            m.vel.y = 60
            m.particleFlags = m.particleFlags | PARTICLE_SNOW | PARTICLE_MIST_CIRCLE
        end
        if _G.charSelect.is_menu_open() == true then
            j.jessWater = 0
            m.capTimer = 1
        end
    else
        j.jessHover = 0
        j.jessWater = 0
    end
    if (m.flags & MARIO_METAL_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 and (m.flags & MARIO_WING_CAP) == 0 then
        m.capTimer = 0
    end
    if m.playerIndex == 0 then
        if m.action == ACT_FLUDD_HOVER then
            if m.actionTimer == 0 then
                audio_sample_play(SOUND_FLUDD_HOVER, m.pos, 1)
            end
        else
            audio_sample_stop(SOUND_FLUDD_HOVER)
        end
    
        if ((m.input & INPUT_Z_DOWN) ~= 0 and m.action == ACT_DIVE_SLIDE and j.jessWater > 0) then
            audio_stream_play(SOUND_FLUDD_LOOP, false, 0.8)
        else
            audio_stream_stop(SOUND_FLUDD_LOOP)
        end
    end
    -- nerf twirling
    if m.action ~= ACT_TRIPLE_JUMP and m.action ~= ACT_TWIRLING and m.action ~= ACT_SPECIAL_TRIPLE_JUMP then
        j.twirlNerf = false
    end
    if m.action == ACT_TWIRLING and m.vel.y < 0 and j.twirlNerf then
        m.vel.y = m.vel.y - 3
    end
    -- springflip
    if m.action == ACT_DIVE_SLIDE and (m.input & INPUT_Z_PRESSED) ~= 0 and (m.flags & MARIO_WING_CAP) == 0 and ((m.floor.normal.y > 0.94 and m.forwardVel > 20) or (m.forwardVel > 60)) then
        set_mario_action(m, ACT_SPRINGFLIP, 0)
    end
    -- twirl cancel
    if m.action == ACT_TWIRLING and (m.input & INPUT_B_PRESSED) ~= 0 then
        m.faceAngle.y = m.intendedYaw
        m.particleFlags = m.particleFlags | PARTICLE_HORIZONTAL_STAR
        set_mario_action(m, ACT_DIVE, 0)
        m.forwardVel = 40
        m.vel.y = 20
    end
    -- galaxy spin extra conditions
    if (m.input & INPUT_B_PRESSED) ~= 0 and (m.action == ACT_BACKFLIP or m.action == ACT_LONG_JUMP or (m.action == ACT_SPRINGFLIP and m.actionTimer > 20)) then
        set_mario_action(m, ACT_GALAXY_SPIN, 0)
    end

    -- ANIMS --
    -- tada 
    if m.marioObj.header.gfx.animInfo.animID == CHAR_ANIM_TRIPLE_JUMP_LAND then
        if m.marioObj.header.gfx.animInfo.animFrame > 5 and m.marioObj.header.gfx.animInfo.animFrame < 24 then
            m.marioBodyState.handState = MARIO_HAND_OPEN
        end
    end
    -- menu pose (Concept by Wall_E20)
    if m.marioObj.header.gfx.animInfo.animID == charSelect.CS_ANIM_MENU then
        m.marioBodyState.eyeState = MARIO_EYES_LOOK_RIGHT
    end
    -- disable tilt
    if m.action == ACT_WALKING then
        m.marioBodyState.torsoAngle.x = 0
        m.marioBodyState.torsoAngle.z = 0
    end
    -- fast running
    if m.action == ACT_WALKING then
        if m.forwardVel > 45 then
            smlua_anim_util_set_animation(m.marioObj, "jess_run_fast")
            m.marioBodyState.handState = MARIO_HAND_OPEN
            j.stepMax = 3
        else
            j.stepMax = 5
        end
    end
end

local function jess_interact(m, obj, type)
    local j = gJerJessExtraStates[m.playerIndex]

    if m == gMarioStates[0] and (m.flags & MARIO_WING_CAP) ~= 0 then
        if type == INTERACT_CAP then
            audio_sample_play(SOUND_FLUDD_PICKUP, m.pos, 1)
            if (m.flags & MARIO_METAL_CAP) == 0 and (m.flags & MARIO_VANISH_CAP) == 0 then
                stop_cap_music()
            end
            j.jessWater = jessMaxWater
            if (m.flags & MARIO_METAL_CAP) ~= 0 then
                m.capTimer = 45*30
            elseif (m.flags & MARIO_VANISH_CAP) ~= 0 then
                m.capTimer = 25*30
            end
        elseif type == INTERACT_COIN and FluddCoins then
            j.jessWater = j.jessWater + (30 * obj.oDamageOrCoinValue)
        end
    end
end

---------
-- JER --
---------

local function jer_set_action(m)
    local j = gJerJessExtraStates[m.playerIndex]

    -- wall slide
    if m.action == ACT_SOFT_BONK then
        m.faceAngle.y = m.faceAngle.y + 0x8000
        set_mario_action(m, ACT_WALL_SLIDE, 0)
        m.vel.x = 0
        m.vel.y = 0
        m.vel.z = 0
    end


    -- faster slide kick
    if m.action == ACT_SLIDE_KICK then
        m.forwardVel = m.forwardVel + 18
    end
    -- slide kick from stationary
    if (m.action == ACT_PUNCHING or m.action == ACT_MOVE_PUNCHING) and m.input & INPUT_Z_DOWN ~= 0 and m.forwardVel < 10 then
        m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE
        set_mario_action(m, ACT_SLIDE_KICK, 0)
        m.forwardVel = 65
        m.vel.y = 25
    end
    -- pipe sound
    if (m.flags & MARIO_METAL_CAP) ~= 0 and m.action == ACT_HARD_BACKWARD_GROUND_KB then
        audio_sample_play(SOUND_COMEDIC_METAL_PIPE, m.pos, 1)
    end 
    -- metal shock boost
    if (m.flags & MARIO_METAL_CAP) ~= 0 and m.action == ACT_SHOCKED then
        set_mario_action(m, ACT_WALKING, 0)
        play_character_sound(m, CHAR_SOUND_HELLO)
        m.forwardVel = 73
        m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
        spawn_mist_particles_variable(10, 0, 10)
        audio_sample_play(SOUND_ZAP, m.pos, 1)
    end
    -- slide kick persists if holding Z
    if j.prevAction == ACT_SLIDE_KICK and m.action == ACT_FREEFALL and (m.input & INPUT_Z_DOWN) ~= 0 and (m.flags & MARIO_VANISH_CAP) == 0 then
        m.actionTimer = 2
        m.action = ACT_SLIDE_KICK
    end

    j.prevAction = m.action
end

local function jer_before_set_action(m, act)
    -- derpy crouch
    if act == ACT_START_CROUCHING then
        return ACT_CROUCHING
    elseif act == ACT_STOP_CROUCHING then
        return ACT_IDLE
    end
    -- twirl landing momentum
    if act == ACT_TWIRL_LAND and m.input & INPUT_NONZERO_ANALOG ~= 0 then
        return ACT_WALKING
    end
end

local function jer_before_phys_step(m)
    local hScale = 1.0

    -- faster sliding
    if m.action == ACT_BUTT_SLIDE then
        hScale = hScale * 1.3
    end

    m.vel.x = m.vel.x * hScale
    m.vel.z = m.vel.z * hScale
end

local function jer_update(m)
    local j = gJerJessExtraStates[m.playerIndex]

    -- sprinting
    if m.input & INPUT_NONZERO_ANALOG ~= 0 and m.action == ACT_WALKING and m.floor.normal.y > 0.94 and m.forwardVel >= 47 then
        m.forwardVel = m.forwardVel + 0.98
    end    
    -- dust
    if m.action == ACT_WALKING and m.forwardVel > 20 and m.pos.y > m.waterLevel then
        j.stepTimer = j.stepTimer + 1

        if j.stepTimer > j.stepMax then
            j.stepTimer = 0
            m.particleFlags = m.particleFlags | PARTICLE_DUST
        end
    end
    -- GP cancel
    if m.action == ACT_GROUND_POUND and (m.input & INPUT_B_PRESSED) ~= 0 then
        m.faceAngle.y = m.intendedYaw
        set_mario_action(m, ACT_DIVE, 0)
        m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE
        m.vel.y = 30
        m.forwardVel = 20
    end


    -- speed particle
    if (m.action == ACT_SLIDE_KICK or m.action == ACT_SLIDE_KICK_SLIDE) and m.forwardVel > 58 then
        m.particleFlags = m.particleFlags | PARTICLE_TRIANGLE 
    end
    -- rugburn
    if m.action == ACT_BUTT_SLIDE and m.forwardVel > 90 then
        m.particleFlags = m.particleFlags | PARTICLE_FIRE 
    end
    -- GP jump
    if m.action == ACT_GROUND_POUND_LAND and (m.input & INPUT_A_PRESSED) ~= 0 then
        if (m.flags & MARIO_WING_CAP) ~= 0 then
            set_mario_action(m, ACT_FLYING_TRIPLE_JUMP, 0)
        else
            set_mario_action(m, ACT_TRIPLE_JUMP, 0)
        end
        m.vel.y = m.vel.y - 4
    end
    -- GP slide kick
    if m.action == ACT_GROUND_POUND_LAND and (m.input & INPUT_B_PRESSED) ~= 0 then
        m.forwardVel = 60
        play_character_sound(m, CHAR_SOUND_HELLO)
        set_mario_action(m, ACT_CARTWHEEL, 0)
    end
    -- slide kick to wheel
    if m.action == ACT_SLIDE_KICK_SLIDE and (m.input & INPUT_Z_PRESSED) ~= 0 then
        set_mario_action(m, ACT_CARTWHEEL, 0)
    end
    -- rev sound
    if m.action == ACT_SLIDE_KICK then
		if m.marioObj.header.gfx.animInfo.animFrame == -1 then
	        play_character_sound(m, CHAR_SOUND_HELLO)
        end
	end
    -- metal speed
    if (m.flags & MARIO_METAL_CAP) ~= 0 then
        if m.action == ACT_WALKING and m.input & INPUT_NONZERO_ANALOG ~= 0 then
            m.forwardVel = m.forwardVel -0.3
            if m.forwardVel > 20 then
                m.forwardVel = m.forwardVel + 0.3
            end
            if m.forwardVel > 30 then
                m.forwardVel = m.forwardVel + 1.3
            end
            if m.forwardVel > 44 and m.forwardVel < 46 then
                m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
                m.forwardVel = 49
            end
        end
    end
    -- jernado
    if m.action == ACT_GROUND_POUND and (m.input & INPUT_A_PRESSED) ~= 0 and j.canJernado == true then
        set_mario_action(m, ACT_JERNADO, 0)
        j.canJernado = false
    end
    if m.pos.y == m.floorHeight then
        j.canJernado = true
    end
    -- water skip
    if m.action == ACT_SLIDE_KICK and m.forwardVel > 58 and m.pos.y < m.waterLevel + 5 and (m.flags & MARIO_METAL_CAP) == 0 then
        m.particleFlags = m.particleFlags | PARTICLE_WATER_SPLASH
        set_mario_action(m, ACT_SLIDE_KICK, 0)
        m.vel.y = 20
        m.forwardVel = m.forwardVel - 25
    end
    -- angle
    if m.action == ACT_SLIDE_KICK and m.input & INPUT_NONZERO_ANALOG ~= 0 then
        m.faceAngle.y = m.intendedYaw - approach_s32(limit_angle(m.intendedYaw - m.faceAngle.y), 0, 0x200, 0x200)
    end
    -- cant swim :(
    if (m.action & ACT_FLAG_SWIMMING) ~= 0 then
        m.forwardVel = m.forwardVel * 0.99
    end
    -- vanish cap perks
    if (m.flags & MARIO_VANISH_CAP) ~= 0 then
        m.peakHeight = m.pos.y -- no fall damage
        if (m.input & INPUT_A_DOWN) ~= 0 then
            if m.action == ACT_SLIDE_KICK and m.forwardVel > 58 then
                 m.vel.y = 0
            else
                m.vel.y = m.vel.y + 1 -- floaty
            end
        end
    end
    -- boost canister
    local canNormalBoost = (m.action == ACT_JUMP or m.action == ACT_JUMP_KICK or m.action == ACT_DOUBLE_JUMP or m.action == ACT_TRIPLE_JUMP or m.action == ACT_LONG_JUMP or m.action == ACT_SIDE_FLIP or m.action == ACT_WALL_KICK_AIR or m.action == ACT_FREEFALL)

    if (m.flags & MARIO_WING_CAP ~= 0) then
        if j.jerBoost > 50 then
            j.jerBoost = 50
        end
        if (m.pos.y == m.floorHeight or m.action == ACT_FLYING) and j.jerBoost < 50 then
            if m.action == ACT_FLYING then
                j.jerBoost = j.jerBoost + 0.5
            elseif m.pos.y == m.floorHeight then
                j.jerBoost = j.jerBoost + 1
            end
        end
        if j.jerBoost > 0 and (m.input & INPUT_A_DOWN) ~= 0 and m.action == ACT_FLYING and m.forwardVel < 100 then
            if j.jerBoost == 50 and m.forwardVel < 40 then
                m.forwardVel = 70
                m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
                play_character_sound(m, CHAR_SOUND_YAHOO)
                audio_sample_play(SOUND_JER_BOOST_PULSE, m.pos, 1)
                spawn_mist_particles_variable(20, 0, 50)
                j.jerBoost = -50
            end
            m.forwardVel = m.forwardVel + 1
            spawn_mist_particles_variable(1, 0, 10)
            if (m.input & INPUT_A_PRESSED) ~= 0 then
                audio_sample_play(SOUND_JER_BOOST_HOLD, m.pos, 1)
            end
            j.jerBoost = j.jerBoost - 2
        else
            audio_sample_stop(SOUND_JER_BOOST_HOLD)
        end
        if m.action == ACT_FLYING and (m.input & INPUT_B_PRESSED) ~= 0 and m.forwardVel > 20 then
            m.forwardVel = m.forwardVel - 10
            m.particleFlags = m.particleFlags | PARTICLE_VERTICAL_STAR
        end
        if j.jerBoost == 50 and (m.input & INPUT_A_PRESSED) ~= 0 and canNormalBoost and m.vel.y < 10 then
            m.vel.y = 40
            m.particleFlags = m.particleFlags | PARTICLE_MIST_CIRCLE | PARTICLE_HORIZONTAL_STAR
            play_character_sound(m, CHAR_SOUND_PUNCH_HOO)
            audio_sample_play(SOUND_JER_BOOST_PULSE, m.pos, 1)
            j.jerBoost = 0
        end
        if j.jerBoost == 50 and m.action == ACT_SLIDE_KICK then
            m.forwardVel = m.forwardVel + 20
            spawn_mist_particles_variable(20, 0, 50)
            audio_sample_play(SOUND_JER_BOOST_PULSE, m.pos, 1)
            j.jerBoost = 0
        end
    else
        j.jerBoost = 0
    end
    -- metal cap can move underwater airborne
    if (m.input & INPUT_NONZERO_ANALOG ~= 0) and m.action == ACT_METAL_WATER_FALLING then
        m.forwardVel = 20
    end



    -- anims
        -- menu pose (Concept by Wall_E20)
        if m.marioObj.header.gfx.animInfo.animID == charSelect.CS_ANIM_MENU then
            m.marioBodyState.eyeState = MARIO_EYES_LOOK_LEFT
        end
    -- modify tilt
    if m.action == ACT_WALKING and (m.flags & MARIO_METAL_CAP) == 0 then
        m.marioBodyState.torsoAngle.x = m.marioBodyState.torsoAngle.x * 0.8
        m.marioBodyState.torsoAngle.z = 0
    end
    -- fast running
    if m.action == ACT_WALKING then
        if m.forwardVel > 45 then
            smlua_anim_util_set_animation(m.marioObj, "jer_run_fast")
            j.stepMax = 3
        else
            j.stepMax = 5
        end
    end
end




local jerMeterEmpty = get_texture_info("jer-boost-meter0")
local jerMeterFull = get_texture_info("jer-boost-meter1")
local jerBarEmpty = get_texture_info("jer-boost-bar0")
local jerBarFull = get_texture_info("jer-boost-bar1")

local jessWaterMeter = get_texture_info("water_meter")
local jessWaterTop = get_texture_info("water_top")
local jessWaterMid = get_texture_info("water_bar")
local jessWaterBot = get_texture_info("water_bottom")
local jessHoverBar = get_texture_info("water_hover_bar")

local speedometerSheet = get_texture_info("speedsheet")

function jer_jess_hud()
  for i = 0, MAX_PLAYERS - 1 do
    local m = gMarioStates[i]
    local j = gJerJessExtraStates[i]

    if is_jer() and m.playerIndex == 0 then 
        if (m.flags & MARIO_WING_CAP ~= 0) and m.capTimer > 0 then
            djui_hud_set_color(255, 255, 255, 255)
            djui_hud_set_resolution(RESOLUTION_N64)

            local jerBoostMeterScale = 0
            if j.jerBoost < 0 then
            jerBoostMeterScale = 0
            else
            jerBoostMeterScale = ((j.jerBoost / 50) * 4)
            end

            if j.jerBoost == 50 then
                if not (m.action == ACT_FLYING and m.forwardVel > 40) then
                    jerMeter = jerMeterFull
                else
                    jerMeter = jerMeterEmpty
                end
                jerBar = jerBarFull
            else
                jerMeter = jerMeterEmpty
                jerBar = jerBarEmpty
            end

            djui_hud_render_texture(jerMeter, 15, 73, 1, 1)
            djui_hud_render_texture(jerBar, 15, (120 - (8 * jerBoostMeterScale)), 1, jerBoostMeterScale)
        end
        if m.action == ACT_CARTWHEEL then
            djui_hud_set_color(255, 255, 255, 255)
            djui_hud_set_resolution(RESOLUTION_N64)

            if m.forwardVel < 26 then speedometer = 0 
            elseif m.forwardVel < 33 then speedometer = 1
            elseif m.forwardVel < 40 then speedometer = 2
            elseif m.forwardVel < 47 then speedometer = 3
            elseif m.forwardVel < 54 then speedometer = 4
            elseif m.forwardVel < 61 then speedometer = 5
            elseif m.forwardVel < 68 then speedometer = 6
            elseif m.forwardVel < 75 then speedometer = 7
            elseif m.forwardVel < 82 then speedometer = 8
            elseif m.forwardVel < 89 then speedometer = 9
            else speedometer = 10 end

            local widthCenter = djui_hud_get_screen_width() / 2

            djui_hud_render_texture_tile(speedometerSheet, (widthCenter - 16), 50, 0.5, 1, speedometer * 32, 0, 32, 16)
        end
    end

    if is_jess() and m.playerIndex == 0 and j.jessWater > 0 then
        djui_hud_set_color(255, 255, 255, 255)
        djui_hud_set_resolution(RESOLUTION_N64)
        djui_hud_set_font(FONT_HUD)

        local jessWaterMeterScale = (j.jessWater/jessMaxWater)
        local jessHoverMeterScale = ((j.jessHover/jessMaxHover) * 6)

        if j.jessWater/30 > 99.5 then
            jessWaterDisplayOffset = 3
        elseif j.jessWater/30 < 99.5 and j.jessWater/30 > 19.5 then
            jessWaterDisplayOffset = 10
        elseif j.jessWater/30 < 19.5 and j.jessWater/30 > 9.5 then
            jessWaterDisplayOffset = 8
        else
            jessWaterDisplayOffset = 15
        end

        djui_hud_render_texture(jessWaterBot, 10, 218, 1, 1)
        djui_hud_render_texture(jessWaterMid, 10, (222 - (8 * 14 * jessWaterMeterScale)), 1, 14 * jessWaterMeterScale)
        djui_hud_render_texture(jessWaterTop, 10, (218 - (jessWaterMeterScale * 112)), 1, 1)
        djui_hud_render_texture(jessHoverBar, 10, (160 - (8 * jessHoverMeterScale)), 1, jessHoverMeterScale)
        djui_hud_render_texture(jessWaterMeter, 10, 100, 1, 1)
        djui_hud_print_text(string.format("%.0f", j.jessWater/30), jessWaterDisplayOffset, 175, 1)
    end
  end


-- DEBUG --
--        local m = gMarioStates[0]
--        local floorNormalY = m.floor.normal.y
        
--        djui_hud_set_color(50, 50, 255, 255)
--        djui_hud_set_resolution(RESOLUTION_DJUI)
--        djui_hud_set_font(FONT_ALIASED)


--        djui_hud_print_text(string.format("j.jessHover:  "..j.jessHover.." ") , 25, 350, 1)
--        djui_hud_print_text(string.format("j.jessWater:  "..j.jessWater.." ") , 25, 375, 1)
--        djui_hud_print_text(string.format("m.floor.normal.y:  "..floorNormalY.." ") , 25, 350, 1)
--        djui_hud_print_text(string.format("accel:  "..accel.." ") , 25, 500, 1)
end

local function jer_vanish_surface(m)
    if is_jer() and (m.flags & MARIO_VANISH_CAP) ~= 0 and m.floor.type ~= SURFACE_BURNING then -- a little glitchy, will do some weird spam dying thing on other peoples screen
        return false
    else
        return true
    end
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, jer_jess_hud)
hook_event(HOOK_ON_LEVEL_INIT, jer_jess_reset_extra_states)
hook_event(HOOK_ALLOW_HAZARD_SURFACE, jer_vanish_surface)

_G.charSelect.character_hook_moveset(CT_JESS, HOOK_MARIO_UPDATE, jess_update)
_G.charSelect.character_hook_moveset(CT_JESS, HOOK_ON_SET_MARIO_ACTION, jess_set_action)
_G.charSelect.character_hook_moveset(CT_JESS, HOOK_BEFORE_PHYS_STEP, jess_before_phys_step)
_G.charSelect.character_hook_moveset(CT_JESS, HOOK_ON_INTERACT, jess_interact)
_G.charSelect.character_hook_moveset(CT_JESS, HOOK_BEFORE_SET_MARIO_ACTION, jess_before_set_action)

_G.charSelect.character_hook_moveset(CT_JER, HOOK_MARIO_UPDATE, jer_update)
_G.charSelect.character_hook_moveset(CT_JER, HOOK_ON_SET_MARIO_ACTION, jer_set_action)
_G.charSelect.character_hook_moveset(CT_JER, HOOK_BEFORE_PHYS_STEP, jer_before_phys_step)
_G.charSelect.character_hook_moveset(CT_JER, HOOK_BEFORE_SET_MARIO_ACTION, jer_before_set_action)