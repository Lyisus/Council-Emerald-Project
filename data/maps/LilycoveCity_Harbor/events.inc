@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_Harbor/map.json
@

	.align 2

LilycoveCity_Harbor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BEAUTY, 8, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_Harbor_EventScript_FerryAttendant, FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT
	object_event 2, OBJ_EVENT_GFX_SS_TIDAL, 8, 9, 1, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
	object_event 3, OBJ_EVENT_GFX_SAILOR, 3, 13, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_Harbor_EventScript_Sailor, 0
	object_event 4, OBJ_EVENT_GFX_SAILOR, 8, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
	object_event 5, OBJ_EVENT_GFX_EXPERT_M, 8, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER

LilycoveCity_Harbor_MapWarps:
	warp_def 11, 14, 0, 12, MAP_LILYCOVE_CITY
	warp_def 12, 14, 0, 12, MAP_LILYCOVE_CITY

LilycoveCity_Harbor_MapEvents::
	map_events LilycoveCity_Harbor_ObjectEvents, LilycoveCity_Harbor_MapWarps, NULL, NULL

