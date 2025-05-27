-- name: [CS] \\#00aa00\\Jer \\#ffffff\\+ \\#22ccff\\Jess
-- description: Mod that adds My characters to SM64 along with their own custom movesets.\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

local TEXT_MOD_NAME = "Jer + Jess"
local VER_NUM = "0.15.3"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

-- Models --
local E_MODEL_JER = smlua_model_util_get_id('jer_nos_geo')
local E_MODEL_JESS = smlua_model_util_get_id('jess_geo')

local E_MODEL_JER_BEACH = smlua_model_util_get_id('beach_jer_nos_geo')
local E_MODEL_LUCKY = smlua_model_util_get_id('lucky_geo')
local E_MODEL_JESS_BEACH = smlua_model_util_get_id('beach_jess_geo')
local E_MODEL_JESSILYNN = smlua_model_util_get_id('jessilynn_geo')

-- Textures --
local TEX_JER = get_texture_info('jer_icon')
local TEX_JESS = get_texture_info('jess_icon')

VOICETABLE_JER = { -- Voices from Scooter and other male characters from Lego Racers (1999)
    [CHAR_SOUND_ATTACKED] = {'jer_no.ogg', 'jer_ouch.ogg'},
    [CHAR_SOUND_COUGHING1] = nil,
    [CHAR_SOUND_COUGHING2] = nil,
    [CHAR_SOUND_COUGHING3] = nil,
    [CHAR_SOUND_DOH] = 'jer_woah.ogg', -- long jump bump
    [CHAR_SOUND_DROWNING] = nil,
    [CHAR_SOUND_DYING] = 'jer_aww.ogg',
    [CHAR_SOUND_EEUH] = 'jer_mmf.ogg', -- climbing ledge
    [CHAR_SOUND_GROUND_POUND_WAH] = 'jer_hiya.ogg',
    [CHAR_SOUND_HAHA] = 'jer_yeah_jazzy.ogg',
    [CHAR_SOUND_HAHA_2] = 'jer_yeah_jazzy.ogg',
    [CHAR_SOUND_HERE_WE_GO] = 'jer_yeah.ogg', -- getting star/power up
    [CHAR_SOUND_HOOHOO] = 'jer_heyhey.ogg',
    [CHAR_SOUND_HRMM] = 'jer_mmf.ogg', -- lifting
    [CHAR_SOUND_IMA_TIRED] = nil,
    [CHAR_SOUND_MAMA_MIA] = 'jer_ohno.ogg',
    [CHAR_SOUND_LETS_A_GO] = 'jer_yeah_jazzy.ogg', -- starting level
    [CHAR_SOUND_ON_FIRE] = {'jer_yeow.ogg', 'jer_wooaahh.ogg', 'jer_ouchh.ogg'},
    [CHAR_SOUND_OOOF] = 'jer_mmf.ogg',
    [CHAR_SOUND_OOOF2] = 'jer_oh.ogg', -- thrown out of painting
    [CHAR_SOUND_PANTING] = nil,
    [CHAR_SOUND_PANTING_COLD] = nil,
    [CHAR_SOUND_PUNCH_HOO] = 'jer_yeah.ogg', -- kick
    [CHAR_SOUND_PUNCH_WAH] = 'jer_ha.ogg', -- punch 2
    [CHAR_SOUND_PUNCH_YAH] = 'jer_ya.ogg', -- punch 1
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'jer_hiya.ogg',
    [CHAR_SOUND_SNORING1] = 'jer_snore1.ogg',
    [CHAR_SOUND_SNORING2] = 'jer_snore2.ogg',
    [CHAR_SOUND_SNORING3] = nil,
    [CHAR_SOUND_TWIRL_BOUNCE] = 'jer_yeehaw.ogg',
    [CHAR_SOUND_UH] = 'jer_oh.ogg', -- wall bonk
    [CHAR_SOUND_UH2] = 'jer_mmf.ogg', -- landing long jump
    [CHAR_SOUND_UH2_2] = 'jer_mmf.ogg', -- same as uh2 maybe??
    [CHAR_SOUND_WAAAOOOW] = 'jer_wooaahh.ogg',
    [CHAR_SOUND_WAH2] = 'jer_ha.ogg', -- throw
    [CHAR_SOUND_WHOA] = 'jer_woah.ogg',
    [CHAR_SOUND_YAHOO] = {'jer_woohoo.ogg', 'jer_yippee.ogg'},
    [CHAR_SOUND_YAWNING] = nil,
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'jer_woohoo.ogg', 'jer_yippee.ogg'},
    [CHAR_SOUND_YAH_WAH_HOO] = {'jer_ha.ogg', 'jer_hoh.ogg'},
    [CHAR_SOUND_HELLO] = 'rev.ogg',
    [CHAR_SOUND_PRESS_START_TO_PLAY] = {'jer_heeyaw.ogg', 'jer_yeehaw.ogg'},
    [CHAR_SOUND_OKEY_DOKEY] = 'jer_yeah_jazzy.ogg'
}

