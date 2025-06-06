@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route131/map.json
@

	.align 2

Route131_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M, 41, 32, 1, MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN, 5, 7, TRAINER_TYPE_NORMAL, 3, Route131_EventScript_Richard, 0
	object_event 2, OBJ_EVENT_GFX_SWIMMER_M, 18, 19, 1, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT, 0, 7, TRAINER_TYPE_NORMAL, 4, Route131_EventScript_Herman, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_F, 10, 22, 1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 6, 0, TRAINER_TYPE_NORMAL, 4, Route131_EventScript_Susie, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F, 31, 25, 1, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP, 3, 5, TRAINER_TYPE_NORMAL, 3, Route131_EventScript_Kara, 0
	object_event 5, OBJ_EVENT_GFX_SWIMMER_F, 9, 16, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route131_EventScript_Reli, 0
	object_event 6, OBJ_EVENT_GFX_TUBER_M_SWIMMING, 8, 16, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route131_EventScript_Ian, 0
	object_event 7, OBJ_EVENT_GFX_SWIMMER_M, 52, 20, 1, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 3, TRAINER_TYPE_NORMAL, 5, Route131_EventScript_Kevin, 0
	object_event 8, OBJ_EVENT_GFX_SWIMMER_F, 52, 27, 1, MOVEMENT_TYPE_WALK_UP_AND_DOWN, 1, 3, TRAINER_TYPE_NORMAL, 5, Route131_EventScript_Talia, 0

Route131_MapWarps:
	warp_def 36, 6, 3, 0, MAP_SKY_PILLAR_ENTRANCE

Route131_MapEvents::
	map_events Route131_ObjectEvents, Route131_MapWarps, NULL, NULL

