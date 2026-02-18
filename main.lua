-- name: [CS] \\#00aa00\\Jer \\#ffffff\\& \\#22ccff\\Jess
-- description: [CS] \\#00aa00\\Jer \\#ffffff\\+ \\#22ccff\\Jess\n\\#ffffff\\By \\#008800\\JerThePear\n\n\\#ffffff\\Jer and Jess find an old decrepit N64 in their attic and after turning it on, the two siblings get sucked into their TV and now must run around collecting Power Stars.\n\n\\#ff8000\\NEW Davy Mode!\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

local TEXT_MOD_NAME = "Jer + Jess"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

-- Models --
local E_MODEL_JER = smlua_model_util_get_id('jer_geo')
local E_MODEL_JESS = smlua_model_util_get_id('jess_geo')
local E_MODEL_DAVY = smlua_model_util_get_id('davy_geo')
--local E_MODEL_ROBO = smlua_model_util_get_id('robo_jess_geo')

-- Credits --
_G.charSelect.credit_add(TEXT_MOD_NAME, "JerThePear", "Creator")
_G.charSelect.credit_add(TEXT_MOD_NAME, "SaulTube", "Sprites, Coding, Combiners")
_G.charSelect.credit_add(TEXT_MOD_NAME, "Kaktus64", "Coding")
_G.charSelect.credit_add(TEXT_MOD_NAME, "Squishy6094", "Character Select, Coding")
_G.charSelect.credit_add(TEXT_MOD_NAME, "Xeebleton", "Being cool")
_G.charSelect.credit_add(TEXT_MOD_NAME, "Isikle", "Being very cool")

-- Textures --
local TEX_JER = get_texture_info('jj-icon-jer')
local TEX_JESS = get_texture_info('jj-icon-jess')
local TEX_DAVY = get_texture_info('jj-icon-davy')
--local TEX_ROBO = get_texture_info('jj-icon-robo')

local TEX_ART_JER = get_texture_info('jj-graffiti-jer')
local TEX_ART_JESS = get_texture_info('jj-graffiti-jess')
local TEX_ART_DAVY = get_texture_info('jj-graffiti-davy')
--local ART_ROBO = get_texture_info('jj-graffiti-robo')

-- Sound --
local SOUND_MENU_THEME_JER = audio_stream_load('char-select-menu-theme-jer.ogg')
local SOUND_MENU_THEME_JESS = audio_stream_load('char-select-menu-theme-jess.ogg')
local SOUND_MENU_THEME_DAVY = audio_stream_load('char-select-menu-theme-davy.ogg')

CHAR_SOUND_EXTRA_1 = CHAR_SOUND_MAX + 1
CHAR_SOUND_YEEHAW = CHAR_SOUND_MAX  + 2
CHAR_SOUND_PIPE = CHAR_SOUND_MAX    + 3
CHAR_SOUND_ZAP = CHAR_SOUND_MAX     + 4

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
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'jer_gaybowser.ogg',
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
    [CHAR_SOUND_OKEY_DOKEY] = 'jer_yeah_jazzy.ogg',
    --CHAR_SOUND_MAX
    [CHAR_SOUND_EXTRA_1] = 'jj_sound_rev.ogg',
    [CHAR_SOUND_YEEHAW] = {'jer_heeyaw.ogg', 'jer_yeehaw.ogg'},
    [CHAR_SOUND_PIPE] = 'jj_sound_pipe.ogg',
    [CHAR_SOUND_ZAP] = 'jj_sound_zap.ogg',
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
    [CHAR_SOUND_OKEY_DOKEY] = 'jess_oh_yeah.ogg',
    --CHAR_SOUND_MAX
    [CHAR_SOUND_EXTRA_1] = 'jess_galaxy_spin.ogg',
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
    [CHAR_SOUND_OKEY_DOKEY] = 'davy_hohoyeahah.ogg',
}

