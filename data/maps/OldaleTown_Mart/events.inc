@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OldaleTown_Mart/map.json
@

	.align 2

OldaleTown_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MART_EMPLOYEE, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_5, 5, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_Mart_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_BOY_1, 9, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, TRAINER_TYPE_NONE, 0, OldaleTown_Mart_EventScript_Boy, 0

OldaleTown_Mart_MapWarps:
	warp_def 3, 7, 0, 3, MAP_OLDALE_TOWN
	warp_def 4, 7, 0, 3, MAP_OLDALE_TOWN

OldaleTown_Mart_MapEvents::
	map_events OldaleTown_Mart_ObjectEvents, OldaleTown_Mart_MapWarps, NULL, NULL