VOICETABLE_JESS = { -- Voices from Veronica Voltage and other female characters from Lego Racers (1999)
    [CHAR_SOUND_ATTACKED] = 'jess_ow.ogg',
    [CHAR_SOUND_COUGHING1] = nil,
    [CHAR_SOUND_COUGHING2] = nil,
    [CHAR_SOUND_COUGHING3] = nil,
    [CHAR_SOUND_DOH] = 'jess_ow.ogg',
    [CHAR_SOUND_DROWNING] = nil,
    [CHAR_SOUND_DYING] = 'jess_ohno.ogg',
    [CHAR_SOUND_EEUH] = 'jess_heh.ogg',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'jess_hiya.ogg',
    [CHAR_SOUND_HAHA] = 'jess_yeah_jazzy.ogg',
    [CHAR_SOUND_HAHA_2] = 'jess_oh_yeah.ogg',
    [CHAR_SOUND_HERE_WE_GO] = 'jess_yeah_jazzy.ogg',
    [CHAR_SOUND_HOOHOO] = 'jess_woo.ogg',
    [CHAR_SOUND_HRMM] = 'jess_heh.ogg',
    [CHAR_SOUND_IMA_TIRED] = nil,
    [CHAR_SOUND_MAMA_MIA] = 'jess_ohno.ogg',
    [CHAR_SOUND_LETS_A_GO] = 'jess_oh_yeah.ogg',
    [CHAR_SOUND_ON_FIRE] = 'jess_ohno.ogg',
    [CHAR_SOUND_OOOF] = 'jess_ouch.ogg',
    [CHAR_SOUND_OOOF2] = 'jess_ouch.ogg',
    [CHAR_SOUND_PANTING] = nil,
    [CHAR_SOUND_PANTING_COLD] = nil,
    [CHAR_SOUND_PUNCH_HOO] = 'jess_yeah.ogg',
    [CHAR_SOUND_PUNCH_WAH] = 'jess_ya.ogg',
    [CHAR_SOUND_PUNCH_YAH] = 'jess_ha.ogg',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'jess_hiya.ogg',
    [CHAR_SOUND_SNORING1] = 'jess_snore1.ogg',
    [CHAR_SOUND_SNORING2] = 'jess_snore2.ogg',
    [CHAR_SOUND_SNORING3] = 'jess_snore2.ogg',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'jess_yahoo.ogg',
    [CHAR_SOUND_UH] = 'jess_ow.ogg',
    [CHAR_SOUND_UH2] = 'jess_heh.ogg',
    [CHAR_SOUND_UH2_2] = nil,
    [CHAR_SOUND_WAAAOOOW] = nil,
    [CHAR_SOUND_WAH2] = 'jess_ya.ogg',
    [CHAR_SOUND_WHOA] = 'jess_uh_oh.ogg',
    [CHAR_SOUND_YAHOO] = { 'jess_yahoo.ogg', 'jess_woohoo.ogg' },
    [CHAR_SOUND_YAWNING] = nil,
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'jess_yahoo.ogg', 'jess_woohoo.ogg' },
    [CHAR_SOUND_YAH_WAH_HOO] = {'jess_ha.ogg', 'jess_ya.ogg', 'jess_yeah.ogg' },
    [CHAR_SOUND_OKEY_DOKEY] = 'jess_oh_yeah.ogg'
}

