SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	lock
	faceplayer
	goto_if_unset FLAG_SLATEPORT_NPC_TRADE_COMPLETED, SlateportCity_House_EventScript_Trader_Espurr
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "My POKéMON has a HASTY nature.\p"
	.string "It has higher SPEED compared to\n"
	.string "my other POKéMON.\p"
	.string "Maybe their nature has something to\n"
	.string "do with the stat gains of POKéMON.$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "You're a TRAINER, aren't you?\p"
	.string "Since you came to SLATEPORT CITY,\n"
	.string "you must be going to the BATTLE TENT.$"

SlateportCity_House_EventScript_Trader_Espurr::
	setvar VAR_0x8008, INGAME_TRADE_ESPURR
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox SlateportCity_House_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_House_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_House_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, SlateportCity_House_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SlateportCity_House_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_SLATEPORT_NPC_TRADE_COMPLETED
	release
	end

SlateportCity_House_EventScript_DeclineTrade::
	msgbox SlateportCity_House_Text_Decline, MSGBOX_DEFAULT
	release
	end

SlateportCity_House_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SlateportCity_House_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

SlateportCity_House_Text_StartTrade:
	.string "I went to the BATTLE TENT and lost.\n"
	.string "I think I should try a new strategy.\p"
	.string "Maybe a {STR_VAR_1} would be useful.\n"
	.string "I can trade you my {STR_VAR_2} for it.$"

SlateportCity_House_Text_Thanks:
	.string "Great! I will beat the BATTLE TENT\n"
	.string "with this POKéMON!$"

SlateportCity_House_Text_WrongPokemon:
	.string "That's not it, but I've heard\n"
	.string "they are found around DEWFORD TOWN.$"

SlateportCity_House_Text_Decline:
	.string "Are you sure?\n"
	.string "My POKéMON is pretty strong.$"
