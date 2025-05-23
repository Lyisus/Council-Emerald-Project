@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafloorCavern_Room2/map.json
@

	.align 2

SeafloorCavern_Room2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_13
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_11
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 4, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_15
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 7, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_16
	object_event 6, OBJ_EVENT_GFX_BREAKABLE_ROCK, 8, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_18
	object_event 7, OBJ_EVENT_GFX_BREAKABLE_ROCK, 9, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_19
	object_event 8, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 4, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_17

SeafloorCavern_Room2_MapWarps:
	warp_def 10, 7, 3, 2, MAP_SEAFLOOR_CAVERN_ROOM1
	warp_def 4, 10, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM4
	warp_def 6, 1, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM6
	warp_def 11, 1, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM7

SeafloorCavern_Room2_MapEvents::
	map_events SeafloorCavern_Room2_ObjectEvents, SeafloorCavern_Room2_MapWarps, NULL, NULL

