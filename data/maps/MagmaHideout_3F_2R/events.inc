@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MagmaHideout_3F_2R/map.json
@

	.align 2

MagmaHideout_3F_2R_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAGMA_MEMBER_M, 16, 3, 0, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, MagmaHideout_3F_2R_EventScript_Grunt10, FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 5, 9, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_PP_MAX, Common_EventScript_FindItem, FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX

MagmaHideout_3F_2R_MapWarps:
	warp_def 12, 15, 0, 1, MAP_MAGMA_HIDEOUT_3F_1R

MagmaHideout_3F_2R_MapEvents::
	map_events MagmaHideout_3F_2R_ObjectEvents, MagmaHideout_3F_2R_MapWarps, NULL, NULL

