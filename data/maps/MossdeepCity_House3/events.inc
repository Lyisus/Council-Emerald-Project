@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MossdeepCity_House3/map.json
@

	.align 2

MossdeepCity_House3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHERMAN, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_House3_EventScript_SuperRodFisherman, 0

MossdeepCity_House3_MapWarps:
	warp_def 3, 7, 0, 5, MAP_MOSSDEEP_CITY
	warp_def 4, 7, 0, 5, MAP_MOSSDEEP_CITY

MossdeepCity_House3_MapEvents::
	map_events MossdeepCity_House3_ObjectEvents, MossdeepCity_House3_MapWarps, NULL, NULL

