@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MossdeepCity_House1/map.json
@

	.align 2

MossdeepCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLACK_BELT, 3, 3, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, MossdeepCity_House1_EventScript_BlackBelt, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_House1_EventScript_Woman, 0

MossdeepCity_House1_MapWarps:
	warp_def 3, 7, 0, 0, MAP_MOSSDEEP_CITY
	warp_def 4, 7, 0, 0, MAP_MOSSDEEP_CITY

MossdeepCity_House1_MapEvents::
	map_events MossdeepCity_House1_ObjectEvents, MossdeepCity_House1_MapWarps, NULL, NULL

