@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AbandonedShip_Rooms_B1F/map.json
@

	.align 2

AbandonedShip_Rooms_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 25, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, AbandonedShip_Rooms_B1F_EventScript_FatMan, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 6, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_ESCAPE_ROPE, Common_EventScript_FindItem, FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE

AbandonedShip_Rooms_B1F_MapWarps:
	warp_def 4, 1, 3, 2, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 13, 1, 3, 3, MAP_ABANDONED_SHIP_CORRIDORS_B1F
	warp_def 22, 1, 3, 4, MAP_ABANDONED_SHIP_CORRIDORS_B1F

AbandonedShip_Rooms_B1F_MapEvents::
	map_events AbandonedShip_Rooms_B1F_ObjectEvents, AbandonedShip_Rooms_B1F_MapWarps, NULL, NULL

