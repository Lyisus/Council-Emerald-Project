@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavaridgeTown_PokemonCenter_1F/map.json
@

	.align 2

LavaridgeTown_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LavaridgeTown_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 11, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LavaridgeTown_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_3, 10, 6, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, LavaridgeTown_PokemonCenter_1F_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_GENTLEMAN, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman, 0

LavaridgeTown_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 3, MAP_LAVARIDGE_TOWN
	warp_def 6, 8, 3, 3, MAP_LAVARIDGE_TOWN
	warp_def 1, 6, 4, 0, MAP_LAVARIDGE_TOWN_POKEMON_CENTER_2F
	warp_def 2, 1, 0, 5, MAP_LAVARIDGE_TOWN

LavaridgeTown_PokemonCenter_1F_MapEvents::
	map_events LavaridgeTown_PokemonCenter_1F_ObjectEvents, LavaridgeTown_PokemonCenter_1F_MapWarps, NULL, NULL

