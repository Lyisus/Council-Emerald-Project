PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	goto_if_unset FLAG_PETALBURG_NPC_TRADE_COMPLETED, PetalburgCity_House2_EventScript_Trader_G_Darumaka
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid::
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "NORMAN became our town's new\n"
	.string "GYM LEADER.\p"
	.string "I think he called his family over from\n"
	.string "somewhere far away.$"

PetalburgCity_House2_Text_BattledNormanOnce:
	.string "I battled NORMAN once, but, whew,\n"
	.string "he was way too strong.\p"
	.string "How would I put it?\p"
	.string "I just got the feeling that he\n"
	.string "lives for POKéMON.$"

PetalburgCity_House2_EventScript_Trader_G_Darumaka::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_G_DARUMAKA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PetalburgCity_House2_Text_StartTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House2_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PetalburgCity_House2_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox PetalburgCity_House2_Text_Thanks, MSGBOX_DEFAULT
	setflag FLAG_PETALBURG_NPC_TRADE_COMPLETED
	release
	end

PetalburgCity_House2_EventScript_DeclineTrade::
	msgbox PetalburgCity_House2_Text_Decline, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PetalburgCity_House2_Text_WrongPokemon, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_Text_StartTrade:
	.string "I've heard of this rare POKéMON found\n"
	.string "around DEWFORD TOWN.\p"
	.string "I would go catch one myself, but I don't\n"
	.string "the time to travel there.\p"
	.string "Do you have a {STR_VAR_1} you can trade?\n"
	.string "I'll give you my {STR_VAR_2} in exchange.$"

PetalburgCity_House2_Text_Thanks:
	.string "Thank you very much!\n"
	.string "You're such a nice TRAINER!$"

PetalburgCity_House2_Text_WrongPokemon:
	.string "I'm not sure {STR_VAR_1} look like that…$"

PetalburgCity_House2_Text_Decline:
	.string "It's alright. I get it.\n"
	.string "I wouldn't trade a {STR_VAR_1} away either.$"