local PALETTES_JER = {
    {
        name = "Default",
        [PANTS]  = "303030",
        [SHIRT]  = "305e3d",
        [GLOVES] = "303030",
        [SHOES]  = "85642c",
        [HAIR]   = "462c1e",
        [SKIN]   = "ffc2ab",
        [CAP]    = "4c4c4c",
        [EMBLEM] = "00ff00",
    },
    {
        name = "Legacy",
        [PANTS]  = "008000",
        [SHIRT]  = "ffff6c",
        [GLOVES] = "008000",
        [SHOES]  = "462c1e",
        [HAIR]   = "462c1e",
        [SKIN]   = "ffba90",
        [CAP]    = "4c4c4c",
        [EMBLEM] = "00ff00",
    },
    {
        name = "GameGuy",
        [PANTS]  = "0d350d",
        [SHIRT]  = "0d350d",
        [GLOVES] = "0d350d",
        [SHOES]  = "346734",
        [HAIR]   = "346734",
        [SKIN]   = "a3c113",
        [CAP]    = "346734",
        [EMBLEM] = "a3c113",
    },
    {
        name = "Dreamwalker",
        [PANTS]  = "003300",
        [SHIRT]  = "ff0080",
        [GLOVES] = "00ff00",
        [SHOES]  = "ff0080",
        [HAIR]   = "005f00",
        [SKIN]   = "00ff00",
        [CAP]    = "008000",
        [EMBLEM] = "66be00",
    },
    {
        name = "Dead Meat",
        [PANTS]  = "00413c",
        [SHIRT]  = "ffffff",
        [GLOVES] = "009378",
        [SHOES]  = "b92c50",
        [HAIR]   = "00704d",
        [SKIN]   = "ffcd90",
        [CAP]    = "009378",
        [EMBLEM] = "009378",
    },
    {
        name = "Carrot",
        [PANTS]  = "625900",
        [SHIRT]  = "c36400",
        [GLOVES] = "ffba90",
        [SHOES]  = "c36400",
        [HAIR]   = "ffffff",
        [SKIN]   = "ffba90",
        [CAP]    = "ffffff",
        [EMBLEM] = "c36400",
    },
    {
        name = "Bad at The Game",
        [PANTS]  = "ffffff",
        [SHIRT]  = "ff0000",
        [GLOVES] = "fec179",
        [SHOES]  = "333333",
        [HAIR]   = "730600",
        [SKIN]   = "fec179",
        [CAP]    = "ffffff",
        [EMBLEM] = "ff0000",
    },
}
local PALETTES_JESS = {
    {
        name = "Default",
        [PANTS]  = "7195ac",
        [SHIRT]  = "ffffff",
        [GLOVES] = "ffba90",
        [SHOES]  = "3f3f3f",
        [HAIR]   = "462c1e",
        [SKIN]   = "ffba90",
        [CAP]    = "ae0000",
        [EMBLEM] = "ffc200",
    },
    {
        name = "Legacy",
        [PANTS]  = "8cc6ff",
        [SHIRT]  = "bbff4d",
        [GLOVES] = "ffba90",
        [SHOES]  = "462c1e",
        [HAIR]   = "462c1e",
        [SKIN]   = "ffba90",
        [CAP]    = "8cc6ff",
        [EMBLEM] = "bbff4d",
    },
    {
        name = "GameGal",
        [PANTS]  = "4f4f4f",
        [SHIRT]  = "ffffff",
        [GLOVES] = "a6a6a6",
        [SHOES]  = "4f4f4f",
        [HAIR]   = "8c8c8c",
        [SKIN]   = "a6a6a6",
        [CAP]    = "4f4f4f",
        [EMBLEM] = "ffffff",
    },
    {
        name = "Boy Hungry",
        [PANTS]  = "65869d",
        [SHIRT]  = "cdbd8f",
        [GLOVES] = "9eff93",
        [SHOES]  = "3a4a65",
        [HAIR]   = "9c2c37",
        [SKIN]   = "9eff93",
        [CAP]    = "40354e",
        [EMBLEM] = "9099ae",
    },
    {
        name = "Autumn Breeze",
        [PANTS]  = "333333",
        [SHIRT]  = "6b5033",
        [GLOVES] = "ffba90",
        [SHOES]  = "dddddd",
        [HAIR]   = "462c1e",
        [SKIN]   = "ffba90",
        [CAP]    = "b13a32",
        [EMBLEM] = "dddddd",
    },
    {
        name = "Demon",
        [PANTS]  = "333333",
        [SHIRT]  = "8b2121",
        [GLOVES] = "e9b1aa",
        [SHOES]  = "222222",
        [HAIR]   = "ffffff",
        [SKIN]   = "e9b1aa",
        [CAP]    = "222222",
        [EMBLEM] = "666666",
    },
    {
        name = "Cave Dweller",
        [PANTS]  = "33394d",
        [SHIRT]  = "9975d4",
        [GLOVES] = "ffdca8",
        [SHOES]  = "271c45",
        [HAIR]   = "090c09",
        [SKIN]   = "ffdca8",
        [CAP]    = "390e52",
        [EMBLEM] = "ecd1ff",
    },
}
local PALETTES_DAVY = {
    {
        name = "Default",
        [PANTS]  = "303030",
        [SHIRT]  = "bbbbbb",
        [GLOVES] = "888888",
        [SHOES]  = "303030",
        [HAIR]   = "bbbbbb",
        [SKIN]   = "ffffff",
        [CAP]    = "ff8200",
        [EMBLEM] = "ffffff",
    },
    {
        name = "Legacy",
        [PANTS]  = "ff8000",
        [SHIRT]  = "222222",
        [GLOVES] = "552945",
        [SHOES]  = "552945",
        [HAIR]   = "bbbbbb",
        [SKIN]   = "ffffff",
        [CAP]    = "ff8000",
        [EMBLEM] = "222222",
    },
    {
        name = "VirtualGuy",
        [PANTS]  = "300000",
        [SHIRT]  = "bb0000",
        [GLOVES] = "880000",
        [SHOES]  = "300000",
        [HAIR]   = "bb0000",
        [SKIN]   = "ff0000",
        [CAP]    = "ff0000",
        [EMBLEM] = "ff0000",
    },
    {
        name = "Cotton Candy",
        [PANTS]  = "5bcefa",
        [SHIRT]  = "f5a9b8",
        [GLOVES] = "5bcefa",
        [SHOES]  = "5bcefa",
        [HAIR]   = "f5a9b8",
        [SKIN]   = "ffffff",
        [CAP]    = "ffffff",
        [EMBLEM] = "f5a9b8",
    },
    {
        name = "Pissboy",
        [PANTS]  = "1f2f34",
        [SHIRT]  = "006080",
        [GLOVES] = "ffff00",
        [SHOES]  = "1f2f34",
        [HAIR]   = "ffab00",
        [SKIN]   = "ffffff",
        [CAP]    = "ffff00",
        [EMBLEM] = "006080",
    },
    {
        name = "Manhattan",
        [PANTS]  = "301a22",
        [SHIRT]  = "008eff",
        [GLOVES] = "59ffb2",
        [SHOES]  = "301a22",
        [HAIR]   = "99ffff",
        [SKIN]   = "ffffff",
        [CAP]    = "df1a10",
        [EMBLEM] = "008eff",
    },
    {
        name = "Cantaloupe",
        [PANTS]  = "30251b",
        [SHIRT]  = "009d4d",
        [GLOVES] = "9b623c",
        [SHOES]  = "30251b",
        [HAIR]   = "85502c",
        [SKIN]   = "ffffff",
        [CAP]    = "a00040",
        [EMBLEM] = "009d4d",
    },
    {
        name = "Parchment",
        [PANTS]  = "4782c9",
        [SHIRT]  = "ffffff",
        [GLOVES] = "ffe467",
        [SHOES]  = "ff4711",
        [HAIR]   = "bbbbbb",
        [SKIN]   = "ffffff",
        [CAP]    = "ff4711",
        [EMBLEM] = "ffe467",
    },
    {
        name = "Decayed",
        [PANTS]  = "101010",
        [SHIRT]  = "a6a6a6",
        [GLOVES] = "595959",
        [SHOES]  = "101010",
        [HAIR]   = "d9d79e",
        [SKIN]   = "8c8b62",
        [CAP]    = "5c3b1b",
        [EMBLEM] = "a6a6a6",
    },
}


