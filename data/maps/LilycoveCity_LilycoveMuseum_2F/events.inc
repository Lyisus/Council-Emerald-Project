@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_LilycoveMuseum_2F/map.json
@

	.align 2

LilycoveCity_LilycoveMuseum_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 10, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator, 0
	object_event 2, OBJ_EVENT_GFX_GIRL_2, 19, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_Girl, FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	object_event 3, OBJ_EVENT_GFX_EXPERT_M, 7, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM, FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	object_event 4, OBJ_EVENT_GFX_RICH_BOY, 14, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy, FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS

LilycoveCity_LilycoveMuseum_2F_MapWarps:
	warp_def 13, 1, 0, 2, MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F

LilycoveCity_LilycoveMuseum_2F_MapBGEvents:
	bg_sign_event 14, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting
	bg_sign_event 15, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting
	bg_sign_event 3, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting
	bg_sign_event 2, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting
	bg_sign_event 10, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting
	bg_sign_event 11, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting
	bg_sign_event 19, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting
	bg_sign_event 18, 6, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting
	bg_sign_event 6, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting
	bg_sign_event 7, 10, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting
	bg_sign_event 11, 2, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture
	bg_sign_event 15, 2, 0, BG_EVENT_PLAYER_FACING_ANY, LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture

LilycoveCity_LilycoveMuseum_2F_MapEvents::
	map_events LilycoveCity_LilycoveMuseum_2F_ObjectEvents, LilycoveCity_LilycoveMuseum_2F_MapWarps, NULL, LilycoveCity_LilycoveMuseum_2F_MapBGEvents

