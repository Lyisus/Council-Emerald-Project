@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/NewMauville_Entrance/map.json
@

	.align 2

NewMauville_Entrance_MapWarps:
	warp_def 4, 6, 3, 0, MAP_ROUTE110
	warp_def 4, 1, 3, 0, MAP_NEW_MAUVILLE_INSIDE

NewMauville_Entrance_MapCoordEvents:
	coord_event 4, 2, 3, VAR_NEW_MAUVILLE_STATE, 0, NewMauville_Entrance_EventScript_Door

NewMauville_Entrance_MapEvents::
	map_events NULL, NewMauville_Entrance_MapWarps, NewMauville_Entrance_MapCoordEvents, NULL

