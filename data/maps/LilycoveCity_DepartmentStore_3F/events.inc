@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_DepartmentStore_3F/map.json
@

	.align 2

LilycoveCity_DepartmentStore_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M, 0, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM, 0
	object_event 2, OBJ_EVENT_GFX_POKEFAN_M, 7, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_3F_EventScript_PokefanM, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_5, 13, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_3F_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_3, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_3, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight, 0

LilycoveCity_DepartmentStore_3F_MapWarps:
	warp_def 13, 1, 0, 1, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_2F
	warp_def 16, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_4F
	warp_def 2, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR

LilycoveCity_DepartmentStore_3F_MapEvents::
	map_events LilycoveCity_DepartmentStore_3F_ObjectEvents, LilycoveCity_DepartmentStore_3F_MapWarps, NULL, NULL

