@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_DepartmentStore_2F/map.json
@

	.align 2

LilycoveCity_DepartmentStore_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOK, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_2F_EventScript_Cook, 0
	object_event 2, OBJ_EVENT_GFX_POKEFAN_F, 0, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_2F_EventScript_PokefanF, 0
	object_event 3, OBJ_EVENT_GFX_SAILOR, 13, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_2F_EventScript_Sailor, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_3, 10, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_3, 7, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft, 0

LilycoveCity_DepartmentStore_2F_MapWarps:
	warp_def 16, 1, 0, 2, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F
	warp_def 13, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F
	warp_def 2, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR

LilycoveCity_DepartmentStore_2F_MapEvents::
	map_events LilycoveCity_DepartmentStore_2F_ObjectEvents, LilycoveCity_DepartmentStore_2F_MapWarps, NULL, NULL