local PALETTE_JER = {
    [PANTS]  = "008040",
    [SHIRT]  = "ffaa00",
    [GLOVES] = "008040",
    [SHOES]  = "462c1e",
    [HAIR]   = "00ff00",
    [SKIN]   = "4C4C4C",
    [CAP]    = "008040",
    [EMBLEM] = "008040",
}
local PALETTE_JER_LEGACY = {
    [PANTS]  = "008000",
    [SHIRT]  = "ffff66",
    [GLOVES] = "008000",
    [SHOES]  = "462c1e",
    [HAIR]   = "00ff00",
    [SKIN]   = "4C4C4C",
    [CAP]    = "008000",
    [EMBLEM] = "008000",
}
local PALETTE_JER_BEACH = {
    [PANTS]  = "FF8900",
    [SHIRT]  = "98FF2E",
    [GLOVES] = "FF8900",
    [SHOES]  = "BC00BC",
    [HAIR]   = "00ff00",
    [SKIN]   = "4C4C4C",
    [CAP]    = "ffba90",
    [EMBLEM] = "BC00BC",
}
local PALETTE_80_SUNSET = {
    [PANTS]  = "8000ff",
    [SHIRT]  = "ff0080",
    [GLOVES] = "00ff80",
    [SHOES]  = "ff0080",
    [HAIR]   = "00ff80",
    [SKIN]   = "00ff80",
    [CAP]    = "ffba90",
    [EMBLEM] = "8000ff",
}
local PALETTE_LUCKY = {
    [PANTS]  = "333333",
    [SHIRT]  = "333333",
    [GLOVES] = "222222",
    [SHOES]  = "222222",
    [HAIR]   = "008000",
    [SKIN]   = "333333",
    [CAP]    = "FFC900",
    [EMBLEM] = "FFC900",
}
local PALETTE_BURNOUT = {
    [PANTS]  = "777777",
    [SHIRT]  = "4a3333",
    [GLOVES] = "222222",
    [SHOES]  = "222222",
    [HAIR]   = "ff0000",
    [SKIN]   = "777777",
    [CAP]    = "222222",
    [EMBLEM] = "ff0000",
}
local PALETTE_LENNY = {
    [PANTS]  = "222222",
    [SHIRT]  = "566b2e",
    [GLOVES] = "222222",
    [SHOES]  = "555555",
    [HAIR]   = "d2002b",
    [SKIN]   = "d2002b",
    [CAP]    = "000000",
    [EMBLEM] = "ff6900",
}


local PALETTE_JESS = {
    [PANTS]  = "8cc6ff",
    [SHIRT]  = "bbff4d",
    [GLOVES] = "8cc6ff",
    [SHOES]  = "462c1e",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "8cc6ff",
    [EMBLEM] = "8cc6ff",
}
local PALETTE_JESS_FIRE = {
    [PANTS]  = "bbff4d",
    [SHIRT]  = "ffffff",
    [GLOVES] = "ffffff",
    [SHOES]  = "462c1e",
    [HAIR]   = "ff4a00",
    [SKIN]   = "e5935f",
    [CAP]    = "ffffff",
    [EMBLEM] = "bbff4d",
}
local PALETTE_JESS_BEACH = {
    [PANTS]  = "c64f42",
    [SHIRT]  = "336677",
    [GLOVES] = "c64f42",
    [SHOES]  = "c64f42",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "c64f42",
    [EMBLEM] = "ffd532",
}
local PALETTE_POPULAR_GIRL = {
    [PANTS]  = "276dff",
    [SHIRT]  = "ff4100",
    [GLOVES] = "ce6cff",
    [SHOES]  = "ff4100",
    [HAIR]   = "ff9b00",
    [SKIN]   = "ffba90",
    [CAP]    = "ce6cff",
    [EMBLEM] = "ffffff",
}
local PALETTE_SUNNY = {
    [PANTS]  = "ffd979",
    [SHIRT]  = "ff4a55",
    [GLOVES] = "ffffff",
    [SHOES]  = "ffffff",
    [HAIR]   = "ffd979",
    [SKIN]   = "ff8e55",
    [CAP]    = "ffffff",
    [EMBLEM] = "ff4a00",
}
local PALETTE_JESSILYNN = {
    [PANTS]  = "2b8859",
    [SHIRT]  = "99d149",
    [GLOVES] = "ffffff",
    [SHOES]  = "462c1e",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "99d149",
    [EMBLEM] = "ffc300",
}
local PALETTE_ANNA = {
    [PANTS]  = "3c2fff",
    [SHIRT]  = "5aa6ff",
    [GLOVES] = "c64f42",
    [SHOES]  = "5aa6ff",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "5aa6ff",
    [EMBLEM] = "ffc300",
}

