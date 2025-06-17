FluddCoins = mod_storage_load_bool("fludd_coins")

local function command_moveset_guide(msg)
	if msg == "jer" or (msg == "" and is_jer()) then
		djui_chat_message_create("\\#00ff00\\Jer (Moves):")
		djui_chat_message_create("GP (Air) + B = Ground Pound Cancel")
		djui_chat_message_create("GP (Ground) + A = Ground Pound Jump")
		djui_chat_message_create("GP (Air) + A = Jernado")
		djui_chat_message_create("GP (Ground) + B = Burst Slide Kick")
		djui_chat_message_create("Cartwheel + A = Cartwheel Jump")
		djui_chat_message_create("Slide Kick/Dive (Ground) + Z = Cartwheel")
		djui_chat_message_create("Wing Cap + A = Boost")
		return true
	elseif msg == "jess" or (msg == "" and is_jess()) then
		djui_chat_message_create("\\#00ffff\\Jess (Moves):")
		djui_chat_message_create("GP (Air) + B = Ground Pound Cancel")
		djui_chat_message_create("GP (Ground) + A = Ground Pound Jump")
		djui_chat_message_create("Triple Jump = Twirl Jump")
		djui_chat_message_create("Twirling + B = Twirl Cancel")
		djui_chat_message_create("Dive (Ground) + Z = Springflip")
		djui_chat_message_create("Air + B (Neutral Stick) = Galaxy Spin")
		djui_chat_message_create("Wing Cap + A = Fludd Hover")
		djui_chat_message_create("Wing Cap + Ground Pound Jump = Rocket Jump")
		djui_chat_message_create("Wing Cap + Dive (Ground) + Z = Slip n' Slide")
		return true
	elseif msg == "davy" or (msg == "" and is_davy()) then
		djui_chat_message_create("\\#ff8000\\Davy (Moves):")
		djui_chat_message_create("GP (Air) + B = Airborne Slide Kick")
		djui_chat_message_create("GP (Ground) + A = Skeletal Missile")
		djui_chat_message_create("Punch = Bomb Toss")
		djui_chat_message_create("Air + A = Flutter")
		djui_chat_message_create("Dive (Air) + A = Hover Missile")
		return true
	end
	return false
end

local function command_moveset_passives(msg)
	if msg == "jer" or (msg == "" and is_jer()) then
		djui_chat_message_create("\\#00ff00\\Jer (Passives):")
		djui_chat_message_create("- Faster Sliding & Slide Kick")
		djui_chat_message_create("- Slower swimming")
		djui_chat_message_create("- Water Skip if Slide Kicking fast enough")
		djui_chat_message_create("- Metal Cap grants more speed but slower acceleration")
		return true
	elseif msg == "jess" or (msg == "" and is_jess()) then
		djui_chat_message_create("\\#00ffff\\Jess (Passives):")
		djui_chat_message_create("- Higher Triple Jump & Backflip")
		djui_chat_message_create("- Faster swimming")
		djui_chat_message_create("- Better jump out of water")
		djui_chat_message_create("- Jump off the top of a pole to twirl")
		djui_chat_message_create("- Ice Flower (Metal Cap) allows skating on water and lava")
		djui_chat_message_create("- Fludd (Wing Cap) will last as long as you have water, no timer!")
		return true
	elseif msg == "davy" or (msg == "" and is_davy()) then
		djui_chat_message_create("- Faster while carrying things")
		djui_chat_message_create("- Coins grant bombs faster")
	end
	return false
end

local function command_jess_fludd_coins(msg)
	if not network_is_server() then
		djui_chat_message_create("\\#ffaaaa\\Only the host may use this command")
		return true
	else
	    if FluddCoins then
			djui_chat_message_create("Coins refill water: \\#ff0000\\false")
			FluddCoins = false
		else
			djui_chat_message_create("Coins refill water: \\#00ff00\\true")
			FluddCoins = true
		end
		mod_storage_save_bool("fludd_coins", FluddCoins)
		return true
	end
	return false
end

hook_chat_command("jj-moves", "[jer|jess|davy] - shows moveset guide for the character", command_moveset_guide)
hook_chat_command("jj-passives", "[jer|jess|davy] - shows passives for the character", command_moveset_passives)
hook_chat_command("jj-fludd-coins", "- toggles whether collecting coins should refill Fludd water (host only)", command_jess_fludd_coins)