@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OldaleTown/map.json
@

	.align 2

OldaleTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GIRL_3, 16, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_EventScript_Girl, 0
	object_event 2, OBJ_EVENT_GFX_MART_EMPLOYEE, 13, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_EventScript_MartEmployee, 0
	object_event 3, OBJ_EVENT_GFX_MANIAC, 8, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_EventScript_FootprintsMan, 0
	object_event 4, OBJ_EVENT_GFX_VAR_0, 11, 19, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, OldaleTown_EventScript_Rival, FLAG_HIDE_OLDALE_TOWN_RIVAL

OldaleTown_MapWarps:
	warp_def 5, 7, 0, 0, MAP_OLDALE_TOWN_HOUSE1
	warp_def 15, 16, 0, 0, MAP_OLDALE_TOWN_HOUSE2
	warp_def 6, 16, 0, 0, MAP_OLDALE_TOWN_POKEMON_CENTER_1F
	warp_def 14, 6, 0, 0, MAP_OLDALE_TOWN_MART

OldaleTown_MapCoordEvents:
	coord_event 0, 10, 3, VAR_OLDALE_TOWN_STATE, 0, OldaleTown_EventScript_BlockedPath
	coord_event 8, 19, 3, VAR_OLDALE_RIVAL_STATE, 1, OldaleTown_EventScript_RivalTrigger1
	coord_event 9, 19, 3, VAR_OLDALE_RIVAL_STATE, 1, OldaleTown_EventScript_RivalTrigger2
	coord_event 10, 19, 3, VAR_OLDALE_RIVAL_STATE, 1, OldaleTown_EventScript_RivalTrigger3

OldaleTown_MapBGEvents:
	bg_sign_event 11, 9, 0, BG_EVENT_PLAYER_FACING_ANY, OldaleTown_EventScript_TownSign
	bg_sign_event 7, 16, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 15, 6, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign
	bg_sign_event 8, 16, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 16, 6, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemartSign

OldaleTown_MapEvents::
	map_events OldaleTown_ObjectEvents, OldaleTown_MapWarps, OldaleTown_MapCoordEvents, OldaleTown_MapBGEvents

