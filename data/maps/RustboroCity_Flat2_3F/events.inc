@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_Flat2_3F/map.json
@

	.align 2

RustboroCity_Flat2_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_DEVON_EMPLOYEE, 7, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_3F_EventScript_DevonEmployee, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 12, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Flat2_3F_EventScript_Woman, 0

RustboroCity_Flat2_3F_MapWarps:
	warp_def 1, 1, 0, 1, MAP_RUSTBORO_CITY_FLAT2_2F

RustboroCity_Flat2_3F_MapEvents::
	map_events RustboroCity_Flat2_3F_ObjectEvents, RustboroCity_Flat2_3F_MapWarps, NULL, NULL

