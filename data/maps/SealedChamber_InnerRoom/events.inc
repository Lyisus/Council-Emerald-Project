@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SealedChamber_InnerRoom/map.json
@

	.align 2

SealedChamber_InnerRoom_MapWarps:
	warp_def 10, 19, 3, 0, MAP_SEALED_CHAMBER_OUTER_ROOM

SealedChamber_InnerRoom_MapBGEvents:
	bg_sign_event 10, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleBackWall
	bg_sign_event 6, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart1
	bg_sign_event 14, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart2
	bg_sign_event 4, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart3
	bg_sign_event 16, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart4
	bg_sign_event 6, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart5
	bg_sign_event 14, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleStoryPart6
	bg_sign_event 9, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleBackWall
	bg_sign_event 11, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SealedChamber_InnerRoom_EventScript_BrailleBackWall

SealedChamber_InnerRoom_MapEvents::
	map_events NULL, SealedChamber_InnerRoom_MapWarps, NULL, SealedChamber_InnerRoom_MapBGEvents

