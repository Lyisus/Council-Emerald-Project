@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_Lounge3/map.json
@

	.align 2

BattleFrontier_Lounge3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 4, 6, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge3_EventScript_Gambler, 0
	object_event 2, OBJ_EVENT_GFX_FAT_MAN, 4, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge3_EventScript_FatMan, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 3, 5, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge3_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_POKEFAN_F, 5, 5, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge3_EventScript_PokefanF, 0
	object_event 5, OBJ_EVENT_GFX_MAN_3, 0, 6, 0, MOVEMENT_TYPE_WANDER_AROUND, 0, 3, TRAINER_TYPE_NONE, 0, BattleFrontier_Lounge3_EventScript_Man, 0

BattleFrontier_Lounge3_MapWarps:
	warp_def 4, 9, 0, 9, MAP_BATTLE_FRONTIER_OUTSIDE_EAST

BattleFrontier_Lounge3_MapEvents::
	map_events BattleFrontier_Lounge3_ObjectEvents, BattleFrontier_Lounge3_MapWarps, NULL, NULL

