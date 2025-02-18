@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/NewMauville_Inside/map.json
@

	.align 2

NewMauville_Inside_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 32, 25, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_ULTRA_BALL, Common_EventScript_FindItem, FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 16, 22, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, ITEM_ESCAPE_ROPE, Common_EventScript_FindItem, FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 39, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_THUNDER_STONE, Common_EventScript_FindItem, FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 17, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_FULL_HEAL, Common_EventScript_FindItem, FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 2, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_PARALYZE_HEAL, Common_EventScript_FindItem, FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 25, 18, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, NewMauville_Inside_EventScript_Voltorb1, FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 6, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, NewMauville_Inside_EventScript_Voltorb2, FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 13, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, NewMauville_Inside_EventScript_Voltorb3, FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3

NewMauville_Inside_MapWarps:
	warp_def 32, 33, 3, 1, MAP_NEW_MAUVILLE_ENTRANCE

NewMauville_Inside_MapCoordEvents:
	coord_event 30, 38, 3, VAR_TEMP_1, 0, NewMauville_Inside_EventScript_BlueButton
	coord_event 18, 36, 3, VAR_TEMP_2, 0, NewMauville_Inside_EventScript_GreenButton
	coord_event 4, 26, 3, VAR_TEMP_1, 0, NewMauville_Inside_EventScript_BlueButton
	coord_event 16, 22, 3, VAR_TEMP_1, 0, NewMauville_Inside_EventScript_BlueButton
	coord_event 25, 18, 3, VAR_TEMP_2, 0, NewMauville_Inside_EventScript_GreenButton
	coord_event 2, 11, 3, VAR_TEMP_2, 0, NewMauville_Inside_EventScript_GreenButton
	coord_event 6, 11, 3, VAR_TEMP_1, 0, NewMauville_Inside_EventScript_BlueButton
	coord_event 13, 10, 3, VAR_TEMP_1, 0, NewMauville_Inside_EventScript_BlueButton
	coord_event 17, 10, 3, VAR_TEMP_2, 0, NewMauville_Inside_EventScript_GreenButton
	coord_event 33, 6, 3, VAR_NEW_MAUVILLE_STATE, 1, NewMauville_Inside_EventScript_RedButton

NewMauville_Inside_MapBGEvents:
	bg_sign_event 32, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 32, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 32, 2, 0, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 33, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 34, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 35, 4, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 35, 3, 3, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator
	bg_sign_event 35, 2, 0, BG_EVENT_PLAYER_FACING_ANY, NewMauville_Inside_EventScript_Generator

NewMauville_Inside_MapEvents::
	map_events NewMauville_Inside_ObjectEvents, NewMauville_Inside_MapWarps, NewMauville_Inside_MapCoordEvents, NewMauville_Inside_MapBGEvents

