@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MagmaHideout_3F_1R/map.json
@

	.align 2

MagmaHideout_3F_1R_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAGMA_MEMBER_M, 2, 7, 4, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, MagmaHideout_3F_1R_EventScript_Grunt9, FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	object_event 2, OBJ_EVENT_GFX_MAGMA_MEMBER_F, 21, 21, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, MagmaHideout_3F_1R_EventScript_Grunt16, FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 9, 16, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_NUGGET, Common_EventScript_FindItem, FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET

MagmaHideout_3F_1R_MapWarps:
	warp_def 7, 21, 0, 0, MAP_MAGMA_HIDEOUT_4F
	warp_def 21, 9, 0, 0, MAP_MAGMA_HIDEOUT_3F_2R
	warp_def 23, 3, 0, 2, MAP_MAGMA_HIDEOUT_2F_1R

MagmaHideout_3F_1R_MapEvents::
	map_events MagmaHideout_3F_1R_ObjectEvents, MagmaHideout_3F_1R_MapWarps, NULL, NULL

