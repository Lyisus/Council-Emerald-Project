@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_DevonCorp_2F/map.json
@

	.align 2

RustboroCity_DevonCorp_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST_1, 6, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST_1, 1, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_BallScientist, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST_1, 2, 6, 3, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_PokenavScientist, 0
	object_event 4, OBJ_EVENT_GFX_SCIENTIST_1, 10, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 10, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist, 0
	object_event 5, OBJ_EVENT_GFX_SCIENTIST_1, 14, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_FossilScientist, 0
	object_event 6, OBJ_EVENT_GFX_SCIENTIST_1, 14, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist, 0

RustboroCity_DevonCorp_2F_MapWarps:
	warp_def 14, 1, 0, 2, MAP_RUSTBORO_CITY_DEVON_CORP_1F
	warp_def 2, 1, 0, 0, MAP_RUSTBORO_CITY_DEVON_CORP_3F

RustboroCity_DevonCorp_2F_MapEvents::
	map_events RustboroCity_DevonCorp_2F_ObjectEvents, RustboroCity_DevonCorp_2F_MapWarps, NULL, NULL

