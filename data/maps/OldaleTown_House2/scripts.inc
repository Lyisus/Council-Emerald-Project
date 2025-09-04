OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_OLDALE_NPC_TRADE_COMPLETED, OldaleTown_House2_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SPHEAL
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox OldaleTown_House2_Text_IllTradeIfYouWant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_House2_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, OldaleTown_House2_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, OldaleTown_House2_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox OldaleTown_House2_Text_TakeCareOfMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_OLDALE_NPC_TRADE_COMPLETED
	release
	end

OldaleTown_House2_EventScript_DeclineTrade::
	msgbox OldaleTown_House2_Text_YoureMissingOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox OldaleTown_House2_Text_NoItsNot, MSGBOX_DEFAULT
	release
	end

OldaleTown_House2_EventScript_TradeCompleted::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_DEFAULT
	release
	end


OldaleTown_House2_Text_IllTradeIfYouWant:
	.string "My POKéMON is pretty rare around here.\n"
	.string "It's the talk of the town.\p"
	.string "Though, I've always wanted a {STR_VAR_1}.\p"
	.string "What do you say? My {STR_VAR_2} for\n"
	.string "your {STR_VAR_1}.$"

OldaleTown_House2_Text_TakeCareOfMyPokemon:
	.string "Take good care of my POKéMON.\n"
	.string "It's pretty rare, after all.$"

OldaleTown_House2_Text_NoItsNot:
	.string "No. That's not a {STR_VAR_1}.$"

OldaleTown_House2_Text_YoureMissingOut:
	.string "You're missing out.\n"
	.string "My POKéMON is pretty rare, you know?$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"
