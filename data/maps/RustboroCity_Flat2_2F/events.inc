@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_Flat2_2F/map.json
@

	.align 2

RustboroCity_Flat2_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN, 11, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_2F_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_NINJA_BOY, 7, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_2F_EventScript_NinjaBoy, 0

RustboroCity_Flat2_2F_MapWarps:
	warp_def 3, 1, 0, 2, MAP_RUSTBORO_CITY_FLAT2_1F
	warp_def 1, 1, 0, 0, MAP_RUSTBORO_CITY_FLAT2_3F

RustboroCity_Flat2_2F_MapEvents::
	map_events RustboroCity_Flat2_2F_ObjectEvents, RustboroCity_Flat2_2F_MapWarps, NULL, NULL

