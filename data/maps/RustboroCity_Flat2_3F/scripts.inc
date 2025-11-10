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
	message gText_FromundaSellsCandies
	waitmessage
	pokemart RustboroCity_Flat2_3F_Fromunda_Mart
	msgbox gText_FromundaByesCandies, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RUSTBORO_FLAT2_3F_FROMUNDA_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

	.align 2
RustboroCity_Flat2_3F_Fromunda_Mart:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_DYNAMAX_CANDY
	.2byte ITEM_STRAWBERRY_SWEET
	.2byte ITEM_LOVE_SWEET
	.2byte ITEM_BERRY_SWEET
	.2byte ITEM_CLOVER_SWEET
	.2byte ITEM_FLOWER_SWEET
	.2byte ITEM_STAR_SWEET
	.2byte ITEM_RIBBON_SWEET
	pokemartlistend

