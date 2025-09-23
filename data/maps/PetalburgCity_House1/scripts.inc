PetalburgCity_House1_MapScripts::
	.byte 0

PetalburgCity_House1_EventScript_Man::
	msgbox PetalburgCity_House1_Text_TravelingIsWonderful, MSGBOX_NPC
	end

PetalburgCity_House1_EventScript_Woman::
	msgbox PetalburgCity_House1_Text_GoOnAdventure, MSGBOX_NPC
	end

PetalburgCity_House1_Text_TravelingIsWonderful:
	.string "Traveling is wonderful!\p"
	.string "When I was young, I roamed the seas\n"
	.string "and the mountains!$"

PetalburgCity_House1_Text_GoOnAdventure:
	.string "Sigh…\p"
	.string "I wish I could go on an adventure\n"
	.string "with some POKéMON…\p"
	.string "Crawl through some damp grass…\n"
	.string "Climb rocky, rugged mountains…\p"
	.string "Cross the raging seas…\n"
	.string "Wander about in dark caves…\p"
	.string "And, sometimes, even get a little\n"
	.string "homesick…\p"
	.string "It must be fabulous to travel!$"

PetalburgCity_House1_EventScript_Trader_Gothita::
	lock
	faceplayer
	goto_if_set FLAG_LAVARIDGE_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_GOTHITA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_Trader_Feebas::
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_FEEBAS
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_Trader_G_Slowpoke::
	lock
	faceplayer
	goto_if_set FLAG_LILYCOVE_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_G_SLOWPOKE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_LILYCOVE_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_Trader_Lucario::
	lock
	faceplayer
	goto_if_set FLAG_MOSSDEEP_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_LUCARIO
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_MOSSDEEP_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_Trader_Sinistcha::
	lock
	faceplayer
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SINISTCHA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_Trader_Salazzle::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_NPC_TRADE_COMPLETED, PetalburgCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SALAZZLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_SOOTOPOLIS_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House1_EventScript_DeclineTrade::
	msgbox PetalburgCity_House1_Text_Decline, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PetalburgCity_House1_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House1_EventScript_TradeCompleted::
	msgbox PetalburgCity_House1_Text_AlreadyTraded, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House1_Text_StartTrade:
	.string "My {STR_VAR_2} for your {STR_VAR_1}.$"

PetalburgCity_House1_Text_Thanks:
	.string "Thanks.$"

PetalburgCity_House1_Text_WrongPokemon:
	.string "That's not a {STR_VAR_1}.$"

PetalburgCity_House1_Text_Decline:
	.string "No trade?$"

PetalburgCity_House1_Text_AlreadyTraded:
	.string "Already traded.$"
