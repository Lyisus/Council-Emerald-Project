LilycoveCity_House4_MapScripts::
	.byte 0

LilycoveCity_House4_EventScript_Man1::
	goto_if_unset FLAG_LILYCOVE_EISCUE_RECEIVED, LilycoveCity_House4_EventScript_ManGiveEiscue
	msgbox LilycoveCity_House4_Text_MysteriesAtBottomOfSea, MSGBOX_NPC
	end

LilycoveCity_House4_EventScript_Man2::
	msgbox LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis, MSGBOX_NPC
	end

LilycoveCity_House4_Text_MysteriesAtBottomOfSea:
	.string "This planet's biggest mysteries are\n"
	.string "at the bottom of the sea.\p"
	.string "Somebody said that, but I don't know…$"

LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis:
	.string "There's a deep underwater trench\n"
	.string "between MOSSDEEP and SOOTOPOLIS.\p"
	.string "That's what someone told me, anyway.$"

LilycoveCity_House4_EventScript_ManGiveEiscue::
	msgbox LilycoveCity_House4_Text_TakeEiscue, MSGBOX_NPC
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EISCUE
	givemon SPECIES_EISCUE, 40
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LilycoveCity_House4_EventScript_SendEiscueParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LilycoveCity_House4_EventScript_SendEiscuePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LilycoveCity_House4_EventScript_SendEiscueParty::
	call LilycoveCity_House4_EventScript_ReceivedEiscueFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House4_EventScript_ReceivedEiscue
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LilycoveCity_House4_EventScript_ReceivedEiscue
	end

LilycoveCity_House4_EventScript_SendEiscuePC::
	call LilycoveCity_House4_EventScript_ReceivedEiscueFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House4_EventScript_EiscueTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LilycoveCity_House4_EventScript_EiscueTransferredToPC
	end

LilycoveCity_House4_EventScript_EiscueTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LilycoveCity_House4_EventScript_ReceivedEiscue
	end

LilycoveCity_House4_EventScript_ReceivedEiscueFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_EISCUE
	message LilycoveCity_House4_Text_ObtainedEiscue
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EISCUE
	return

LilycoveCity_House4_EventScript_ReceivedEiscue::
	msgbox LilycoveCity_House4_Text_AcceptEiscue
	setflag FLAG_LILYCOVE_EISCUE_RECEIVED
	releaseall
	end

LilycoveCity_House4_Text_TakeEiscue:
	.string "Pengu.$"

LilycoveCity_House4_Text_AcceptEiscue:
	.string "Pengu.$"

LilycoveCity_House4_Text_ObtainedEiscue:
	.string "{PLAYER} obtained an EISCUE.$"

