@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity/map.json
@

	.align 2

LilycoveCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 32, 20, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Sailor2, 0
	object_event 2, OBJ_EVENT_GFX_GIRL_1, 15, 18, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Girl, 0
	object_event 3, OBJ_EVENT_GFX_MAN_1, 28, 28, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Man3, 0
	object_event 4, OBJ_EVENT_GFX_RICH_BOY, 21, 15, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_RichBoy, 0
	object_event 5, OBJ_EVENT_GFX_MAN_2, 16, 9, 5, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Man2, 0
	object_event 6, OBJ_EVENT_GFX_WOMAN_2, 35, 27, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Woman2, 0
	object_event 7, OBJ_EVENT_GFX_EXPERT_M, 35, 37, 5, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_ExpertM1, 0
	object_event 8, OBJ_EVENT_GFX_EXPERT_F, 34, 37, 5, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_ExpertF, 0
	object_event 9, OBJ_EVENT_GFX_EXPERT_M, 57, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_ExpertM2, 0
	object_event 10, OBJ_EVENT_GFX_AQUA_MEMBER_M, 73, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_WailmerTrainerGrunt, FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	object_event 11, OBJ_EVENT_GFX_ITEM_BALL, 61, 36, 5, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_MAX_REPEL, Common_EventScript_FindItem, FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL
	object_event 12, OBJ_EVENT_GFX_AQUA_MEMBER_M, 43, 18, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_AquaGrunt4, FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	object_event 13, OBJ_EVENT_GFX_AQUA_MEMBER_M, 46, 12, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_AquaGrunt1, FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	object_event 14, OBJ_EVENT_GFX_AQUA_MEMBER_M, 45, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_AquaGrunt2, FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	object_event 15, OBJ_EVENT_GFX_AQUA_MEMBER_M, 38, 9, 5, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_AquaGrunt3, FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	object_event 16, OBJ_EVENT_GFX_GENTLEMAN, 50, 7, 5, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_BerryGentleman, 0
	object_event 17, OBJ_EVENT_GFX_VAR_0, 27, 7, 5, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Rival, FLAG_HIDE_LILYCOVE_CITY_RIVAL
	object_event 18, OBJ_EVENT_GFX_SCHOOL_KID_M, 16, 23, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_SchoolKidM, 0
	object_event 19, OBJ_EVENT_GFX_WOMAN_3, 41, 25, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Woman1, 0
	object_event 20, OBJ_EVENT_GFX_MAN_2, 40, 25, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Man1, 0
	object_event 21, OBJ_EVENT_GFX_SAILOR, 16, 34, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_Sailor1, 0
	object_event 22, OBJ_EVENT_GFX_FAT_MAN, 16, 35, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_EventScript_FatMan, 0

LilycoveCity_MapWarps:
	warp_def 27, 6, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F
	warp_def 37, 24, 0, 0, MAP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F
	warp_def 24, 14, 0, 0, MAP_LILYCOVE_CITY_POKEMON_CENTER_1F
	warp_def 11, 5, 0, 0, MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F
	warp_def 23, 24, 0, 0, MAP_LILYCOVE_CITY_CONTEST_LOBBY
	warp_def 39, 14, 0, 1, MAP_LILYCOVE_CITY_POKEMON_TRAINER_FAN_CLUB
	warp_def 70, 5, 1, 0, MAP_AQUA_HIDEOUT_1F
	warp_def 36, 6, 0, 0, MAP_LILYCOVE_CITY_MOVE_DELETERS_HOUSE
	warp_def 42, 6, 0, 0, MAP_LILYCOVE_CITY_HOUSE1
	warp_def 55, 15, 0, 0, MAP_LILYCOVE_CITY_HOUSE2
	warp_def 11, 22, 0, 0, MAP_LILYCOVE_CITY_HOUSE3
	warp_def 12, 14, 0, 0, MAP_LILYCOVE_CITY_HOUSE4
	warp_def 12, 32, 0, 0, MAP_LILYCOVE_CITY_HARBOR
	warp_def 12, 5, 0, 1, MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F

LilycoveCity_MapBGEvents:
	bg_sign_event 19, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_MuseumSign
	bg_sign_event 25, 14, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 29, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_DepartmentStoreSign
	bg_sign_event 26, 14, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_CitySign
	bg_sign_event 29, 24, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_ContestHallSign
	bg_sign_event 35, 24, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_MotelSign
	bg_sign_event 6, 30, 3, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_HarborSign
	bg_sign_event 36, 14, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_TrainerFanClubSign
	bg_sign_event 34, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_EventScript_MoveDeletersHouseSign
	bg_hidden_item_event 36, 31, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE
	bg_hidden_item_event 61, 7, 0, ITEM_PP_UP, FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP
	bg_hidden_item_event 64, 31, 0, ITEM_POKE_BALL, FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL

LilycoveCity_MapEvents::
	map_events LilycoveCity_ObjectEvents, LilycoveCity_MapWarps, NULL, LilycoveCity_MapBGEvents

