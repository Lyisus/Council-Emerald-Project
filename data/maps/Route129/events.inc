@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route129/map.json
@

	.align 2

Route129_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 28, 16, 1, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT, 3, 4, TRAINER_TYPE_NORMAL, 3, Route129_EventScript_Chase, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_F, 10, 14, 1, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP, 5, 2, TRAINER_TYPE_NORMAL, 2, Route129_EventScript_Allison, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_F, 13, 22, 1, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 5, Route129_EventScript_Tisha, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_M, 35, 9, 1, MOVEMENT_TYPE_ROTATE_CLOCKWISE, 1, 1, TRAINER_TYPE_NORMAL, 2, Route129_EventScript_Reed, 0
	object_event 5, OBJ_EVENT_GFX_SWIMMER_M, 13, 27, 1, MOVEMENT_TYPE_WALK_IN_PLACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 5, Route129_EventScript_Clarence, 0

Route129_MapEvents::
	map_events Route129_ObjectEvents, NULL, NULL, NULL

