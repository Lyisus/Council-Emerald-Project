@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SootopolisCity_PokemonCenter_1F/map.json
@

	.align 2

SootopolisCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, SootopolisCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 12, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SootopolisCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_5, 4, 7, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, SootopolisCity_PokemonCenter_1F_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_1, 2, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor, 0

SootopolisCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 0, MAP_SOOTOPOLIS_CITY
	warp_def 6, 8, 3, 0, MAP_SOOTOPOLIS_CITY
	warp_def 1, 6, 4, 0, MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_2F

SootopolisCity_PokemonCenter_1F_MapEvents::
	map_events SootopolisCity_PokemonCenter_1F_ObjectEvents, SootopolisCity_PokemonCenter_1F_MapWarps, NULL, NULL

