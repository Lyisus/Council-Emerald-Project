@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_CuttersHouse/map.json
@

	.align 2

RustboroCity_CuttersHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POKEFAN_M, 7, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_CuttersHouse_EventScript_Cutter, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 9, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, RustboroCity_CuttersHouse_EventScript_Lass, 0

RustboroCity_CuttersHouse_MapWarps:
	warp_def 5, 8, 0, 8, MAP_RUSTBORO_CITY
	warp_def 6, 8, 0, 8, MAP_RUSTBORO_CITY

RustboroCity_CuttersHouse_MapEvents::
	map_events RustboroCity_CuttersHouse_ObjectEvents, RustboroCity_CuttersHouse_MapWarps, NULL, NULL

