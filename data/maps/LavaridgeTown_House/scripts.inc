LavaridgeTown_House_MapScripts::
	.byte 0

LavaridgeTown_House_EventScript_OldMan::
	goto_if_unset FLAG_LAVARIDGE_NPC_TRADE_COMPLETED, Lavaridgetown_House_EventScript_Trader_Gothita
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
	.string "My wife's warming an EGG in the hot\n"
	.string "springs. This is what she told me.\p"
	.string "She left two POKéMON with the DAY CARE.\n"
	.string "And they discovered that EGG!$"

LavaridgeTown_House_Text_Zigzagoon:
	.string "ZIGZAGOON: Pshoo!$"

Lavaridgetown_House_EventScript_Trader_Gothita::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_GOTHITA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox Lavaridgetown_House_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Lavaridgetown_House_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Lavaridgetown_House_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_eq VAR_RESULT, SPECIES_YAMASK, Lavaridgetown_House_EventScript_CorrectSpecies
	goto_if_eq VAR_RESULT, SPECIES_YAMASK_GALAR, Lavaridgetown_House_EventScript_CorrectSpecies
	goto Lavaridgetown_House_EventScript_NotRequestedMon
	release
	end

Lavaridgetown_House_EventScript_CorrectSpecies::
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox Lavaridgetown_House_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
	release
	end

Lavaridgetown_House_EventScript_DeclineTrade::
	msgbox Lavaridgetown_House_Text_Decline, MSGBOX_DEFAULT
	release
	end

Lavaridgetown_House_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Lavaridgetown_House_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

Lavaridgetown_House_Text_StartTrade:
	.string "My wife hatched this {STR_VAR_2} from a\n"
	.string "POKéMON egg.\p"
	.string "We were hoping it hatched into a\n"
	.string "different POKéMON.\p"
	.string "We don't know the name, but it\n"
	.string "carries a mask everywhere it goes.\p"
	.string "Can you help us get that POKéMON?\p"
	.string "I can trade this {STR_VAR_2} for the\n"
	.string "POKéMON known for the mask it carries.$"

Lavaridgetown_House_Text_Thanks:
	.string "Thank you for helping this old.\n"
	.string "man and his wife.\p"
	.string "Please take good care of {STR_VAR_2}.$"

Lavaridgetown_House_Text_WrongPokemon:
	.string "That POKéMON is not the one\n"
	.string "known for the mask it carries.$"

Lavaridgetown_House_Text_Decline:
	.string "I hope we can find someone\n"
	.string "else willing to help us.$"
