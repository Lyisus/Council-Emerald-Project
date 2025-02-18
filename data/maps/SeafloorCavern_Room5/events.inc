@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafloorCavern_Room5/map.json
@

	.align 2

SeafloorCavern_Room5_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 3, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_11
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 4, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 11, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_13
	object_event 4, OBJ_EVENT_GFX_BREAKABLE_ROCK, 3, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15
	object_event 5, OBJ_EVENT_GFX_BREAKABLE_ROCK, 13, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_16
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_14

SeafloorCavern_Room5_MapWarps:
	warp_def 4, 1, 3, 1, MAP_SEAFLOOR_CAVERN_ROOM1
	warp_def 15, 12, 3, 1, MAP_SEAFLOOR_CAVERN_ROOM4
	warp_def 7, 17, 3, 2, MAP_SEAFLOOR_CAVERN_ROOM4

SeafloorCavern_Room5_MapEvents::
	map_events SeafloorCavern_Room5_ObjectEvents, SeafloorCavern_Room5_MapWarps, NULL, NULL

