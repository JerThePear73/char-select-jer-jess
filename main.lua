-- name: [CS] \\#00aa00\\Jer \\#ffffff\\+ \\#22ccff\\Jess
-- description: Mod that adds My characters to SM64 along with their own custom movesets.\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

local TEXT_MOD_NAME = "Jer + Jess"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

-- Models --
local E_MODEL_JER = smlua_model_util_get_id('jer_geo')
local E_MODEL_JER_BEACH = smlua_model_util_get_id('beach_jer_geo')
local E_MODEL_LUCKY = smlua_model_util_get_id('lucky_geo')
local E_MODEL_JER_OG = smlua_model_util_get_id('jer_og_geo')

local E_MODEL_JESS = smlua_model_util_get_id('jess_geo')
local E_MODEL_JESS_BEACH = smlua_model_util_get_id('beach_jess_geo')
local E_MODEL_JESSILYNN = smlua_model_util_get_id('jessilynn_geo')
local E_MODEL_JESS_OG = smlua_model_util_get_id('jess_og_geo')

local E_MODEL_DAVY = smlua_model_util_get_id('davy_geo')

local E_MODEL_TROPHY = smlua_model_util_get_id('trophy_geo')

-- Credits --
local MOD_NAME = "Jer + Jess"
_G.charSelect.credit_add(MOD_NAME, "Jer", "Creator")
_G.charSelect.credit_add(MOD_NAME, "SaulTube", "Sprites, Coding")
_G.charSelect.credit_add(MOD_NAME, "Kaktus64", "Coding")
_G.charSelect.credit_add(MOD_NAME, "Squishy6094", "Character Select, Coding")

-- Textures --
local TEX_JER = get_texture_info('jer_icon')
local TEX_JESS = get_texture_info('jess_icon')
local TEX_DAVY = get_texture_info('davy_icon')
local TEX_TROPHY = get_texture_info('trophy')
local TEX_ART_JER = get_texture_info('graffiti_jer')
local TEX_ART_JESS = get_texture_info('graffiti_jess')

-- Sound --
local SOUND_MENU_THEME_JER = audio_stream_load('char-select-menu-theme-jer.ogg')
local SOUND_MENU_THEME_JESS = audio_stream_load('char-select-menu-theme-jess.ogg')
local SOUND_MENU_THEME_DAVY = audio_stream_load('char-select-menu-theme-davy.ogg')

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
    [CHAR_SOUND_WAAAOOOW] = 'jess_ohno.ogg',
    [CHAR_SOUND_WAH2] = 'jess_ya.ogg',
    [CHAR_SOUND_WHOA] = 'jess_uh_oh.ogg',
    [CHAR_SOUND_YAHOO] = { 'jess_yahoo.ogg', 'jess_woohoo.ogg' },
    [CHAR_SOUND_YAWNING] = nil,
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'jess_yahoo.ogg', 'jess_woohoo.ogg' },
    [CHAR_SOUND_YAH_WAH_HOO] = {'jess_ha.ogg', 'jess_ya.ogg', 'jess_yeah.ogg' },
    [CHAR_SOUND_OKEY_DOKEY] = 'jess_oh_yeah.ogg'
}

