@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FallarborTown_BattleTentLobby/map.json
@

	.align 2

FallarborTown_BattleTentLobby_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLACK_BELT, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_BattleTentLobby_EventScript_Attendant, 0
	object_event 2, OBJ_EVENT_GFX_HIKER, 1, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_BattleTentLobby_EventScript_Hiker, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_BOY, 12, 6, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_BattleTentLobby_EventScript_LittleBoy, 0
	object_event 4, OBJ_EVENT_GFX_LASS, 10, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_BattleTentLobby_EventScript_Lass, 0
	object_event 5, OBJ_EVENT_GFX_SCOTT, 0, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FallarborTown_BattleTentLobby_EventScript_Scott, FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT

FallarborTown_BattleTentLobby_MapWarps:
	warp_def 6, 9, 0, 1, MAP_FALLARBOR_TOWN
	warp_def 7, 9, 0, 1, MAP_FALLARBOR_TOWN

FallarborTown_BattleTentLobby_MapBGEvents:
	bg_sign_event 4, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FallarborTown_BattleTentLobby_EventScript_RulesBoard

FallarborTown_BattleTentLobby_MapEvents::
	map_events FallarborTown_BattleTentLobby_ObjectEvents, FallarborTown_BattleTentLobby_MapWarps, NULL, FallarborTown_BattleTentLobby_MapBGEvents

