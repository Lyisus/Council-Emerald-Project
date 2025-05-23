@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MauvilleCity/map.json
@

	.align 2

MauvilleCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY_3, 29, 16, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_Boy, 0
	object_event 2, OBJ_EVENT_GFX_RICH_BOY, 24, 10, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_RichBoy, 0
	object_event 3, OBJ_EVENT_GFX_MANIAC, 14, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_Maniac, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_4, 18, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_Woman, 0
	object_event 5, OBJ_EVENT_GFX_SCHOOL_KID_M, 17, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_SchoolKidM, 0
	object_event 6, OBJ_EVENT_GFX_WALLY, 8, 6, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_Wally, FLAG_HIDE_MAUVILLE_CITY_WALLY
	object_event 7, OBJ_EVENT_GFX_POKEFAN_M, 9, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_WallysUncle, FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
	object_event 8, OBJ_EVENT_GFX_WATTSON, 29, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_Wattson, FLAG_HIDE_MAUVILLE_CITY_WATTSON
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 28, 19, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_X_SPEED, Common_EventScript_FindItem, FLAG_ITEM_MAUVILLE_CITY_X_SPEED
	object_event 10, OBJ_EVENT_GFX_FAT_MAN, 13, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, MauvilleCity_EventScript_RolloutTutor, 0
	object_event 11, OBJ_EVENT_GFX_SCOTT, 12, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_MAUVILLE_CITY_SCOTT

MauvilleCity_MapWarps:
	warp_def 8, 5, 0, 0, MAP_MAUVILLE_CITY_GYM
	warp_def 22, 5, 0, 0, MAP_MAUVILLE_CITY_POKEMON_CENTER_1F
	warp_def 35, 5, 0, 0, MAP_MAUVILLE_CITY_BIKE_SHOP
	warp_def 23, 14, 0, 0, MAP_MAUVILLE_CITY_MART
	warp_def 32, 14, 0, 0, MAP_MAUVILLE_CITY_HOUSE1
	warp_def 8, 13, 0, 0, MAP_MAUVILLE_CITY_GAME_CORNER
	warp_def 19, 14, 0, 0, MAP_MAUVILLE_CITY_HOUSE2

MauvilleCity_MapBGEvents:
	bg_sign_event 23, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 11, 6, 3, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_GymSign
	bg_sign_event 24, 14, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign
	bg_sign_event 25, 14, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign
	bg_sign_event 24, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 19, 7, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_CitySign
	bg_sign_event 33, 6, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_BikeShopSign
	bg_sign_event 11, 15, 0, BG_EVENT_PLAYER_FACING_ANY, MauvilleCity_EventScript_GameCornerSign

MauvilleCity_MapEvents::
	map_events MauvilleCity_ObjectEvents, MauvilleCity_MapWarps, NULL, MauvilleCity_MapBGEvents