local CAP_JER = {
    normal = smlua_model_util_get_id("jj_cap_jer_helmet_geo"),
    wing = smlua_model_util_get_id("jj_cap_jer_nos_geo"),
    metal = smlua_model_util_get_id("jj_cap_jer_metal_geo"),
    metalWing = smlua_model_util_get_id("jj_cap_jer_metalnos_geo"),
}
local CAP_JESS = {
    normal = smlua_model_util_get_id("jj_cap_jess_hat_geo"),
    wing = smlua_model_util_get_id("jj_cap_jess_fludd_geo"),
    metal = smlua_model_util_get_id("jj_cap_jess_ice_geo"),
    metalWing = smlua_model_util_get_id("jj_cap_jess_icefludd_geo"),
}
local CAP_DAVY = {
    normal = smlua_model_util_get_id("jj_cap_davy_scarf_geo"),
    wing = smlua_model_util_get_id("jj_cap_davy_star_geo"),
    metal = smlua_model_util_get_id("jj_cap_davy_magma_geo"),
    metalWing = smlua_model_util_get_id("jj_cap_davy_magmastar_geo"),
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
    [CHAR_ANIM_WALKING] = "jess_walking",
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
local EYETABLE_JESS = {
    [_G.charSelect.CS_ANIM_MENU] = MARIO_EYES_LOOK_RIGHT,
}
local ANIMTABLE_DAVY = {
    [_G.charSelect.CS_ANIM_MENU] = "davy_menu_anim",
    [CHAR_ANIM_SINGLE_JUMP] = "davy_single_jump",
    [CHAR_ANIM_IDLE_HEAD_LEFT] = "davy_idle",
    [CHAR_ANIM_IDLE_HEAD_RIGHT] = "davy_idle",
    [CHAR_ANIM_IDLE_HEAD_CENTER] = "davy_idle",
    [CHAR_ANIM_FIRST_PERSON] = "davy_idle"
}
local EYETABLE_DAVY = {
    [_G.charSelect.CS_ANIM_MENU] = MARIO_EYES_LOOK_RIGHT,
}

local HEALTH_METER_JER = {
    label = {
        left = get_texture_info("jj-pie-jer-left"),
        right = get_texture_info("jj-pie-jer-right"),
    },
    pie = {
        [1] = get_texture_info("jj-pie-1"),
        [2] = get_texture_info("jj-pie-2"),
        [3] = get_texture_info("jj-pie-3"),
        [4] = get_texture_info("jj-pie-4"),
        [5] = get_texture_info("jj-pie-5"),
        [6] = get_texture_info("jj-pie-6"),
        [7] = get_texture_info("jj-pie-7"),
        [8] = get_texture_info("jj-pie-8"),
    }
}
local HEALTH_METER_JESS = {
    label = {
        left = get_texture_info("jj-pie-jess-left"),
        right = get_texture_info("jj-pie-jess-right"),
    },
    pie = {
        [1] = get_texture_info("jj-pie-1"),
        [2] = get_texture_info("jj-pie-2"),
        [3] = get_texture_info("jj-pie-3"),
        [4] = get_texture_info("jj-pie-4"),
        [5] = get_texture_info("jj-pie-5"),
        [6] = get_texture_info("jj-pie-6"),
        [7] = get_texture_info("jj-pie-7"),
        [8] = get_texture_info("jj-pie-8"),
    }
}
local HEALTH_METER_DAVY = {
    label = {
        left = get_texture_info("jj-pie-davy-left"),
        right = get_texture_info("jj-pie-davy-right"),
    },
    pie = {
        [1] = get_texture_info("jj-pie-1"),
        [2] = get_texture_info("jj-pie-2"),
        [3] = get_texture_info("jj-pie-3"),
        [4] = get_texture_info("jj-pie-4"),
        [5] = get_texture_info("jj-pie-5"),
        [6] = get_texture_info("jj-pie-6"),
        [7] = get_texture_info("jj-pie-7"),
        [8] = get_texture_info("jj-pie-8"),
    }
}
local HEALTH_METER_ROBO_JESS = {
    label = {
        left = get_texture_info("jj-pie-robo-left"),
        right = get_texture_info("jj-pie-robo-right"),
    },
    pie = {
        [1] = get_texture_info("jj-pie-1"),
        [2] = get_texture_info("jj-pie-2"),
        [3] = get_texture_info("jj-pie-3"),
        [4] = get_texture_info("jj-pie-4"),
        [5] = get_texture_info("jj-pie-5"),
        [6] = get_texture_info("jj-pie-6"),
        [7] = get_texture_info("jj-pie-7"),
        [8] = get_texture_info("jj-pie-8"),
    }
}

if _G.charSelectExists then
    CT_JER = _G.charSelect.character_add("Jer", { "A helmet man with a love for speed. Age: 21, Height: 6'4, Jess' older brother. Jer's moveset is based around maintaining speed but is designed for more experienced players. His powerups still serve their vanilla purpose but have slight adjustments. Type '/jj-moves' for help."},
        "JerThePear",
        {r = 000, g = 255, b = 000},
        E_MODEL_JER,
        CT_MARIO,
        TEX_JER,
        1.25
    )
    CT_JESS = _G.charSelect.character_add("Jess", { "A clumsy gal that loves the winter. Age: 19, Height: 6'0, Jer's younger sister. Jess' moveset is designed for less experienced players, with easier platforming. Her powerups are different and will make some stars easier but others impossible. Type '/jj-moves' for help."},
        "JerThePear",
        {r = 000, g = 255, b = 125},
        E_MODEL_JESS,
        CT_MARIO,
        TEX_JESS,
        1.25
    )
    CT_DAVY = _G.charSelect.character_add("Davy", { "A skeleton-cyborg mix hellbent on chaos. Age: ??, Height: 6'9, A friend of Jer's. Davy's moveset is just meant to be silly, aside from his bomb throw ability. Type '/jj-moves' for help."},
        "JerThePear",
        {r = 255, g = 165, b = 000},
        E_MODEL_DAVY,
        CT_MARIO,
        TEX_DAVY,
        1.25
    )
end

local CSloaded = false
local function on_character_select_load()
    for i = 1, #PALETTES_JER do
        _G.charSelect.character_add_palette_preset(E_MODEL_JER, PALETTES_JER[i], PALETTES_JER[i].name)
    end
    for i = 1, #PALETTES_JESS do
        _G.charSelect.character_add_palette_preset(E_MODEL_JESS, PALETTES_JESS[i], PALETTES_JESS[i].name)
    end
    for i = 1, #PALETTES_DAVY do
        _G.charSelect.character_add_palette_preset(E_MODEL_DAVY, PALETTES_DAVY[i], PALETTES_DAVY[i].name)
    end

    -- Model dependant
    _G.charSelect.character_add_animations(E_MODEL_JER, ANIMTABLE_JER)
    _G.charSelect.character_add_animations(E_MODEL_JESS, ANIMTABLE_JESS, EYETABLE_JESS)
    _G.charSelect.character_add_animations(E_MODEL_DAVY, ANIMTABLE_DAVY, EYETABLE_DAVY)
    
    _G.charSelect.character_add_caps(E_MODEL_JER, CAP_JER)
    _G.charSelect.character_add_caps(E_MODEL_JESS, CAP_JESS)
    _G.charSelect.character_add_caps(E_MODEL_DAVY, CAP_DAVY)

    _G.charSelect.character_add_voice(E_MODEL_JER, VOICETABLE_JER)
    _G.charSelect.character_add_voice(E_MODEL_JESS, VOICETABLE_JESS)
    _G.charSelect.character_add_voice(E_MODEL_DAVY, VOICETABLE_DAVY)

    -- Char dependant
    _G.charSelect.character_add_health_meter(CT_JER, HEALTH_METER_JER)
    _G.charSelect.character_add_health_meter(CT_JESS, HEALTH_METER_JESS)
    _G.charSelect.character_add_health_meter(CT_DAVY, HEALTH_METER_DAVY)

    _G.charSelect.character_add_graffiti(CT_JER, TEX_ART_JER)
    _G.charSelect.character_add_graffiti(CT_JESS, TEX_ART_JESS)
    _G.charSelect.character_add_graffiti(CT_DAVY, TEX_ART_DAVY)
    
    _G.charSelect.character_add_menu_instrumental(CT_JER, SOUND_MENU_THEME_JER)
    _G.charSelect.character_add_menu_instrumental(CT_JESS, SOUND_MENU_THEME_JESS)
    _G.charSelect.character_add_menu_instrumental(CT_DAVY, SOUND_MENU_THEME_DAVY)

    -- Categories
    _G.charSelect.character_set_category(CT_JER, "Jer + Jess")
    _G.charSelect.character_set_category(CT_JESS, "Jer + Jess")
    _G.charSelect.character_set_category(CT_DAVY, "Jer + Jess")

    _G.charSelect.character_set_category(CT_JER, "DXA")
    _G.charSelect.character_set_category(CT_JESS, "DXA")
    _G.charSelect.character_set_category(CT_DAVY, "DXA")

    _G.charSelect.character_set_category(CT_JER, "Squishy Workshop")
    _G.charSelect.character_set_category(CT_JESS, "Squishy Workshop")
    _G.charSelect.character_set_category(CT_DAVY, "Squishy Workshop")

    CSloaded = true
end

-- Compare table positions
function _G.is_jer()
    return CT_JER == _G.charSelect.character_get_current_number()
end
function _G.is_jess()
    return CT_JESS == _G.charSelect.character_get_current_number()
end
function _G.is_davy()
    return CT_DAVY == _G.charSelect.character_get_current_number()
end
--function _G.is_robojess()
--    return CT_ROBO == _G.charSelect.character_get_current_number()
--end

local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.sound(m, sound) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.sound(m, sound) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_DAVY then return _G.charSelect.voice.sound(m, sound) end
    --if _G.charSelect.character_get_voice(m) == VOICETABLE_ROBO_JESS then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JER then return _G.charSelect.voice.snore(m) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_JESS then return _G.charSelect.voice.snore(m) end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_DAVY then return _G.charSelect.voice.snore(m) end
    --if _G.charSelect.character_get_voice(m) == VOICETABLE_ROBO_JESS then return _G.charSelect.voice.snore(m) end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)