VOICETABLE_DAVY = { -- Voices from Skeleton character from Lego Racers (1999)
    [CHAR_SOUND_ATTACKED] = {'davy_ouch.ogg', 'davy_ahh.ogg'},
    [CHAR_SOUND_COUGHING1] = nil,
    [CHAR_SOUND_COUGHING2] = nil,
    [CHAR_SOUND_COUGHING3] = nil,
    [CHAR_SOUND_DOH] = 'davy_ouch.ogg', -- long jump bump
    [CHAR_SOUND_DROWNING] = nil,
    [CHAR_SOUND_DYING] = 'davy_ohno.ogg',
    [CHAR_SOUND_EEUH] = nil, -- climbing ledge
    [CHAR_SOUND_GROUND_POUND_WAH] = 'davy_huehue.ogg',
    [CHAR_SOUND_HAHA] = 'davy_tada.ogg',
    [CHAR_SOUND_HAHA_2] = 'davy_tada.ogg',
    [CHAR_SOUND_HERE_WE_GO] = 'davy_laugh.ogg', -- getting star/power up
    [CHAR_SOUND_HOOHOO] = {'davy_huehue.ogg', 'davy_wohee.ogg'},
    [CHAR_SOUND_HRMM] = nil, -- lifting
    [CHAR_SOUND_IMA_TIRED] = nil,
    [CHAR_SOUND_MAMA_MIA] = 'davy_ohno.ogg',
    [CHAR_SOUND_LETS_A_GO] = 'davy_heehee.ogg', -- starting level
    [CHAR_SOUND_ON_FIRE] = {'davy_ahoey.ogg', 'davy_yeow.ogg'},
    [CHAR_SOUND_OOOF] = 'davy_ouch.ogg',
    [CHAR_SOUND_OOOF2] = 'davy_ouch.ogg', -- thrown out of painting
    [CHAR_SOUND_PANTING] = nil,
    [CHAR_SOUND_PANTING_COLD] = nil,
    [CHAR_SOUND_PUNCH_HOO] = 'davy_wohee.ogg', -- kick
    [CHAR_SOUND_PUNCH_WAH] = 'davy_huehue.ogg', -- punch 2
    [CHAR_SOUND_PUNCH_YAH] = 'davy_ya.ogg', -- punch 1
    [CHAR_SOUND_SO_LONGA_BOWSER] = {'davy_laugh.ogg', 'davy_hohoyeahah.ogg'},
    [CHAR_SOUND_SNORING1] = 'jer_snore1.ogg',
    [CHAR_SOUND_SNORING2] = 'jer_snore2.ogg',
    [CHAR_SOUND_SNORING3] = nil,
    [CHAR_SOUND_TWIRL_BOUNCE] = 'davy_hohoyeahah.ogg',
    [CHAR_SOUND_UH] = 'davy_ouch.ogg', -- wall bonk
    [CHAR_SOUND_UH2] = nil, -- landing long jump
    [CHAR_SOUND_UH2_2] = nil, -- same as uh2 maybe??
    [CHAR_SOUND_WAAAOOOW] = 'davy_ahoey.ogg',
    [CHAR_SOUND_WAH2] = 'davy_haha.ogg', -- throw
    [CHAR_SOUND_WHOA] = 'davy_ahoey.ogg',
    [CHAR_SOUND_YAHOO] = {'davy_heehee.ogg', 'davy_yeawohee.ogg'},
    [CHAR_SOUND_YAWNING] = nil,
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {'davy_yeawohee.ogg', 'davy_hohoyeahah.ogg'},
    [CHAR_SOUND_YAH_WAH_HOO] = {'davy_haha.ogg', 'davy_ya.ogg'},
    [CHAR_SOUND_HELLO] = nil,
    [CHAR_SOUND_PRESS_START_TO_PLAY] = nil,
    [CHAR_SOUND_OKEY_DOKEY] = 'davy_hohoyeahah.ogg'
}

