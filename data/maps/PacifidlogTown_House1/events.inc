@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PacifidlogTown_House1/map.json
@

	.align 2

PacifidlogTown_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_5, 3, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PacifidlogTown_House1_EventScript_Man, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_4, 6, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, PacifidlogTown_House1_EventScript_Woman, 0

PacifidlogTown_House1_MapWarps:
	warp_def 4, 8, 0, 1, MAP_PACIFIDLOG_TOWN
	warp_def 5, 8, 0, 1, MAP_PACIFIDLOG_TOWN

PacifidlogTown_House1_MapEvents::
	map_events PacifidlogTown_House1_ObjectEvents, PacifidlogTown_House1_MapWarps, NULL, NULL