local gExtraStates = {}
for i = 0, MAX_PLAYERS - 1 do
    gExtraStates[i] = {}
    local e = gExtraStates[i]
    e.davyHasWing = 0
end

local function davy_flying_star(m)
    local np = gNetworkPlayers[m.playerIndex]
    local e = gExtraStates[m.playerIndex]

    if CT_DAVY == _G.charSelect.character_get_current_number(m.playerIndex) then
        if m.flags & MARIO_WING_CAP ~= 0 then
            network_player_set_override_palette_color(np, EMBLEM,   {r = 192, g = 0, b = 0})
            network_player_set_override_palette_color(np, CAP,      {r = 192, g = 0, b = 0})
            network_player_set_override_palette_color(np, GLOVES,   {r = 192, g = 0, b = 0})
            network_player_set_override_palette_color(np, SHIRT,    {r = 34, g = 34, b = 34})
            network_player_set_override_palette_color(np, PANTS,    {r = 34, g = 34, b = 34})
            network_player_set_override_palette_color(np, SHOES,    {r = 48, g = 48, b = 48})

            e.davyHasWing = true
        elseif m.flags & MARIO_WING_CAP == 0 and e.davyHasWing then
            network_player_reset_override_palette(np)
            e.davyHasWing = false
        end
    end
end

hook_event(HOOK_MARIO_UPDATE, davy_flying_star)