@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DewfordTown_House1/map.json
@

	.align 2

DewfordTown_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_3, 6, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, DewfordTown_House1_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_MAN_1, 3, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, DewfordTown_House1_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_ZIGZAGOON_2, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 3, 1, TRAINER_TYPE_NONE, 0, DewfordTown_House1_EventScript_Zigzagoon, 0

DewfordTown_House1_MapWarps:
	warp_def 3, 7, 0, 3, MAP_DEWFORD_TOWN
	warp_def 4, 7, 0, 3, MAP_DEWFORD_TOWN

DewfordTown_House1_MapEvents::
	map_events DewfordTown_House1_ObjectEvents, DewfordTown_House1_MapWarps, NULL, NULL

