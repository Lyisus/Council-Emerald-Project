MossdeepCity_House1_MapScripts::
	.byte 0

MossdeepCity_House1_EventScript_Trader_Lucario::
	lock
	faceplayer
	goto_if_set FLAG_MOSSDEEP_NPC_TRADE_COMPLETED, MossdeepCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_LUCARIO
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox MossdeepCity_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MossdeepCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, MossdeepCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox MossdeepCity_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_MOSSDEEP_NPC_TRADE_COMPLETED
	release
	end

MossdeepCity_House1_EventScript_DeclineTrade::
	msgbox MossdeepCity_House1_Text_Decline, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox MossdeepCity_House1_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_TradeCompleted::
	msgbox MossdeepCity_House1_Text_AlreadyTraded, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_Text_StartTrade:
	.string "That power…\p"
	.string "You must be capable of using\nMega Evolution…\p"
	.string "My {STR_VAR_2} has a special item that you \ncould make use of.\p"
	.string "Thought, I still need a POKéMON to \ncontinue my own training.\p"
	.string "I can trade you my {STR_VAR_2}\nfor your {STR_VAR_1}.$"

MossdeepCity_House1_Text_Thanks:
	.string "Excellent.$"

MossdeepCity_House1_Text_WrongPokemon:
	.string "No, I need a {STR_VAR_1}.$"

MossdeepCity_House1_Text_Decline:
	.string "Do you not want this power?$"

MossdeepCity_House1_Text_AlreadyTraded:
	.string "May you grow strong together.$"

MossdeepCity_House1_EventScript_NeutralNature::
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_Woman::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_Text_HmmYourPokemon:
	.string "Hmm!\n"
	.string "Your {STR_VAR_1}…$"

MossdeepCity_House1_Text_ItLikesXPokeblocks:
	.string "It likes {STR_VAR_1}S,\n"
	.string "doesn't it?\p"
	.string "No, I'm positive of it! It definitely\n"
	.string "likes {STR_VAR_1}S!$"

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks:
	.string "It doesn't appear to like or dislike\n"
	.string "any {POKEBLOCK}S.$"

