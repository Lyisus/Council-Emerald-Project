@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_Flat2_1F/map.json
@

	.align 2

RustboroCity_Flat2_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SKITTY, 11, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_1F_EventScript_Skitty, 0
	object_event 2, OBJ_EVENT_GFX_OLD_WOMAN, 8, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_1F_EventScript_OldWoman, 0

RustboroCity_Flat2_1F_MapWarps:
	warp_def 2, 8, 0, 10, MAP_RUSTBORO_CITY
	warp_def 3, 8, 0, 10, MAP_RUSTBORO_CITY
	warp_def 3, 1, 0, 0, MAP_RUSTBORO_CITY_FLAT2_2F

RustboroCity_Flat2_1F_MapEvents::
	map_events RustboroCity_Flat2_1F_ObjectEvents, RustboroCity_Flat2_1F_MapWarps, NULL, NULL

