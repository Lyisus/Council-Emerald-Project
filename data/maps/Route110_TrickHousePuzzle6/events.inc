@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle6/map.json
@

	.align 2

Route110_TrickHousePuzzle6_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 7, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle6_EventScript_Sophia, 0
	object_event 2, OBJ_EVENT_GFX_MAN_5, 11, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 3, Route110_TrickHousePuzzle6_EventScript_Benny, 0
	object_event 3, OBJ_EVENT_GFX_CAMPER, 4, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 1, Route110_TrickHousePuzzle6_EventScript_Sebastian, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 11, 21, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_GLITTER_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL

Route110_TrickHousePuzzle6_MapWarps:
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle6_MapBGEvents:
	bg_sign_event 0, 10, 3, BG_EVENT_PLAYER_FACING_ANY, Route110_TrickHousePuzzle6_EventScript_Scroll

Route110_TrickHousePuzzle6_MapEvents::
	map_events Route110_TrickHousePuzzle6_ObjectEvents, Route110_TrickHousePuzzle6_MapWarps, NULL, Route110_TrickHousePuzzle6_MapBGEvents

