@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleFrontier_ReceptionGate/map.json
@

	.align 2

BattleFrontier_ReceptionGate_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 0, 11, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_ReceptionGate_EventScript_Greeter, 0
	object_event 2, OBJ_EVENT_GFX_TEALA, 8, 11, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_ReceptionGate_EventScript_FacilityGuide, 0
	object_event 3, OBJ_EVENT_GFX_MAN_2, 8, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_ReceptionGate_EventScript_RulesGuide, 0
	object_event 4, OBJ_EVENT_GFX_SCOTT, 4, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
	object_event 5, OBJ_EVENT_GFX_MAN_2, 0, 4, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide, 0

BattleFrontier_ReceptionGate_MapWarps:
	warp_def 4, 13, 0, 8, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 4, 1, 0, 9, MAP_BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_ReceptionGate_MapEvents::
	map_events BattleFrontier_ReceptionGate_ObjectEvents, BattleFrontier_ReceptionGate_MapWarps, NULL, NULL

