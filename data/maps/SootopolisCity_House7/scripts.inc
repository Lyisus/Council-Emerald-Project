SootopolisCity_House7_MapScripts::
	.byte 0

SootopolisCity_House7_EventScript_PokefanF::
	msgbox SootopolisCity_House7_Text_CaveMadeToKeepSomething, MSGBOX_NPC
	end

SootopolisCity_House7_Text_CaveMadeToKeepSomething:
	.string "The cave that links SOOTOPOLIS and\n"
	.string "the outside world…\p"
	.string "It seems as if the cave was made to\n"
	.string "keep something from getting out.\p"
	.string "Or am I just imagining things?$"

SootopolisCity_House7_EventScript_Trader_Salazzle::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_NPC_TRADE_COMPLETED, SootopolisCity_House7_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SALAZZLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox SootopolisCity_House7_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House7_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_House7_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, SootopolisCity_House7_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SootopolisCity_House7_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_SOOTOPOLIS_NPC_TRADE_COMPLETED
	release
	end

SootopolisCity_House7_EventScript_DeclineTrade::
	msgbox SootopolisCity_House7_Text_Decline, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House7_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SootopolisCity_House7_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House7_EventScript_TradeCompleted::
	msgbox SootopolisCity_House7_Text_AlreadyTraded, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House7_Text_StartTrade:
	.string "Greetings, young one.\p"
	.string "Would you like this fast {STR_VAR_2}?\n"
	.string "It can help you with speedrunning.\p"
	.string "I can trade you my {STR_VAR_2} \nfor a {STR_VAR_1}, if you have one.$"

SootopolisCity_House7_Text_Thanks:
	.string "I\nWAS\lSPEED.$"

SootopolisCity_House7_Text_WrongPokemon:
	.string "Children now days…$"

SootopolisCity_House7_Text_Decline:
	.string "Gotta go fast…$"

SootopolisCity_House7_Text_AlreadyTraded:
	.string "Who're you?!\nWhat are you doing in my house?!$"
