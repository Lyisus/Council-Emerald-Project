@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_DepartmentStore_4F/map.json
@

	.align 2

LilycoveCity_DepartmentStore_4F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 0, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_4F_EventScript_Gentleman, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 6, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_4F_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_YOUNGSTER, 13, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_4F_EventScript_Youngster, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_3, 7, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_3, 9, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight, 0

LilycoveCity_DepartmentStore_4F_MapWarps:
	warp_def 16, 1, 0, 1, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F
	warp_def 13, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F
	warp_def 2, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR

LilycoveCity_DepartmentStore_4F_MapEvents::
	map_events LilycoveCity_DepartmentStore_4F_ObjectEvents, LilycoveCity_DepartmentStore_4F_MapWarps, NULL, NULL

