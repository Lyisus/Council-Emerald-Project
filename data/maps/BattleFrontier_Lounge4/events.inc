@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_Lounge4/map.json
@

	.align 2

BattleFrontier_Lounge4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_3, 4, 4, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge4_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_COOK, 6, 6, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge4_EventScript_Cook, 0
	object_event 3, OBJ_EVENT_GFX_MAN_3, 0, 5, 0, MOVEMENT_TYPE_FACE_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge4_EventScript_Man, 0

BattleFrontier_Lounge4_MapWarps:
	warp_def 4, 9, 0, 6, MAP_BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_Lounge4_MapEvents::
	map_events BattleFrontier_Lounge4_ObjectEvents, BattleFrontier_Lounge4_MapWarps, NULL, NULL

