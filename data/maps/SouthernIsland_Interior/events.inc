@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SouthernIsland_Interior/map.json
@

	.align 2

SouthernIsland_Interior_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 13, 12, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE
	object_event 2, OBJ_EVENT_GFX_VAR_1, 13, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON

SouthernIsland_Interior_MapWarps:
	warp_def 13, 18, 3, 0, MAP_SOUTHERN_ISLAND_EXTERIOR
	warp_def 14, 18, 3, 1, MAP_SOUTHERN_ISLAND_EXTERIOR

SouthernIsland_Interior_MapBGEvents:
	bg_sign_event 13, 11, 3, BG_EVENT_PLAYER_FACING_NORTH, SouthernIsland_Interior_EventScript_TryLatiEncounter

SouthernIsland_Interior_MapEvents::
	map_events SouthernIsland_Interior_ObjectEvents, SouthernIsland_Interior_MapWarps, NULL, SouthernIsland_Interior_MapBGEvents