local capJER = {
    normal = smlua_model_util_get_id("j_cap_geo"),
    wing = smlua_model_util_get_id("nos_tank_geo"),
    metal = smlua_model_util_get_id("metal_flower_geo"),
    metalWing = nil
}

local capJER_BEACH = {
    normal = smlua_model_util_get_id("shades_geo"),
    wing = smlua_model_util_get_id("nos_tank_geo"),
    metal = smlua_model_util_get_id("metal_flower_geo"),
    metalWing = nil
}

local capJESS = {
    normal = smlua_model_util_get_id("j_cap_geo"),
    wing = smlua_model_util_get_id("fludd_nozzle_geo"),
    metal = smlua_model_util_get_id("ice_flower_geo"),
    metalWing = nil
}

local capJESS_BEACH = {
    normal = smlua_model_util_get_id("beach_flower_geo"),
    wing = smlua_model_util_get_id("fludd_nozzle_geo"),
    metal = smlua_model_util_get_id("ice_flower_geo"),
    metalWing = nil
}

local capJESSILYNN = {
    normal = smlua_model_util_get_id("miner_cap_geo"),
    wing = smlua_model_util_get_id("fludd_nozzle_geo"),
    metal = smlua_model_util_get_id("ice_flower_geo"),
    metalWing = nil
}

local ANIMTABLE_JER = {
    [charSelect.CS_ANIM_MENU] = "jer_menu_pose",
    [CHAR_ANIM_RUNNING] = "jer_run", -- Credit: Custom Run Animations Lua; By: STREAMING LION
    [CHAR_ANIM_TWIRL] = "jer_twirl",
    [CHAR_ANIM_START_TWIRL] = "jer_twirl_start",
    [CHAR_ANIM_TWIRL_LAND] = "jer_twirl_end",
    [CHAR_ANIM_RIDING_SHELL] = "jer_shell_ride",
    [CHAR_ANIM_START_RIDING_SHELL] = "jer_shell_start",
    [CHAR_ANIM_JUMP_RIDING_SHELL] = "jer_shell_fall",
    [CHAR_ANIM_SINGLE_JUMP] = "jer_single_jump",
    [CHAR_ANIM_SLIDEFLIP] = "unused_sideflip",
}

local ANIMTABLE_JESS = {
    [charSelect.CS_ANIM_MENU] = "jess_menu_pose",
    [CHAR_ANIM_RUNNING] = "jess_run",
    [CHAR_ANIM_IDLE_HEAD_LEFT] = "jess_idle",
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = "jess_idle",
    [CHAR_ANIM_IDLE_HEAD_CENTER] = "jess_idle",
    [CHAR_ANIM_FIRST_PERSON] = "jess_idle",
    [CHAR_ANIM_WAKE_FROM_LYING] = "jess_wakeup",
    [CHAR_ANIM_SLIDEFLIP] = "unused_sideflip",
    [CHAR_ANIM_STOP_SKID] = "jess_brake",
    [CHAR_ANIM_TRIPLE_JUMP_LAND] = "jess_tada",
    [CHAR_ANIM_SINGLE_JUMP] = "jess_single_jump",
    [CHAR_ANIM_LAND_FROM_SINGLE_JUMP] = "jess_land_single_jump",
    [CHAR_ANIM_GENERAL_LAND] = "jess_land_general",
    [CHAR_ANIM_LAND_FROM_DOUBLE_JUMP] = "jess_land_double",
    [CHAR_ANIM_STOP_SLIDE] = "jess_getup_slide",
}

