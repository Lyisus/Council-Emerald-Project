@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/NavelRock_Top/map.json
@

	.align 2

NavelRock_Top_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HOOH, 12, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_HO_OH

NavelRock_Top_MapWarps:
	warp_def 13, 20, 3, 1, MAP_NAVEL_ROCK_UP4

NavelRock_Top_MapCoordEvents:
	coord_event 12, 10, 3, VAR_TEMP_1, 0, NavelRock_Top_EventScript_HoOh

NavelRock_Top_MapBGEvents:
	bg_hidden_item_event 12, 9, 3, ITEM_SACRED_ASH, FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH

NavelRock_Top_MapEvents::
	map_events NavelRock_Top_ObjectEvents, NavelRock_Top_MapWarps, NavelRock_Top_MapCoordEvents, NavelRock_Top_MapBGEvents

