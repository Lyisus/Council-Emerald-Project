RustboroCity_Flat2_3F_MapScripts::
	.byte 0

RustboroCity_Flat2_3F_EventScript_Woman::
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
	.string "I think the PRESIDENT's son also\n"
	.string "collects rare stones.$"

RustboroCity_Flat2_3F_EventScript_FromundaManRareCandies::
	goto RustboroCity_Flat2_3F_EventScript_FromundaMartShop
	end

RustboroCity_Flat2_3F_EventScript_FromundaMartShop::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_FROMUNDA_MAN
	message gText_FromundaSellsCandies
	waitmessage
	pokemart RustboroCity_Flat2_3F_Fromunda_Mart
	msgbox gText_FromundaByesCandies, MSGBOX_DEFAULT
	goto RustboroCity_Flat2_3F_EventScript_FaceOriginalDirection
	end

	.align 2
RustboroCity_Flat2_3F_Fromunda_Mart:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_DYNAMAX_CANDY
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_NONE
	release
	end

RustboroCity_Flat2_3F_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
