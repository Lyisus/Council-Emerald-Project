@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AbandonedShip_Rooms2_B1F/map.json
@

	.align 2

AbandonedShip_Rooms2_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CAMPER, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, AbandonedShip_Rooms2_B1F_EventScript_Camper, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 13, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_DIVE_BALL, Common_EventScript_FindItem, FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL

AbandonedShip_Rooms2_B1F_MapWarps:
	warp_def 4, 7, 3, 1, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 5, 7, 3, 1, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 13, 7, 3, 0, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 14, 7, 3, 0, MAP_ABANDONED_SHIP_CORRIDORS_B1F

AbandonedShip_Rooms2_B1F_MapEvents::
	map_events AbandonedShip_Rooms2_B1F_ObjectEvents, AbandonedShip_Rooms2_B1F_MapWarps, NULL, NULL

