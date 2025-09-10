RustboroCity_Flat2_2F_MapScripts::
	.byte 0

RustboroCity_Flat2_2F_EventScript_OldMan::
	lock
	faceplayer
	goto_if_unset FLAG_RUSTBORO_EEVEE_RECEIVED, RustboroCity_Flat2_2F_EventScript_OldManGiveEevee
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_OldManGiveEevee::
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_Flat2_2F_EventScript_OldManStrongTrainer
	msgbox RustboroCity_Flat2_2F_Text_WillYouTakeEevee, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_2F_EventScript_RejectEevee
	msgbox RustboroCity_Flat2_2F_Text_AcceptEevee
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 12
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_Flat2_2F_EventScript_SendEeveeParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_Flat2_2F_EventScript_SendEeveePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_Flat2_2F_EventScript_OldManStrongTrainer::
	msgbox RustboroCity_Flat2_2F_Text_StrongTrainer, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_RejectEevee:
	msgbox RustboroCity_Flat2_2F_Text_RejectEevee, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_SendEeveeParty::
	call RustboroCity_Flat2_2F_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_2F_EventScript_ReceivedEevee
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_Flat2_2F_EventScript_ReceivedEevee
	end

RustboroCity_Flat2_2F_EventScript_SendEeveePC::
	call RustboroCity_Flat2_2F_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_2F_EventScript_EeveeTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_Flat2_2F_EventScript_EeveeTransferredToPC
	end

RustboroCity_Flat2_2F_EventScript_EeveeTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto RustboroCity_Flat2_2F_EventScript_ReceivedEevee
	end

RustboroCity_Flat2_2F_EventScript_ReceivedEeveeFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_EEVEE
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_Flat2_2F_Text_ObtainedEevee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	return

RustboroCity_Flat2_2F_EventScript_ReceivedEevee::
	setflag FLAG_RUSTBORO_EEVEE_RECEIVED
	releaseall
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall::
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
	.string "Way back in the old days, DEVON was just\n"
	.string "a teeny, tiny company.$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
	.string "My daddy's working at the CORPORATION.\p"
	.string "My daddy made this!\n"
	.string "But I can't use it, so you can have it.$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
	.string "My daddy's working at the CORPORATION.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "DEVON, too.$"

RustboroCity_Flat2_2F_Text_StrongTrainer:
	.string "I would like a good TRAINER to adopt\n"
	.string "this EEVEE.\p"
	.string "Please, tell a good TRAINER to come\n"
	.string "and adopt EEVEE.$"

RustboroCity_Flat2_2F_Text_WillYouTakeEevee:
	.string "I would like a good TRAINER to adopt\n"
	.string "this EEVEE.\p"
	.string "You look like a good TRAINER.\n"
	.string "Will you take EEVEE with you?$"

RustboroCity_Flat2_2F_Text_RejectEevee:
	.string "You will not?\n"
	.string "That's unfortunate.$"

RustboroCity_Flat2_2F_Text_AcceptEevee:
	.string "Thank you.\n"
	.string "Please, take good care of EEVEE.$"

RustboroCity_Flat2_2F_Text_ObtainedEevee:
	.string "{PLAYER} obtained an EEVEE.$"

