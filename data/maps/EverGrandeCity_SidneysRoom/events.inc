@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/EverGrandeCity_SidneysRoom/map.json
@

	.align 2

EverGrandeCity_SidneysRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SIDNEY, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EverGrandeCity_SidneysRoom_EventScript_Sidney, 0

EverGrandeCity_SidneysRoom_MapWarps:
	warp_def 6, 13, 3, 1, MAP_EVER_GRANDE_CITY_HALL5
	warp_def 6, 2, 0, 0, MAP_EVER_GRANDE_CITY_HALL1

EverGrandeCity_SidneysRoom_MapEvents::
	map_events EverGrandeCity_SidneysRoom_ObjectEvents, EverGrandeCity_SidneysRoom_MapWarps, NULL, NULL

