@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MeteorFalls_B1F_2R/map.json
@

	.align 2

MeteorFalls_B1F_2R_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 5, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_TM_DRAGON_CLAW, Common_EventScript_FindItem, FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_DRAGON_CLAW

MeteorFalls_B1F_2R_MapWarps:
	warp_def 5, 15, 3, 3, MAP_METEOR_FALLS_B1F_1R

MeteorFalls_B1F_2R_MapEvents::
	map_events MeteorFalls_B1F_2R_ObjectEvents, MeteorFalls_B1F_2R_MapWarps, NULL, NULL

