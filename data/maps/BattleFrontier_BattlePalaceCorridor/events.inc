@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_BattlePalaceCorridor/map.json
@

	.align 2

BattleFrontier_BattlePalaceCorridor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_EXPERT_M, 8, 12, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 2, OBJ_EVENT_GFX_AZURILL, 3, 5, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 0, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 3, OBJ_EVENT_GFX_KIRLIA, 12, 6, 0, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 2, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 4, OBJ_EVENT_GFX_PIKACHU, 15, 5, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 5, OBJ_EVENT_GFX_ZIGZAGOON_2, 4, 9, 0, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 2, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 6, OBJ_EVENT_GFX_AZUMARILL, 13, 9, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 7, OBJ_EVENT_GFX_WINGULL, 3, 10, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, TRAINER_TYPE_NONE, 0, 0x0, 0

BattleFrontier_BattlePalaceCorridor_MapWarps:
	warp_def 8, 13, 3, 2, MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY
	warp_def 9, 13, 3, 2, MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY
	warp_def 6, 3, 3, 0, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
	warp_def 10, 3, 3, 0, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM

BattleFrontier_BattlePalaceCorridor_MapEvents::
	map_events BattleFrontier_BattlePalaceCorridor_ObjectEvents, BattleFrontier_BattlePalaceCorridor_MapWarps, NULL, NULL

