@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BirthIsland_Harbor/map.json
@

	.align 2

BirthIsland_Harbor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 8, 5, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, BirthIsland_Harbor_EventScript_Sailor, 0
	object_event 2, OBJ_EVENT_GFX_SS_TIDAL, 8, 7, 1, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0

BirthIsland_Harbor_MapWarps:
	warp_def 8, 2, 0, 0, MAP_BIRTH_ISLAND_EXTERIOR

BirthIsland_Harbor_MapEvents::
	map_events BirthIsland_Harbor_ObjectEvents, BirthIsland_Harbor_MapWarps, NULL, NULL

