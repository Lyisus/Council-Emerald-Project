@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MauvilleCity_BikeShop/map.json
@

	.align 2

MauvilleCity_BikeShop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_2, 2, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_BikeShop_EventScript_Rydel, 0
	object_event 2, OBJ_EVENT_GFX_MAN_5, 7, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, MauvilleCity_BikeShop_EventScript_Assistant, 0

MauvilleCity_BikeShop_MapWarps:
	warp_def 3, 8, 0, 2, MAP_MAUVILLE_CITY
	warp_def 4, 8, 0, 2, MAP_MAUVILLE_CITY

MauvilleCity_BikeShop_MapBGEvents:
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_MachBikeHandbook
	bg_sign_event 11, 1, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_BikeShop_EventScript_AcroBikeHandbook

MauvilleCity_BikeShop_MapEvents::
	map_events MauvilleCity_BikeShop_ObjectEvents, MauvilleCity_BikeShop_MapWarps, NULL, MauvilleCity_BikeShop_MapBGEvents

