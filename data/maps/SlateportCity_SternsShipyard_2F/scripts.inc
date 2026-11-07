SlateportCity_SternsShipyard_2F_MapScripts::
	.byte 0

SlateportCity_SternsShipyard_2F_EventScript_Scientist1::
	msgbox SlateportCity_SternsShipyard_2F_Text_ShipDesignMoreLikeBuilding, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_2F_EventScript_Scientist2::
	goto_if_unset FLAG_SLATEPORT_BUNEARY_RECEIVED, SlateportCity_SternsShipyard_2F_EventScript_ScientistGiveBuneary
	msgbox SlateportCity_SternsShipyard_2F_Text_FloatsBecauseBuoyancy, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_2F_Text_ShipDesignMoreLikeBuilding:
	.string "Designing a large ship is more like\n"
	.string "making a big building than putting\l"
	.string "together a transportation vehicle.$"

SlateportCity_SternsShipyard_2F_Text_FloatsBecauseBuoyancy:
	.string "Don't you think it's strange that\n"
	.string "a ship made of heavy iron floats?\p"
	.string "It floats because of a principle\n"
	.string "called buoyancy.$"

SlateportCity_SternsShipyard_2F_EventScript_ScientistGiveBuneary::
	msgbox SlateportCity_SternsShipyard_2F_Text_WillYouTakeBuneary, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_SternsShipyard_2F_EventScript_RejectBuneary
	msgbox SlateportCity_SternsShipyard_2F_Text_AcceptBuneary
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BUNEARY
	givemon SPECIES_BUNEARY, 20
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SlateportCity_SternsShipyard_2F_EventScript_SendBunearyParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SlateportCity_SternsShipyard_2F_EventScript_SendBunearyPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

SlateportCity_SternsShipyard_2F_EventScript_RejectBuneary:
	msgbox SlateportCity_SternsShipyard_2F_Text_RejectBuneary, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_2F_EventScript_SendBunearyParty::
	call SlateportCity_SternsShipyard_2F_EventScript_ReceivedBunearyFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_SternsShipyard_2F_EventScript_ReceivedBuneary
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SlateportCity_SternsShipyard_2F_EventScript_ReceivedBuneary
	end

SlateportCity_SternsShipyard_2F_EventScript_SendBunearyPC::
	call SlateportCity_SternsShipyard_2F_EventScript_ReceivedBunearyFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_SternsShipyard_2F_EventScript_BunearyTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SlateportCity_SternsShipyard_2F_EventScript_BunearyTransferredToPC
	end

SlateportCity_SternsShipyard_2F_EventScript_BunearyTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto SlateportCity_SternsShipyard_2F_EventScript_ReceivedBuneary
	end

SlateportCity_SternsShipyard_2F_EventScript_ReceivedBunearyFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_BUNEARY
	playfanfare MUS_OBTAIN_ITEM
	message SlateportCity_SternsShipyard_2F_Text_ObtainedBuneary
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BUNEARY
	return

SlateportCity_SternsShipyard_2F_EventScript_ReceivedBuneary::
	setflag FLAG_SLATEPORT_BUNEARY_RECEIVED
	releaseall
	end

SlateportCity_SternsShipyard_2F_Text_WillYouTakeBuneary:
	.string "I have been studying this BUNEARY for\n"
	.string "quite a long time.\p"
	.string "My studies have been…\p"
	.string "Inconclusive…\p"
	.string "I'd like to let this BUNEARY grow in a\n"
	.string "different environment.\l"
	.string "Will you take BUNEARY with you?$"

SlateportCity_SternsShipyard_2F_Text_RejectBuneary:
	.string "Such a shame…\n"
	.string "This is quite the rare specimen…$"

SlateportCity_SternsShipyard_2F_Text_AcceptBuneary:
	.string "Excellent.\n"
	.string "This will progress our research further.$"

SlateportCity_SternsShipyard_2F_Text_ObtainedBuneary:
	.string "{PLAYER} obtained a BUNEARY.$"
