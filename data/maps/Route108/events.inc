@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route108/map.json
@

	.align 2

Route108_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 52, 13, 1, MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT, 3, 3, TRAINER_TYPE_NORMAL, 3, Route108_EventScript_Jerome, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_F, 35, 12, 1, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, Route108_EventScript_Tara, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_M, 13, 13, 1, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 0, 0, TRAINER_TYPE_NORMAL, 3, Route108_EventScript_Matthew, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F, 8, 7, 1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 6, 0, TRAINER_TYPE_NORMAL, 3, Route108_EventScript_Missy, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_5, 41, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, Route108_EventScript_Carolina, 0
	object_event 6, OBJ_EVENT_GFX_SAILOR, 43, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, Route108_EventScript_Cory, 0
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 42, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_STAR_PIECE, Common_EventScript_FindItem, FLAG_ITEM_ROUTE_108_STAR_PIECE

Route108_MapWarps:
	warp_def 29, 6, 3, 0, MAP_ABANDONED_SHIP_DECK

Route108_MapBGEvents:
	bg_hidden_item_event 38, 14, 3, ITEM_RARE_CANDY, FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY

Route108_MapEvents::
	map_events Route108_ObjectEvents, Route108_MapWarps, NULL, Route108_MapBGEvents

