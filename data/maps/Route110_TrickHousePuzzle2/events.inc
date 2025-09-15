@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle2/map.json
@

	.align 2

Route110_TrickHousePuzzle2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 31, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 4, Route110_TrickHousePuzzle2_EventScript_Ted, 0
	object_event 2, OBJ_EVENT_GFX_SCHOOL_KID_M, 19, 42, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NORMAL, 4, Route110_TrickHousePuzzle2_EventScript_Paul, 0
	object_event 3, OBJ_EVENT_GFX_GIRL_3, 31, 19, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NORMAL, 2, Route110_TrickHousePuzzle2_EventScript_Georgia, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 15, 27, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_WAVE_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 39, 38, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_HARBOR_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL

Route110_TrickHousePuzzle2_MapWarps:
	warp_def 31, 46, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 35, 11, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle2_MapEvents::
	map_events Route110_TrickHousePuzzle2_ObjectEvents, Route110_TrickHousePuzzle2_MapWarps, NULL, NULL

