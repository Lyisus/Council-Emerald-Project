@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/AbandonedShip_Corridors_B1F/map.json
@

	.align 2

AbandonedShip_Corridors_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TUBER_M, 2, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, AbandonedShip_Corridors_B1F_EventScript_TuberM, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 9, 6, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 0, TRAINER_TYPE_NORMAL, 4, AbandonedShip_Corridors_B1F_EventScript_Duncan, 0

AbandonedShip_Corridors_B1F_MapWarps:
	warp_def 6, 4, 3, 2, MAP_ABANDONED_SHIP_ROOMS2_B1F
	warp_def 3, 4, 3, 0, MAP_ABANDONED_SHIP_ROOMS2_B1F
	warp_def 5, 7, 3, 0, MAP_ABANDONED_SHIP_ROOMS_B1F
	warp_def 8, 7, 3, 1, MAP_ABANDONED_SHIP_ROOMS_B1F
	warp_def 11, 7, 3, 2, MAP_ABANDONED_SHIP_ROOMS_B1F
	warp_def 11, 4, 3, 0, MAP_ABANDONED_SHIP_ROOM_B1F
	warp_def 0, 2, 3, 10, MAP_ABANDONED_SHIP_CORRIDORS_1F
	warp_def 8, 2, 3, 9, MAP_ABANDONED_SHIP_CORRIDORS_1F

AbandonedShip_Corridors_B1F_MapBGEvents:
	bg_sign_event 11, 4, 3, BG_EVENT_PLAYER_FACING_ANY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor

AbandonedShip_Corridors_B1F_MapEvents::
	map_events AbandonedShip_Corridors_B1F_ObjectEvents, AbandonedShip_Corridors_B1F_MapWarps, NULL, AbandonedShip_Corridors_B1F_MapBGEvents

