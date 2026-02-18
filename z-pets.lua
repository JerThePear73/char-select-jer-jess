if not _G.wpets then return end

local E_MODEL_JESS_PLUSH = smlua_model_util_get_id('jj_pet_jess_geo')
local E_MODEL_GREGG = smlua_model_util_get_id('jj_pet_gregg_geo')

local ID_JESS_PLUSH = _G.wpets.add_pet({
	name = "Jess Plushie", credit = "JerThePear",
	description = "Who left this here?",
	modelID = E_MODEL_JESS_PLUSH,
	scale = 1, yOffset = 0, flying = false
})

_G.wpets.set_pet_anims_head(ID_JESS_PLUSH)

_G.wpets.set_pet_sounds(ID_JESS_PLUSH, {
	spawn = 'jess_yeah_high.ogg',
	happy = 'jess_yeah_high.ogg',
	vanish = nil,
	step = nil
})

local ID_GREGG = _G.wpets.add_pet({
	name = "Gregg", credit = "JerThePear",
	description = "Davy's son.",
	modelID = E_MODEL_GREGG,
	scale = 1, yOffset = 0, flying = false
})

_G.wpets.set_pet_anims_head(ID_GREGG)

_G.wpets.set_pet_sounds(ID_GREGG, {
	spawn = nil,
	happy = nil,
	vanish = nil,
	step = nil
})