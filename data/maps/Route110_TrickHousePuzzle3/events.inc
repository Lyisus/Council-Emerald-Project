@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route110_TrickHousePuzzle3/map.json
@

	.align 2

Route110_TrickHousePuzzle3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 28, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_WOOD_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 21, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_SHADOW_MAIL, Common_EventScript_FindItem, FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL

Route110_TrickHousePuzzle3_MapWarps:
	warp_def 9, 5, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 9, 1, 3, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle3_MapEvents::
	map_events Route110_TrickHousePuzzle3_ObjectEvents, Route110_TrickHousePuzzle3_MapWarps, NULL, NULL

