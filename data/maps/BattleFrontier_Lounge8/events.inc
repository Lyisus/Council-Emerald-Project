@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_Lounge8/map.json
@

	.align 2

BattleFrontier_Lounge8_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NINJA_BOY, 4, 5, 0, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge8_EventScript_NinjaBoy, 0
	object_event 2, OBJ_EVENT_GFX_MAN_3, 8, 7, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge8_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_5, 8, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge8_EventScript_Woman, 0

BattleFrontier_Lounge8_MapWarps:
	warp_def 4, 9, 0, 10, MAP_BATTLE_FRONTIER_OUTSIDE_EAST

BattleFrontier_Lounge8_MapEvents::
	map_events BattleFrontier_Lounge8_ObjectEvents, BattleFrontier_Lounge8_MapWarps, NULL, NULL

