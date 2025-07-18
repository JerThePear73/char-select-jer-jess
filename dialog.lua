local function default_vanish_dialog()
    smlua_text_utils_dialog_replace(DIALOG_129, 1, 5, 40, 200, ("Welcome to the Vanish\nCap Switch Course! All of\nthe blue blocks you find\nwill become solid once you\nstep on the Cap Switch.\nYou'll disappear when you\nput on the Vanish Cap, so\nyou'll be able to elude\nenemies and walk through\nmany things. Try it out!"))
end
local function default_metal_dialog()
    smlua_text_utils_dialog_replace(DIALOG_130, 1, 5, 40, 200, ("Welcome to the Metal Cap\nSwitch Course! Once you\nstep on the Cap Switch,\nthe green blocks will\nbecome solid.\nWhen you turn your body\ninto metal with the Metal\nCap, you can walk\nunderwater! Try it!"))
end
local function default_wing_dialog()
    smlua_text_utils_dialog_replace(DIALOG_131, 1, 5, 40, 200, ("Welcome to the Wing Cap\nCourse! Step on the red\nswitch at the top of the\ntower, in the center of\nthe rainbow ring.\nWhen you trigger the\nswitch, all of the red\nblocks you find will\nbecome solid.\n\nTry out the Wing Cap! Do\nthe Triple Jump to take\noff and press [Z] to land.\n\n\nPull back on the Control\nStick to go up and push\nforward to nose down,\njust as you would when\nflying an airplane."))
end

local function dialogs(m)
    local m = gMarioStates[0]

  for i = 0, MAX_PLAYERS - 1 do
    if is_jer() then
        set_dialog_override_color(0, 70, 0, 150, 255, 255, 255, 255)
    elseif is_jess() then
        set_dialog_override_color(0, 50, 70, 150, 255, 255, 255, 255)
    elseif is_davy() then
        set_dialog_override_color(150, 100, 0, 150, 255, 255, 255, 255)
    else
        reset_dialog_override_color()
    end



    -- Dialog overrides

    if is_jer() then
        smlua_text_utils_dialog_replace(DIALOG_129, 1, 5, 40, 200, (
"Float like a Cadillac,\
Sting like a Beemer! The\
Vanish Cap will\
make Jer as light as a\
feather!\
Jump higher and fall\
slower as long as you\
hold down the [A] button.\
\nGive it a Try!"))
        smlua_text_utils_dialog_replace(DIALOG_130, 1, 5, 40, 200, (
"Start your engines and\
hit the road! The Metal\
Flower will grant Jer\
faster running speed\
than ever before!\
However he will be slower\
to accelerate from a\
standstill.\
\nGive it a Try!"))
        smlua_text_utils_dialog_replace(DIALOG_131, 1, 5, 40, 200, (
"Welcome to the Wing-\
wait what's on your back?\
The Nos Canister will\
let Jer boost when\
jumping or flying!\
When the bar is red you\
will gain slight continuous\
momentum, but a full\
green tank will give him\
an instant burst of speed!\
Tap [B] to slow down, press\
the [A] button to boost and\
keep an eye on the meter.\
\nGive it a Try!"))
    else
        default_vanish_dialog()
        default_wing_dialog()
        if not is_jess() then
            default_metal_dialog()
            default_wing_dialog()
        end
    end

    if is_jess() then
        smlua_text_utils_dialog_replace(DIALOG_130, 1, 5, 40, 200, (
"Is it cold in here? or is\
it just me? The Ice Flower\
will turn Jess to Ice and\
allow her to skate on both\
water and lava!\
Press [A] while skating to\
perform an exquisite\
figure skating jump!\
\nGive it a Try!"))
        smlua_text_utils_dialog_replace(DIALOG_131, 1, 5, 40, 200, ( -- don't bother. Dialog doesn't play if you aren't flying
"You picked up the Flash\
Liquidizer Ultra Dousing\
Device! Or better known as\
FLUDD.\
\n\nWhile you may not be\
able to fly, FLUDD will let\
Jess hover during her jumps\
by pressing the [A] button!\
Ground Pounds and hit [A] to\
Rocket Jump or hold [Z] while\
sliding on your stomach for\
some awesome slip 'n slide action!\
\nGive it a Try!"))
    elseif not is_jer() then
        default_metal_dialog()
        default_wing_dialog()
    end
  end
end

hook_event(HOOK_MARIO_UPDATE, dialogs)

--cursor stuff
local TEX_JER_HAND_OPEN = get_texture_info("JERhandopen")
local TEX_JER_HAND_CLOSED = get_texture_info("JERhandclosed")
local pastchar = _G.charSelect.character_get_current_number()
function JERdialog(m)
if m.playerIndex == 0 then
    if _G.charSelectExists then
        if CT_JER == _G.charSelect.character_get_current_number() then
            set_dialog_override_color(178, 204, 102, 175, 255, 255, 255, 255)
            texture_override_set("gd_texture_hand_open", TEX_JER_HAND_OPEN)
            texture_override_set("gd_texture_hand_closed", TEX_JER_HAND_CLOSED)
        end
    if _G.charSelect.character_get_current_number() ~= CT_JER then
        if _G.charSelect.character_get_current_number() ~= pastchar then
            reset_dialog_override_color()
            texture_override_reset("gd_texture_hand_open")
            texture_override_reset("gd_texture_hand_closed")
        end
    end
pastchar = _G.charSelect.character_get_current_number()
end
end
end

hook_event(HOOK_MARIO_UPDATE, JERdialog)