@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_PokemonTrainerFanClub/map.json
@

	.align 2

LilycoveCity_PokemonTrainerFanClub_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 3, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_Lass, 0
	object_event 2, OBJ_EVENT_GFX_MAN_4, 8, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_POKEFAN_M, 6, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_GIRL, 5, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl, 0
	object_event 5, OBJ_EVENT_GFX_NINJA_BOY, 7, 11, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy, FLAG_HIDE_FANCLUB_LITTLE_BOY
	object_event 6, OBJ_EVENT_GFX_BOY_2, 1, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_Boy, FLAG_HIDE_FANCLUB_BOY
	object_event 7, OBJ_EVENT_GFX_WOMAN_3, 3, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_Woman, FLAG_HIDE_FANCLUB_LADY
	object_event 8, OBJ_EVENT_GFX_EXPERT_F, 10, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF, FLAG_HIDE_FANCLUB_OLD_LADY
	object_event 9, OBJ_EVENT_GFX_BOY_1, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer, FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER

LilycoveCity_PokemonTrainerFanClub_MapWarps:
	warp_def 6, 13, 0, 5, MAP_LILYCOVE_CITY
	warp_def 5, 13, 0, 5, MAP_LILYCOVE_CITY

LilycoveCity_PokemonTrainerFanClub_MapEvents::
	map_events LilycoveCity_PokemonTrainerFanClub_ObjectEvents, LilycoveCity_PokemonTrainerFanClub_MapWarps, NULL, NULL

