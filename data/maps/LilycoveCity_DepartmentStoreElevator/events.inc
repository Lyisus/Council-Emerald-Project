@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_DepartmentStoreElevator/map.json
@

	.align 2

LilycoveCity_DepartmentStoreElevator_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 0, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant, 0

LilycoveCity_DepartmentStoreElevator_MapWarps:
	warp_def 1, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 2, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

LilycoveCity_DepartmentStoreElevator_MapEvents::
	map_events LilycoveCity_DepartmentStoreElevator_ObjectEvents, LilycoveCity_DepartmentStoreElevator_MapWarps, NULL, NULL

