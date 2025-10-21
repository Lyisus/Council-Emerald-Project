@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle1/map.json
@

	.align 2

Route110_TrickHousePuzzle1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 27, 23, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 3, Route110_TrickHousePuzzle1_EventScript_Sally, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 12, 28, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 2, Route110_TrickHousePuzzle1_EventScript_Eddie, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 27, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 5, Route110_TrickHousePuzzle1_EventScript_Robin, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 0, 1, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_ORANGE_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL

Route110_TrickHousePuzzle1_MapWarps:
	warp_def 4, 7, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 26, 7, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle1_MapEvents::
	map_events Route110_TrickHousePuzzle1_ObjectEvents, Route110_TrickHousePuzzle1_MapWarps, NULL, NULL

