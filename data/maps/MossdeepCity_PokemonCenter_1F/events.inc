@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MossdeepCity_PokemonCenter_1F/map.json
@

	.align 2

MossdeepCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 8, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_PokemonCenter_1F_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_GIRL_1, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_PokemonCenter_1F_EventScript_Girl, 0

MossdeepCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 6, 8, 3, 2, MAP_MOSSDEEP_CITY
	warp_def 1, 6, 4, 0, MAP_MOSSDEEP_CITY_POKEMON_CENTER_2F

MossdeepCity_PokemonCenter_1F_MapEvents::
	map_events MossdeepCity_PokemonCenter_1F_ObjectEvents, MossdeepCity_PokemonCenter_1F_MapWarps, NULL, NULL

