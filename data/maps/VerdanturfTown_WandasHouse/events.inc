@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VerdanturfTown_WandasHouse/map.json
@

	.align 2

VerdanturfTown_WandasHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WALLY, 14, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, VerdanturfTown_WandasHouse_EventScript_Wally, FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	object_event 2, OBJ_EVENT_GFX_BLACK_BELT, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend, FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	object_event 3, OBJ_EVENT_GFX_POKEFAN_M, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_WandasHouse_EventScript_WallysUncle, FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	object_event 4, OBJ_EVENT_GFX_POKEFAN_F, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_WandasHouse_EventScript_WallysAunt, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_2, 5, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_WandasHouse_EventScript_Wanda, FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA

VerdanturfTown_WandasHouse_MapWarps:
	warp_def 7, 7, 0, 3, MAP_VERDANTURF_TOWN
	warp_def 8, 7, 0, 3, MAP_VERDANTURF_TOWN

VerdanturfTown_WandasHouse_MapEvents::
	map_events VerdanturfTown_WandasHouse_ObjectEvents, VerdanturfTown_WandasHouse_MapWarps, NULL, NULL

