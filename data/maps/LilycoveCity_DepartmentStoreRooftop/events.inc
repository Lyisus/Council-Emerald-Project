@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_DepartmentStoreRooftop/map.json
@

	.align 2

LilycoveCity_DepartmentStoreRooftop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_2, 4, 4, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_Man, 0
	object_event 2, OBJ_EVENT_GFX_MAN_3, 7, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan, 0
	object_event 3, OBJ_EVENT_GFX_ROOFTOP_SALE_WOMAN, 6, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman, FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	object_event 4, OBJ_EVENT_GFX_WOMAN_3, 15, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor, 0

LilycoveCity_DepartmentStoreRooftop_MapWarps:
	warp_def 13, 3, 0, 2, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F

LilycoveCity_DepartmentStoreRooftop_MapBGEvents:
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine
	bg_sign_event 10, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine

LilycoveCity_DepartmentStoreRooftop_MapEvents::
	map_events LilycoveCity_DepartmentStoreRooftop_ObjectEvents, LilycoveCity_DepartmentStoreRooftop_MapWarps, NULL, LilycoveCity_DepartmentStoreRooftop_MapBGEvents

