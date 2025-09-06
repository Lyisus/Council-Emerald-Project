DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: Guguuh!$"

DewfordTown_House1_EventScript_Trader_A_Vulpix::
	lock
	faceplayer
	goto_if_set FLAG_DEWFORD_NPC_TRADE_COMPLETED, DewfordTown_House1_EventScript_Woman
	setvar VAR_0x8008, INGAME_TRADE_A_VULPIX
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox DewfordTown_House1_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, DewfordTown_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, DewfordTown_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox DewfordTown_House1_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_DEWFORD_NPC_TRADE_COMPLETED
	release
	end

DewfordTown_House1_EventScript_DeclineTrade::
	msgbox DewfordTown_House1_Text_Decline, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_Text_StartTrade:
	.string "I moved here from SLATEPORT CITY\n"
	.string "when I married my husband.\p"
	.string "I'd like a POKéMON to remind me\n"
	.string "of SLATEPORT CITY.\p"
	.string "I remember seeing wild {STR_VAR_1}\n"
	.string "around there.\p"
	.string "Will you help me get a {STR_VAR_1}?\n"
	.string "I'll trade you my {STR_VAR_2} for it.$"

DewfordTown_House1_Text_Thanks:
	.string "Thank you so much!\p"
	.string "Now I will always have a part of\n"
	.string "my beloved SLATEPORT CITY with me.$"

DewfordTown_House1_Text_WrongPokemon:
	.string "I don't remember seeing that POKéMON\n"
	.string "around SLATEPORT CITY…$"

DewfordTown_House1_Text_Decline:
	.string "Oh… Is that so…$"


