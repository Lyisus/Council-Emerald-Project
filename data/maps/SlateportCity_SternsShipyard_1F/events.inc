@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SlateportCity_SternsShipyard_1F/map.json
@

	.align 2

SlateportCity_SternsShipyard_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_1, 5, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, SlateportCity_SternsShipyard_1F_EventScript_Dock, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST_1, 10, 7, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, SlateportCity_SternsShipyard_1F_EventScript_Scientist1, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST_1, 18, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, SlateportCity_SternsShipyard_1F_EventScript_Scientist2, 0
	object_event 4, OBJ_EVENT_GFX_EXPERT_M, 12, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, TRAINER_TYPE_NONE, 0, SlateportCity_SternsShipyard_1F_EventScript_Briney, FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY

SlateportCity_SternsShipyard_1F_MapWarps:
	warp_def 2, 14, 0, 2, MAP_SLATEPORT_CITY
	warp_def 3, 14, 0, 2, MAP_SLATEPORT_CITY
	warp_def 3, 1, 0, 0, MAP_SLATEPORT_CITY_STERNS_SHIPYARD_2F

SlateportCity_SternsShipyard_1F_MapEvents::
	map_events SlateportCity_SternsShipyard_1F_ObjectEvents, SlateportCity_SternsShipyard_1F_MapWarps, NULL, NULL

