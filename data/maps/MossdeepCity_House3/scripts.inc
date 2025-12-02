MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_House3_EventScript_FishermanGiveKubfu
	msgbox MossdeepCity_House3_Text_StrongTrainer, MSGBOX_DEFAULT
	release
	end
	
MossdeepCity_House3_Text_StrongTrainer:
	.string "Do you have a minute?\p"
	.string "I have this POKéMON, but I am\n"
	.string "too old to train it now days.\p"
	.string "I'd like a strong trainer to take\n"
	.string "this POKéMON on more adventures.\p"
	.string "You're almost there.\pIf you want this POKéMON,\n"
	.string "come back when you're a bit stronger.$"

MossdeepCity_House3_EventScript_FishermanGiveKubfu::
	goto_if_set FLAG_MOSSDEEP_KUBFU_RECEIVED, MossdeepCity_House3_EventScript_HowsKubfu
	msgbox MossdeepCity_House3_Text_WillYouTakeKubfu, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_RejectKubfu
	msgbox MossdeepCity_House3_Text_AcceptKubfu
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KUBFU
	givemon SPECIES_KUBFU, 45
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_House3_EventScript_SendKubfuParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_House3_EventScript_SendKubfuPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

MossdeepCity_House3_EventScript_RejectKubfu:
	msgbox MossdeepCity_House3_Text_RejectKubfu, MSGBOX_NPC
	end

MossdeepCity_House3_EventScript_SendKubfuParty::
	call MossdeepCity_House3_EventScript_ReceivedKubfuFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_ReceivedKubfu
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MossdeepCity_House3_EventScript_ReceivedKubfu
	end

MossdeepCity_House3_EventScript_SendKubfuPC::
	call MossdeepCity_House3_EventScript_ReceivedKubfuFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_KubfuTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto MossdeepCity_House3_EventScript_KubfuTransferredToPC
	end

MossdeepCity_House3_EventScript_KubfuTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto MossdeepCity_House3_EventScript_ReceivedKubfu
	end

MossdeepCity_House3_EventScript_ReceivedKubfuFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_KUBFU
	playfanfare MUS_OBTAIN_ITEM
	message MossdeepCity_House3_Text_ObtainedKubfu
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
	return

MossdeepCity_House3_EventScript_ReceivedKubfu::
	setflag FLAG_MOSSDEEP_KUBFU_RECEIVED
	releaseall
	end

MossdeepCity_House3_EventScript_HowsKubfu::
	msgbox MossdeepCity_House3_Text_HowsKubfu, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_WillYouTakeKubfu:
	.string "Do you have a minute?\p"
	.string "I have this POKéMON, but I am\n"
	.string "too old to train it now days.\p"
	.string "I'd like a strong trainer to take\n"
	.string "this POKéMON on more adventures.\p"
	.string "Will you take this POKéMON with you?$"

MossdeepCity_House3_Text_RejectKubfu:
	.string "That is such a shame…$"

MossdeepCity_House3_Text_AcceptKubfu:
	.string "Thank you, young one.\n"
	.string "I'm sure you'll have many adventures!$"

MossdeepCity_House3_Text_ObtainedKubfu:
	.string "{PLAYER} obtained a KUBFU.$"

MossdeepCity_House3_Text_HowsKubfu:
	.string "How's KUBFU?\n"
	.string "I hope you've evolved him.$"
