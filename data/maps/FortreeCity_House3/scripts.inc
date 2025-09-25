FortreeCity_House3_MapScripts::
	.byte 0

FortreeCity_House3_EventScript_Maniac::
	goto_if_unset FLAG_FORTREE_TANGELA_RECEIVED, FortreeCity_House3_EventScript_ManiacGiveTangela
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_SchoolKidM::
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
	end

FortreeCity_House3_Text_MetStevenHadAmazingPokemon:
	.string "While speaking about POKéDEXES,\n"
	.string "I remembered something.\p"
	.string "I met this TRAINER, STEVEN, when\n"
	.string "I was searching for rare stones.\p"
	.string "Hoo, boy, he had some amazing POKéMON\n"
	.string "with him.\p"
	.string "They weren't just rare, they were\n"
	.string "trained to terrifying extremes!\p"
	.string "He might even be stronger than the\n"
	.string "GYM LEADER in this town…$"

FortreeCity_House3_Text_OhYouHavePokedex:
	.string "What's that thing you have there?\p"
	.string "… … … … … …\p"
	.string "Oh, it's called a POKéDEX?\n"
	.string "It's really awesome!$"

FortreeCity_House3_EventScript_ManiacGiveTangela::
	msgbox FortreeCity_House3_Text_TakeTangela, MSGBOX_NPC
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TANGELA
	givemon SPECIES_TANGELA, 35
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, FortreeCity_House3_EventScript_SendTangelaParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, FortreeCity_House3_EventScript_SendTangelaPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

FortreeCity_House3_EventScript_SendTangelaParty::
	call FortreeCity_House3_EventScript_ReceivedTangelaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_House3_EventScript_ReceivedTangela
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto FortreeCity_House3_EventScript_ReceivedTangela
	end

FortreeCity_House3_EventScript_SendTangelaPC::
	call FortreeCity_House3_EventScript_ReceivedTangelaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_House3_EventScript_TangelaTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto FortreeCity_House3_EventScript_TangelaTransferredToPC
	end

FortreeCity_House3_EventScript_TangelaTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto FortreeCity_House3_EventScript_ReceivedTangela
	end

FortreeCity_House3_EventScript_ReceivedTangelaFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_TANGELA
	playfanfare MUS_OBTAIN_ITEM
	message FortreeCity_House3_Text_ObtainedTangela
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_TANGELA
	return

FortreeCity_House3_EventScript_ReceivedTangela::
	msgbox FortreeCity_House3_Text_AcceptTangela
	setflag FLAG_FORTREE_TANGELA_RECEIVED
	releaseall
	end

FortreeCity_House3_Text_TakeTangela:
	.string "Here. Have this weird thing I found.$"

FortreeCity_House3_Text_AcceptTangela:
	.string "No returns accepted.$"

FortreeCity_House3_Text_ObtainedTangela:
	.string "{PLAYER} obtained a TANGELA.$"

