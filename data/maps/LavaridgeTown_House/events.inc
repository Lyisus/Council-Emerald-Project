@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavaridgeTown_House/map.json
@

	.align 2

LavaridgeTown_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN, 2, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavaridgeTown_House_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_ZIGZAGOON_2, 6, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavaridgeTown_House_EventScript_Zigzagoon, 0
	object_event 3, OBJ_EVENT_GFX_NINJA_BOY, 8, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavaridgeTown_House_EventScript_MimicTutor, 0

LavaridgeTown_House_MapWarps:
	warp_def 3, 7, 0, 4, MAP_LAVARIDGE_TOWN
	warp_def 4, 7, 0, 4, MAP_LAVARIDGE_TOWN

LavaridgeTown_House_MapEvents::
	map_events LavaridgeTown_House_ObjectEvents, LavaridgeTown_House_MapWarps, NULL, NULL

