@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route124_DivingTreasureHuntersHouse/map.json
@

	.align 2

Route124_DivingTreasureHuntersHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_5, 5, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter, 0

Route124_DivingTreasureHuntersHouse_MapWarps:
	warp_def 3, 8, 0, 0, MAP_ROUTE124
	warp_def 4, 8, 0, 0, MAP_ROUTE124

Route124_DivingTreasureHuntersHouse_MapBGEvents:
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard

Route124_DivingTreasureHuntersHouse_MapEvents::
	map_events Route124_DivingTreasureHuntersHouse_ObjectEvents, Route124_DivingTreasureHuntersHouse_MapWarps, NULL, Route124_DivingTreasureHuntersHouse_MapBGEvents

