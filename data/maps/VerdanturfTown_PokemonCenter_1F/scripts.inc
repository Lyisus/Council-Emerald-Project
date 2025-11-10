VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	faceplayer
	goto_if_unset FLAG_VERDANTURF_PHANPY_RECEIVED, VerdanturfTown_PokemonCenter_1F_EventScript_ExpertMGivePhanpy
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "You can't consider yourself a real\n"
	.string "TRAINER if you don't have faith\l"
	.string "in your POKéMON.\p"
	.string "Only those people who can believe\n"
	.string "in their battling POKéMON can win\l"
	.string "through to the very end.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "The reason why anyone would visit\n"
	.string "VERDANTURF…\p"
	.string "It's the BATTLE TENT. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertMGivePhanpy::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_WillYouTakePhanpy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_PokemonCenter_1F_EventScript_RejectPhanpy
	msgbox VerdanturfTown_PokemonCenter_1F_Text_AcceptPhanpy
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PHANPY
	givemon SPECIES_PHANPY, 25
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, VerdanturfTown_PokemonCenter_1F_EventScript_SendPhanpyParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, VerdanturfTown_PokemonCenter_1F_EventScript_SendPhanpyPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

VerdanturfTown_PokemonCenter_1F_EventScript_RejectPhanpy:
	msgbox VerdanturfTown_PokemonCenter_1F_Text_RejectPhanpy, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_SendPhanpyParty::
	call VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpyFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpy
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpy
	end

VerdanturfTown_PokemonCenter_1F_EventScript_SendPhanpyPC::
	call VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpyFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_PokemonCenter_1F_EventScript_PhanpyTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto VerdanturfTown_PokemonCenter_1F_EventScript_PhanpyTransferredToPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_PhanpyTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpy
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpyFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_PHANPY
	playfanfare MUS_OBTAIN_ITEM
	message VerdanturfTown_PokemonCenter_1F_Text_ObtainedPhanpy
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_PHANPY
	return

VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedPhanpy::
	setflag FLAG_VERDANTURF_PHANPY_RECEIVED
	releaseall
	end

VerdanturfTown_PokemonCenter_1F_Text_WillYouTakePhanpy:
	.string "The BATTLE TENT! It goes without\n"
	.string "saying it's quite the challenge.\p"
	.string "I've a strong POKéMON to help\n"
	.string "challengers succeed.\l"
	.string "Will you accept this POKéMON?$"

VerdanturfTown_PokemonCenter_1F_Text_RejectPhanpy:
	.string "You've no need for assistance?$"

VerdanturfTown_PokemonCenter_1F_Text_AcceptPhanpy:
	.string "That's the spirit!$"

VerdanturfTown_PokemonCenter_1F_Text_ObtainedPhanpy:
	.string "{PLAYER} obtained a PHANPY.$"

