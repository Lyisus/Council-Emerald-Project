@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FallarborTown_Mart/map.json
@

	.align 2

FallarborTown_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MART_EMPLOYEE, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, FallarborTown_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 5, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_Mart_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_POKEFAN_M, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, FallarborTown_Mart_EventScript_PokefanM, 0
	object_event 4, OBJ_EVENT_GFX_SKITTY, 2, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_Mart_EventScript_Skitty, 0
	object_event 5, OBJ_EVENT_GFX_GIRL_2, 7, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, FallarborTown_Mart_EventScript_MetronomeTutor, 0

FallarborTown_Mart_MapWarps:
	warp_def 3, 7, 0, 0, MAP_FALLARBOR_TOWN
	warp_def 4, 7, 0, 0, MAP_FALLARBOR_TOWN

FallarborTown_Mart_MapEvents::
	map_events FallarborTown_Mart_ObjectEvents, FallarborTown_Mart_MapWarps, NULL, NULL

