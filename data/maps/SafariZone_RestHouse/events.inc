@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_RestHouse/map.json
@

	.align 2

SafariZone_RestHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 7, 4, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_RestHouse_EventScript_Youngster, 0
	object_event 2, OBJ_EVENT_GFX_PSYCHIC_M, 8, 4, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_RestHouse_EventScript_PsychicM, 0
	object_event 3, OBJ_EVENT_GFX_FAT_MAN, 2, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_RestHouse_EventScript_FatMan, 0

SafariZone_RestHouse_MapWarps:
	warp_def 3, 8, 0, 0, MAP_SAFARI_ZONE_SOUTHWEST
	warp_def 4, 8, 0, 0, MAP_SAFARI_ZONE_SOUTHWEST

SafariZone_RestHouse_MapEvents::
	map_events SafariZone_RestHouse_ObjectEvents, SafariZone_RestHouse_MapWarps, NULL, NULL

