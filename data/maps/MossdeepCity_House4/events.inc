@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MossdeepCity_House4/map.json
@

	.align 2

MossdeepCity_House4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 3, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_House4_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_NINJA_BOY, 6, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, MossdeepCity_House4_EventScript_NinjaBoy, 0
	object_event 3, OBJ_EVENT_GFX_SKITTY, 2, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MossdeepCity_House4_EventScript_Skitty, 0

MossdeepCity_House4_MapWarps:
	warp_def 4, 7, 0, 7, MAP_MOSSDEEP_CITY
	warp_def 3, 7, 0, 7, MAP_MOSSDEEP_CITY

MossdeepCity_House4_MapEvents::
	map_events MossdeepCity_House4_ObjectEvents, MossdeepCity_House4_MapWarps, NULL, NULL