local PALETTE_JER = {
    [PANTS]  = "008040",
    [SHIRT]  = "ffaa00",
    [GLOVES] = "008040",
    [SHOES]  = "462c1e",
    [HAIR]   = "00ff00",
    [SKIN]   = "ffba90",
    [CAP]    = "008040",
    [EMBLEM] = "008040",
}
local PALETTE_JER_LEGACY = {
    [PANTS]  = "008000",
    [SHIRT]  = "ffff66",
    [GLOVES] = "008000",
    [SHOES]  = "462c1e",
    [HAIR]   = "00ff00",
    [SKIN]   = "ffba90",
    [CAP]    = "008000",
    [EMBLEM] = "008000",
}
local PALETTE_JER_FIRE = {
    [PANTS]  = "ff4000",
    [SHIRT]  = "222222",
    [GLOVES] = "ff4000",
    [SHOES]  = "462c1e",
    [HAIR]   = "ff7700",
    [SKIN]   = "ffba90",
    [CAP]    = "ff4000",
    [EMBLEM] = "ff4000",
}
local PALETTE_JER_RETRO = {
    [PANTS]  = "F4A000",
    [SHIRT]  = "3F6B00",
    [GLOVES] = "4c4c4c",
    [SHOES]  = "4c4c4c",
    [HAIR]   = "3F6B00",
    [SKIN]   = "ffba90",
    [CAP]    = "3F6B00",
    [EMBLEM] = "3F6B00",
}
local PALETTE_JER_BEACH = {
    [PANTS]  = "FF8900",
    [SHIRT]  = "98FF2E",
    [GLOVES] = "FF8900",
    [SHOES]  = "BC00BC",
    [HAIR]   = "00ff00",
    [SKIN]   = "ffba90",
    [CAP]    = "BC00BC",
    [EMBLEM] = "BC00BC",
}
local PALETTE_80_SUNSET = {
    [PANTS]  = "8000ff",
    [SHIRT]  = "ff0080",
    [GLOVES] = "00ff80",
    [SHOES]  = "ff0080",
    [HAIR]   = "00ff80",
    [SKIN]   = "ffba90",
    [CAP]    = "8000ff",
    [EMBLEM] = "8000ff",
}
local PALETTE_LUCKY = {
    [PANTS]  = "333333",
    [SHIRT]  = "333333",
    [GLOVES] = "222222",
    [SHOES]  = "222222",
    [HAIR]   = "008000",
    [SKIN]   = "ffba90",
    [CAP]    = "FFC900",
    [EMBLEM] = "FFC900",
}
local PALETTE_BURNOUT = {
    [PANTS]  = "777777",
    [SHIRT]  = "4a3333",
    [GLOVES] = "222222",
    [SHOES]  = "222222",
    [HAIR]   = "ff0000",
    [SKIN]   = "ffba90",
    [CAP]    = "222222",
    [EMBLEM] = "ff0000",
}
local PALETTE_LENNY = {
    [PANTS]  = "222222",
    [SHIRT]  = "566b2e",
    [GLOVES] = "222222",
    [SHOES]  = "555555",
    [HAIR]   = "d2002b",
    [SKIN]   = "ffba90",
    [CAP]    = "000000",
    [EMBLEM] = "ff6900",
}
local PALETTE_JER_OG = {
    [PANTS]  = "303030",
    [SHIRT]  = "BCBCBC",
    [GLOVES] = "303030",
    [SHOES]  = "3F3F3F",
    [HAIR]   = "462C1E",
    [SKIN]   = "FFC2AB",
    [CAP]    = "4C4C4C",
    [EMBLEM] = "00FF00",
}
local PALETTE_CARROT = {
    [PANTS]  = "472900",
    [SHIRT]  = "ff6700",
    [GLOVES] = "FFC2AB",
    [SHOES]  = "ffffff",
    [HAIR]   = "ffffff",
    [SKIN]   = "FFC2AB",
    [CAP]    = "4C4C4C",
    [EMBLEM] = "ff6700",
}
local PALETTE_DELIRIOUS = {
    [PANTS]  = "000000",
    [SHIRT]  = "ff0080",
    [GLOVES] = "00ff00",
    [SHOES]  = "00ff00",
    [HAIR]   = "008000",
    [SKIN]   = "00ff00",
    [CAP]    = "008000",
    [EMBLEM] = "00ff00",
}
local PALETTE_SMK_PROTO = {
    [PANTS]  = "0048f8",
    [SHIRT]  = "0048f8",
    [GLOVES] = "ffffff",
    [SHOES]  = "ffffff",
    [HAIR]   = "500600",
    [SKIN]   = "ffbe9b",
    [CAP]    = "ffffff",
    [EMBLEM] = "ff0000",
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
local PALETTE_JESS_OG = {
    [PANTS]  = "77bdff",
    [SHIRT]  = "ffffff",
    [GLOVES] = "ffba90",
    [SHOES]  = "333333",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "771E16",
    [EMBLEM] = "FFCC00",
}
local PALETTE_DEMON = {
    [PANTS]  = "333340",
    [SHIRT]  = "bb0000",
    [GLOVES] = "ffba90",
    [SHOES]  = "111111",
    [HAIR]   = "d0ddff",
    [SKIN]   = "ffba90",
    [CAP]    = "111111",
    [EMBLEM] = "879cb4",
}
local PALETTE_JERIA = {
    [PANTS]  = "2c4654",
    [SHIRT]  = "333333",
    [GLOVES] = "FFC2AB",
    [SHOES]  = "BCBCBC",
    [HAIR]   = "462c1e",
    [SKIN]   = "FFC2AB",
    [CAP]    = "462c1e",
    [EMBLEM] = "BCBCBC",
}
local PALETTE_JESS_RACER = {
    [PANTS]  = "bbff4d",
    [SHIRT]  = "ffffff",
    [GLOVES] = "ffba90",
    [SHOES]  = "922c4d",
    [HAIR]   = "462c1e",
    [SKIN]   = "ffba90",
    [CAP]    = "404455",
    [EMBLEM] = "8295af",
}


local PALETTE_DAVY =  {
    [PANTS]  = "ff8000",
    [SHIRT]  = "222222",
    [GLOVES] = "ff8000",
    [SHOES]  = "552945",
    [HAIR]   = "ffffff",
    [SKIN]   = "ffffff",
    [CAP]    = "ff8000",
    [EMBLEM] = "ff8000",
}
local PALETTE_GREEDY =  {
    [PANTS]  = "5724aa",
    [SHIRT]  = "ff8000",
    [GLOVES] = "ffffb2",
    [SHOES]  = "bc0000",
    [HAIR]   = "ffa200",
    [SKIN]   = "ffffb2",
    [CAP]    = "5724aa",
    [EMBLEM] = "5724aa",
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

local capJER_HELMET = {
    normal = smlua_model_util_get_id("helmet_geo"),
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

local capDAVY = {
    normal = smlua_model_util_get_id("davy_cap_geo"),
    wing = smlua_model_util_get_id("davy_wing_cap_geo"),
    metal = smlua_model_util_get_id("screw_geo"),
    metalWing = smlua_model_util_get_id("davy_metal_wing_cap_geo")
}

local ANIMTABLE_JER = {
    [_G.charSelect.CS_ANIM_MENU] = "jer_menu_anim",
    [CHAR_ANIM_RUNNING] = "jer_run",
    [CHAR_ANIM_TWIRL] = "jer_twirl",
    [CHAR_ANIM_START_TWIRL] = "jer_twirl_start",
    [CHAR_ANIM_TWIRL_LAND] = "jer_twirl_end",
    [CHAR_ANIM_RIDING_SHELL] = "jer_shell_ride",
    [CHAR_ANIM_START_RIDING_SHELL] = "jer_shell_start",
    [CHAR_ANIM_JUMP_RIDING_SHELL] = "jer_shell_fall",
    [CHAR_ANIM_SINGLE_JUMP] = "jer_single_jump",
    [CHAR_ANIM_SLIDEFLIP] = "beytah_slideflip",
    [CHAR_ANIM_SLIDEJUMP] = "jer_wallkick",
}

local ANIMTABLE_JESS = {
    [_G.charSelect.CS_ANIM_MENU] = "jess_menu_anim",
    [CHAR_ANIM_RUNNING] = "jess_run",
    [CHAR_ANIM_IDLE_HEAD_LEFT] = "jess_idle",
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = "jess_idle",
    [CHAR_ANIM_IDLE_HEAD_CENTER] = "jess_idle",
    [CHAR_ANIM_FIRST_PERSON] = "jess_idle",
    [CHAR_ANIM_WAKE_FROM_LYING] = "jess_wakeup",
    [CHAR_ANIM_SLIDEFLIP] = "jess_slideflip",
    [CHAR_ANIM_STOP_SKID] = "jess_brake",
    [CHAR_ANIM_TRIPLE_JUMP_LAND] = "jess_tada",
    [CHAR_ANIM_SINGLE_JUMP] = "jess_single_jump",
    [CHAR_ANIM_LAND_FROM_SINGLE_JUMP] = "jess_land_single_jump",
    [CHAR_ANIM_GENERAL_LAND] = "jess_land_general",
    [CHAR_ANIM_LAND_FROM_DOUBLE_JUMP] = "jess_land_double",
    [CHAR_ANIM_STOP_SLIDE] = "jess_getup_slide",
}

local ANIMTABLE_DAVY = {
    [_G.charSelect.CS_ANIM_MENU] = "davy_menu_anim",
    [CHAR_ANIM_SINGLE_JUMP] = "davy_single_jump",
    [CHAR_ANIM_IDLE_HEAD_LEFT] = "davy_idle",
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = "davy_idle",
    [CHAR_ANIM_IDLE_HEAD_CENTER] = "davy_idle",
    [CHAR_ANIM_FIRST_PERSON] = "davy_idle"
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

local HEALTH_METER_DAVY = {
    label = {
        left = get_texture_info("davy-hp-left"),
        right = get_texture_info("davy-hp-right"),
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
    CT_JER = _G.charSelect.character_add("Jer", { "A helmet man with a love for speed. Age: 21, Height: 6'4, Jess' older brother. Jer's moveset is based around maintaining speed but is designed for more experienced players. His powerups still serve their vanilla purpose but have slight adjustments. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_JER, CT_MARIO, TEX_JER)
    CT_JESS = _G.charSelect.character_add("Jess", { "A clumsy gal that loves the winter. Age: 19, Height: 6'0, Jer's younger sister. Jess' moveset is designed for less experienced players, with easier platforming. Her powerups are different and will make some stars easier but others impossible. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 125}, E_MODEL_JESS, CT_MARIO, TEX_JESS)
    CT_DAVY = _G.charSelect.character_add("Davy", { "A skeleton-cyborg mix hellbent on chaos. Age: ??, Height: 6'9, A friend of Jer's. Davy's moveset is just meant to be silly, aside from his bomb throw ability. Type '/jj-moves' for help."},
        "JerThePear", {r = 255, g = 165, b = 000}, E_MODEL_DAVY, CT_MARIO, TEX_DAVY)
end

local CSloaded = false
local function on_character_select_load()
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER_LEGACY, "Legacy")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER_FIRE, "Fire")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTE_JER_RETRO, "Retro") -- by: Kaktus64
    _G.charSelect.character_add_animations(E_MODEL_JER, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_JER, capJER)
    _G.charSelect.character_add_health_meter(CT_JER, HEALTH_METER_JER)
    _G.charSelect.character_add_voice(E_MODEL_JER, VOICETABLE_JER)
    _G.charSelect.character_add_celebration_star(E_MODEL_JER, E_MODEL_TROPHY, TEX_TROPHY)
    _G.charSelect.character_add_menu_instrumental(CT_JER, SOUND_MENU_THEME_JER)
    _G.charSelect.character_add_grafitti(CT_JER, TEX_ART_JER)

    _G.charSelect.character_add_palette_preset(E_MODEL_JESS, PALETTE_JESS, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS, PALETTE_JESS_FIRE, "Fire")
    _G.charSelect.character_add_animations(E_MODEL_JESS, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESS, capJESS)
    _G.charSelect.character_add_health_meter(CT_JESS, HEALTH_METER_JESS)
    _G.charSelect.character_add_voice(E_MODEL_JESS, VOICETABLE_JESS)
    _G.charSelect.character_add_menu_instrumental(CT_JESS, SOUND_MENU_THEME_JESS)
    _G.charSelect.character_add_grafitti(CT_JESS, TEX_ART_JESS)

    _G.charSelect.character_add_palette_preset(E_MODEL_DAVY, PALETTE_DAVY, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_DAVY, PALETTE_GREEDY, "Greedy")
    _G.charSelect.character_add_voice(E_MODEL_DAVY, VOICETABLE_DAVY)
    _G.charSelect.character_add_caps(E_MODEL_DAVY, capDAVY)
    _G.charSelect.character_add_health_meter(CT_DAVY, HEALTH_METER_DAVY)
    _G.charSelect.character_add_animations(E_MODEL_DAVY, ANIMTABLE_DAVY)
    _G.charSelect.character_add_menu_instrumental(CT_DAVY, SOUND_MENU_THEME_DAVY)
    -- SHADES --
    _G.charSelect.character_add_costume(CT_JER, "Shades", { "Jer dressed for a sunny vacation. Age: 21, Height: 6'4, Jess' older brother. Jer's moveset is based around maintaining speed but is designed for more experienced players. His powerups still serve their vanilla purpose but have slight adjustments. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_JER_BEACH, CT_MARIO, TEX_JER)
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_BEACH, PALETTE_JER_BEACH, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_BEACH, PALETTE_80_SUNSET, "80's Sunset")
    _G.charSelect.character_add_animations(E_MODEL_JER_BEACH, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_JER_BEACH, capJER_BEACH)
    _G.charSelect.character_add_voice(E_MODEL_JER_BEACH, VOICETABLE_JER)
    _G.charSelect.character_add_celebration_star(E_MODEL_JER_BEACH, E_MODEL_TROPHY, TEX_TROPHY)
    -- LUCKY --
    _G.charSelect.character_add_costume(CT_JER, "Lucky", { "Hello Peter, Welcome to Fortnite. Age: 21, Height: 6'4, Jess' older brother. Jer's moveset is based around maintaining speed but is designed for more experienced players. His powerups still serve their vanilla purpose but have slight adjustments. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_LUCKY, CT_MARIO, TEX_JER)
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_LUCKY, "Rider")
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_BURNOUT, "Burnout")
    _G.charSelect.character_add_palette_preset(E_MODEL_LUCKY, PALETTE_LENNY, "Lenny")
    _G.charSelect.character_add_animations(E_MODEL_LUCKY, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_LUCKY, capJER)
    _G.charSelect.character_add_voice(E_MODEL_LUCKY, VOICETABLE_JER)
    _G.charSelect.character_add_celebration_star(E_MODEL_LUCKY, E_MODEL_TROPHY, TEX_TROPHY)
    -- JERAD --
    _G.charSelect.character_add_costume(CT_JER, "Jerad", { "Jer wearing his usual clothes. Age: 21, Height: 6'4, Jess' older brother. Jer's moveset is based around maintaining speed but is designed for more experienced players. His powerups still serve their vanilla purpose but have slight adjustments. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 000}, E_MODEL_JER_OG, CT_MARIO, TEX_JER)
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_OG, PALETTE_JER_OG, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_OG, PALETTE_CARROT, "Carrot")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_OG, PALETTE_DELIRIOUS, "Delirious")
    _G.charSelect.character_add_palette_preset(E_MODEL_JER_OG, PALETTE_SMK_PROTO, "1991")
    _G.charSelect.character_add_animations(E_MODEL_JER_OG, ANIMTABLE_JER)
    _G.charSelect.character_add_caps(E_MODEL_JER_OG, capJER_HELMET)
    _G.charSelect.character_add_voice(E_MODEL_JER_OG, VOICETABLE_JER)
    _G.charSelect.character_add_celebration_star(E_MODEL_JER_OG, E_MODEL_TROPHY, TEX_TROPHY)
    -- BEACHY --
    _G.charSelect.character_add_costume(CT_JESS, "Beachy", { "Jess dressed for a sunny vacation. Age: 19, Height: 6'0, Jer's younger sister. Jess' moveset is designed for less experienced players, with easier platforming. Her powerups are different and will make some stars easier but others impossible. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 125}, E_MODEL_JESS_BEACH, CT_MARIO, TEX_JESS)
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_JESS_BEACH, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_POPULAR_GIRL, "Popular Girl")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_BEACH, PALETTE_SUNNY, "Sunny")
    _G.charSelect.character_add_animations(E_MODEL_JESS_BEACH, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESS_BEACH, capJESS_BEACH)
    _G.charSelect.character_add_voice(E_MODEL_JESS_BEACH, VOICETABLE_JESS)
    -- JESSILYNN --
    _G.charSelect.character_add_costume(CT_JESS, "Jessilynn", { "Jess dressed for the mines. Age: 19, Height: 6'0, Jer's younger sister. Jess' moveset is designed for less experienced players, with easier platforming. Her powerups are different and will make some stars easier but others impossible. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 125}, E_MODEL_JESSILYNN, CT_MARIO, TEX_JESS)
    _G.charSelect.character_add_palette_preset(E_MODEL_JESSILYNN, PALETTE_JESSILYNN, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESSILYNN, PALETTE_ANNA, "Annalynn")
    _G.charSelect.character_add_animations(E_MODEL_JESSILYNN, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESSILYNN, capJESSILYNN)
    _G.charSelect.character_add_voice(E_MODEL_JESSILYNN, VOICETABLE_JESS)
    -- JESSICA --
    _G.charSelect.character_add_costume(CT_JESS, "Jessica", { "Jess wearing her usual clothes. Age: 19, Height: 6'0, Jer's younger sister. Jess' moveset is designed for less experienced players, with easier platforming. Her powerups are different and will make some stars easier but others impossible. Type '/jj-moves' for help."},
        "JerThePear", {r = 000, g = 255, b = 125}, E_MODEL_JESS_OG, CT_MARIO, TEX_JESS)
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_OG, PALETTE_JESS_OG, "Default")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_OG, PALETTE_DEMON, "Demon")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_OG, PALETTE_JERIA, "Jeria")
    _G.charSelect.character_add_palette_preset(E_MODEL_JESS_OG, PALETTE_JESS_RACER, "Racer")
    _G.charSelect.character_add_animations(E_MODEL_JESS_OG, ANIMTABLE_JESS)
    _G.charSelect.character_add_caps(E_MODEL_JESS_OG, capJESS)
    _G.charSelect.character_add_voice(E_MODEL_JESS_OG, VOICETABLE_JESS)

    -- Categories
    _G.charSelect.character_set_category(CT_JER, "Jer + Jess")
    _G.charSelect.character_set_category(CT_JESS, "Jer + Jess")
    _G.charSelect.character_set_category(CT_DAVY, "Jer + Jess")

    _G.charSelect.character_set_category(CT_JER, "Squishy Workshop")
    _G.charSelect.character_set_category(CT_JESS, "Squishy Workshop")
    _G.charSelect.character_set_category(CT_DAVY, "Squishy Workshop")

    CSloaded = true
end

-- Compare table positions
function _G.is_jess()
    return CT_JESS == _G.charSelect.character_get_current_number()
end
function _G.is_jer()
    return CT_JER == _G.charSelect.character_get_current_number()
end
function _G.is_davy()
    return CT_DAVY == _G.charSelect.character_get_current_number()
end

local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.sound(m, sound) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.sound(m, sound) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_DAVY then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.snore(m) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.snore(m) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_DAVY then return _G.charSelect.voice.snore(m) end
end

local function menu_pose(m)
    -- menu pose (Concept by Wall_E20)
    if m.marioObj.header.gfx.animInfo.animID == charSelect.CS_ANIM_MENU and is_jer() and m.playerIndex == 0 then
        if m.marioObj.header.gfx.animInfo.animFrame > 45 and m.marioObj.header.gfx.animInfo.animFrame < 95 then
            m.marioBodyState.eyeState = MARIO_EYES_LOOK_RIGHT
        else
            m.marioBodyState.eyeState = MARIO_EYES_LOOK_LEFT
        end
    end
    if m.marioObj.header.gfx.animInfo.animID == charSelect.CS_ANIM_MENU and is_jess() and m.playerIndex == 0 then
        m.marioBodyState.eyeState = MARIO_EYES_LOOK_RIGHT
    end
    if m.marioObj.header.gfx.animInfo.animID == charSelect.CS_ANIM_MENU and is_davy() and m.playerIndex == 0 then
        m.marioBodyState.eyeState = MARIO_EYES_LOOK_RIGHT
    end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)
hook_event(HOOK_MARIO_UPDATE, menu_pose)