@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VerdanturfTown_PokemonCenter_1F/map.json
@

	.align 2

VerdanturfTown_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 4, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_EXPERT_M, 12, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_BOY, 10, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 0, TRAINER_TYPE_NONE, 0, VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor, 0

VerdanturfTown_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_VERDANTURF_TOWN
	warp_def 6, 8, 3, 2, MAP_VERDANTURF_TOWN
	warp_def 1, 6, 4, 0, MAP_VERDANTURF_TOWN_POKEMON_CENTER_2F

VerdanturfTown_PokemonCenter_1F_MapEvents::
	map_events VerdanturfTown_PokemonCenter_1F_ObjectEvents, VerdanturfTown_PokemonCenter_1F_MapWarps, NULL, NULL