local HEALTH_METER_JER = {
    label = {
        left = get_texture_info("jer-hp-left"),
        right = get_texture_info("jer-hp-right"),
    },
    pie = {
        [1] = get_texture_info("hp-1"),
        [2] = get_texture_info("hp-2"),
        [3] = get_texture_info("hp-3"),
        [4] = get_texture_info("hp-4"),
        [5] = get_texture_info("hp-5"),
        [6] = get_texture_info("hp-6"),
        [7] = get_texture_info("hp-7"),
        [8] = get_texture_info("hp-8"),
    }
}

local HEALTH_METER_JESS = {
    label = {
        left = get_texture_info("jess-hp-left"),
        right = get_texture_info("jess-hp-right"),
    },
    pie = {
        [1] = get_texture_info("hp-1"),
        [2] = get_texture_info("hp-2"),
        [3] = get_texture_info("hp-3"),
        [4] = get_texture_info("hp-4"),
        [5] = get_texture_info("hp-5"),
        [6] = get_texture_info("hp-6"),
        [7] = get_texture_info("hp-7"),
        [8] = get_texture_info("hp-8"),
    }
}

if _G.charSelectExists then
    CT_JER = _G.charSelect.character_add("Jer", { "A helmet man who loves cars and speed.",
                                                    "Jess' older brother.",
                                                    "Age:  21,    Height:  6'4",
                                                    "",
                                                    "Jer's moveset is based around",
                                                    "maintaining speed but is designed for",
                                                    "more experienced players.",
                                                    "His powerups still serve their vanilla",
                                                    "purpose but have slight adjustments.",
                                                    "",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_JER, CT_MARIO, TEX_JER)
    CT_JESS = _G.charSelect.character_add("Jess", { "A clumsy gal that loves the winter.",
                                                    "Jer's younger sister.",
                                                    "Age:  19,    Height:  6'0", 
                                                    "",
                                                    "Jess' moveset is designed for less", 
                                                    "experienced players, with",
                                                    "easier, assisted platforming.",
                                                    "Her powerups are different, and will",
                                                    "make some stars easier to get but",
                                                    "others impossible without help.",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 200}, E_MODEL_JESS, CT_MARIO, TEX_JESS)
end

local CSloaded = false
local function on_character_select_load()
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER_LEGACY, "Legacy")
    _G.charSelect.character_add_animations(E_MODEL_JER, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_JER, capJER)
    _G.charSelect.character_add_health_meter(CT_JER, HEALTH_METER_JER)
    _G.charSelect.character_add_voice(E_MODEL_JER, VOICETABLE_JER)

    _G.charSelect.character_add_palette_preset(E_MODEL_JESS, PALETTE_JESS, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS, PALETTE_JESS_FIRE, "Fire")
    _G.charSelect.character_add_animations(E_MODEL_JESS, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESS, capJESS)
    _G.charSelect.character_add_health_meter(CT_JESS, HEALTH_METER_JESS)
    _G.charSelect.character_add_voice(E_MODEL_JESS, VOICETABLE_JESS)
    -- SHADES --
    _G.charSelect.character_add_costume(CT_JER, "Shades", { "Jer dressed for a sunny vacation.",
                                                    "Jess' older brother.",
                                                    "Age:  21,    Height:  6'4",
                                                    "",
                                                    "Jer's moveset is based around",
                                                    "maintaining speed but is designed for",
                                                    "more experienced players.",
                                                    "His powerups still serve their vanilla",
                                                    "purpose but have slight adjustments.",
                                                    "",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_JER_BEACH, CT_MARIO, TEX_JER)
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_BEACH, PALETTE_JER_BEACH, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_BEACH, PALETTE_80_SUNSET, "80's Sunset")
    _G.charSelect.character_add_animations(E_MODEL_JER_BEACH, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_JER_BEACH, capJER_BEACH)
    _G.charSelect.character_add_voice(E_MODEL_JER_BEACH, VOICETABLE_JER)
    -- LUCKY --
    _G.charSelect.character_add_costume(CT_JER, "Lucky", { '"Welcome to Fortnite Peter."',
                                                    "Jess' older brother.",
                                                    "Age:  21,    Height:  6'4",
                                                    "",
                                                    "Jer's moveset is based around",
                                                    "maintaining speed but is designed for",
                                                    "more experienced players.",
                                                    "His powerups still serve their vanilla",
                                                    "purpose but have slight adjustments.",
                                                    "",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_LUCKY, CT_MARIO, TEX_JER)
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_LUCKY, "Rider")
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_BURNOUT, "Burnout")
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_LENNY, "Lenny")
    _G.charSelect.character_add_animations(E_MODEL_LUCKY, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_LUCKY, capJER)
    _G.charSelect.character_add_voice(E_MODEL_LUCKY, VOICETABLE_JER)
    -- BEACHY --
    _G.charSelect.character_add_costume(CT_JESS, "Beachy", { "Jess dressed for a sunny vacation.",
                                                    "Jer's younger sister.",
                                                    "Age:  19,    Height:  6'0", 
                                                    "",
                                                    "Jess' moveset is designed for less", 
                                                    "experienced players, with",
                                                    "easier, assisted platforming.",
                                                    "Her powerups are different, and will",
                                                    "make some stars easier to get but",
                                                    "others impossible without help.",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 200}, E_MODEL_JESS_BEACH, CT_MARIO, TEX_JESS)
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_JESS_BEACH, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_POPULAR_GIRL, "Popular Girl")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_SUNNY, "Sunny")
    _G.charSelect.character_add_animations(E_MODEL_JESS_BEACH, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESS_BEACH, capJESS_BEACH)
    _G.charSelect.character_add_voice(E_MODEL_JESS_BEACH, VOICETABLE_JESS)
    -- JESSILYNN --
    _G.charSelect.character_add_costume(CT_JESS, "Jessilynn", { "Jess dressed for the mines.",
                                                    "Jer's younger sister.",
                                                    "Age:  19,    Height:  6'0", 
                                                    "",
                                                    "Jess' moveset is designed for less", 
                                                    "experienced players, with",
                                                    "easier, assisted platforming.",
                                                    "Her powerups are different, and will",
                                                    "make some stars easier to get but",
                                                    "others impossible without help.",
                                                    "",
                                                    "Type '/jj-moves' for help.",
                                                    "Ver "..VER_NUM
                                                    }, "JerThePear", {r = 000, g = 255, b = 200}, E_MODEL_JESSILYNN, CT_MARIO, TEX_JESS)
    _G.charSelect.character_add_palette_preset(E_MODEL_JESSILYNN, PALETTE_JESSILYNN, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESSILYNN, PALETTE_ANNA, "Annalynn")
    _G.charSelect.character_add_animations(E_MODEL_JESSILYNN, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESSILYNN, capJESSILYNN)
    _G.charSelect.character_add_voice(E_MODEL_JESSILYNN, VOICETABLE_JESS)

    -- Categories
    _G.charSelect.character_set_category(CT_JER, "Jer + Jess")
    _G.charSelect.character_set_category(CT_JESS, "Jer + Jess")

    _G.charSelect.character_set_category(CT_JER, "Squishy Workshop")
    _G.charSelect.character_set_category(CT_JESS, "Squishy Workshop")

    CSloaded = true
end

-- Compare table positions
function _G.is_jess()
    return CT_JESS == _G.charSelect.character_get_current_number()
end
function _G.is_jer()
    return CT_JER == _G.charSelect.character_get_current_number()
end

local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.sound(m, sound) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.snore(m) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.snore(m) end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)