@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_House1/map.json
@

	.align 2

LilycoveCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_EXPERT_M, 4, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_House1_EventScript_ExpertM, 0
	object_event 2, OBJ_EVENT_GFX_KECLEON, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_House1_EventScript_Kecleon, 0

LilycoveCity_House1_MapWarps:
	warp_def 3, 8, 0, 8, MAP_LILYCOVE_CITY
	warp_def 4, 8, 0, 8, MAP_LILYCOVE_CITY

LilycoveCity_House1_MapEvents::
	map_events LilycoveCity_House1_ObjectEvents, LilycoveCity_House1_MapWarps, NULL, NULL

