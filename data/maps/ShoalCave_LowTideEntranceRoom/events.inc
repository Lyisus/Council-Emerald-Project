@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ShoalCave_LowTideEntranceRoom/map.json
@

	.align 2

ShoalCave_LowTideEntranceRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 30, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_BIG_PEARL, Common_EventScript_FindItem, FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL
	object_event 2, OBJ_EVENT_GFX_EXPERT_M, 18, 15, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert, 0

ShoalCave_LowTideEntranceRoom_MapWarps:
	warp_def 20, 30, 3, 0, MAP_ROUTE125
	warp_def 19, 5, 3, 0, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	warp_def 6, 2, 3, 6, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	warp_def 27, 2, 3, 7, MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM

ShoalCave_LowTideEntranceRoom_MapEvents::
	map_events ShoalCave_LowTideEntranceRoom_ObjectEvents, ShoalCave_LowTideEntranceRoom_MapWarps, NULL, NULL

