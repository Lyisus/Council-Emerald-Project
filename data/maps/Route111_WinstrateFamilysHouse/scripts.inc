.set LOCALID_FROMUNDA_MAN, 1

Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0

Route111_Walmart_EventScript_FromundaMart::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_FROMUNDA_MAN
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_Walmart_EventScript_FromundaMartShop
	msgbox Route111_Walmart_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_Walmart_EventScript_FromundaMartShop
	end

Route111_Walmart_EventScript_FromundaMartShop::
	message gText_FromundaSells
	waitmessage
	pokemart Route111_Fromunda_Mart
	msgbox gText_FromundaByes, MSGBOX_DEFAULT
	goto Route111_Walmart_EventScript_FaceOriginalDirection
	end

Route111_Fromunda_Mart:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE
	release
	end


Route111_Walmart_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_Walmart_Text_LikeYouToHaveMachoBrace:
	.string "We use this MACHO BRACE to more\n"
	.string "effectively strengthen our POKéMON\l"
	.string "in training.\p"
	.string "Since you've beaten all of us here,\n"
	.string "I don't know if you need it, but we\l"
	.string "would like you to have our MACHO BRACE.$"
