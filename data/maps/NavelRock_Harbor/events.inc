@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/NavelRock_Harbor/map.json
@

	.align 2

NavelRock_Harbor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 8, 5, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, NavelRock_Harbor_EventScript_Sailor, 0
	object_event 2, OBJ_EVENT_GFX_SS_TIDAL, 8, 7, 1, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0

NavelRock_Harbor_MapWarps:
	warp_def 8, 2, 0, 0, MAP_NAVEL_ROCK_EXTERIOR

NavelRock_Harbor_MapEvents::
	map_events NavelRock_Harbor_ObjectEvents, NavelRock_Harbor_MapWarps, NULL, NULL

