@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RustboroCity_Mart/map.json
@

	.align 2

RustboroCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MART_EMPLOYEE, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_BOY_1, 2, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, RustboroCity_Mart_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_POKEFAN_F, 8, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, TRAINER_TYPE_NONE, 0, RustboroCity_Mart_EventScript_PokefanF, 0
	object_event 4, OBJ_EVENT_GFX_BUG_CATCHER, 8, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, RustboroCity_Mart_EventScript_BugCatcher, 0

RustboroCity_Mart_MapWarps:
	warp_def 3, 7, 0, 2, MAP_RUSTBORO_CITY
	warp_def 4, 7, 0, 2, MAP_RUSTBORO_CITY

RustboroCity_Mart_MapEvents::
	map_events RustboroCity_Mart_ObjectEvents, RustboroCity_Mart_MapWarps, NULL, NULL

