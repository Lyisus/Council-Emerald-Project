@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FallarborTown_MoveRelearnersHouse/map.json
@

	.align 2

FallarborTown_MoveRelearnersHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner, 0

FallarborTown_MoveRelearnersHouse_MapWarps:
	warp_def 3, 7, 0, 4, MAP_FALLARBOR_TOWN
	warp_def 4, 7, 0, 4, MAP_FALLARBOR_TOWN

FallarborTown_MoveRelearnersHouse_MapEvents::
	map_events FallarborTown_MoveRelearnersHouse_ObjectEvents, FallarborTown_MoveRelearnersHouse_MapWarps, NULL, NULL

