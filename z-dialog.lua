if not _G.charSelectExists then return end

local function dialog_col(m)
    local m = gMarioStates[0]

    if m.playerIndex == 0 then
        if is_jer() then
            set_dialog_override_color(0, 70, 0, 150, 255, 255, 255, 255)
        elseif is_jess() then
            set_dialog_override_color(0, 50, 70, 150, 255, 255, 255, 255)
        elseif is_davy() then
            set_dialog_override_color(150, 100, 0, 150, 255, 255, 255, 255)
        else
            reset_dialog_override_color()
        end
    end
end
hook_event(HOOK_MARIO_UPDATE, dialog_col)


    -- Dialog overrides
    _G.charSelect.character_replace_dialog(CT_JER, DIALOG_129, 1, 5, 40, 200, (
"What you see is not,\
always what you get...\
The Liminal FLower will\
make Jer as light as a\
feather!\
Jump higher and fall\
slower as long as you\
hold down the [A] button.\
\nGive it a Try!"))
    _G.charSelect.character_replace_dialog(CT_JER, DIALOG_130, 1, 5, 40, 200, (
"Start your engines and\
hit the road! The Metal\
Flower will grant Jer\
faster running speed\
than ever before!\
However he will be slower\
to accelerate from a\
standstill.\
\nGive it a Try!"))
    _G.charSelect.character_replace_dialog(CT_JER, DIALOG_131, 1, 5, 40, 200, (
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

    _G.charSelect.character_replace_dialog(CT_JESS, DIALOG_130, 1, 5, 40, 200, (
"Is it cold in here? or is\
it just me? The Ice Flower\
will turn Jess to Ice and\
allow her to skate on both\
water and lava!\
Press [A] while skating to\
perform an exquisite\
figure skating jump!\
\nGive it a Try!"))
    _G.charSelect.character_replace_dialog(CT_JESS, DIALOG_131, 1, 5, 40, 200, ( -- don't bother. Dialog doesn't play if you aren't flying
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

