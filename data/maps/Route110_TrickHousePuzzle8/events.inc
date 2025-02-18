@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle8/map.json
@

	.align 2

Route110_TrickHousePuzzle8_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_3, 1, 10, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle8_EventScript_Vincent, 0
	object_event 2, OBJ_EVENT_GFX_MAN_3, 4, 2, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle8_EventScript_Leroy, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_5, 8, 17, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle8_EventScript_Keira, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 2, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_BEAD_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL

Route110_TrickHousePuzzle8_MapWarps:
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 0, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle8_MapBGEvents:
	bg_sign_event 3, 21, 3, BG_EVENT_PLAYER_FACING_ANY, Route110_TrickHousePuzzle8_EventScript_Scroll

Route110_TrickHousePuzzle8_MapEvents::
	map_events Route110_TrickHousePuzzle8_ObjectEvents, Route110_TrickHousePuzzle8_MapWarps, NULL, Route110_TrickHousePuzzle8_MapBGEvents

