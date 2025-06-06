@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafloorCavern_Room3/map.json
@

	.align 2

SeafloorCavern_Room3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_12
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 11, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_14
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_15
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_16
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 11, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_17
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_18
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_TEMP_19
	object_event 8, OBJ_EVENT_GFX_AQUA_MEMBER_F, 9, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 6, SeafloorCavern_Room3_EventScript_Shelly, FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	object_event 9, OBJ_EVENT_GFX_AQUA_MEMBER_M, 5, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, SeafloorCavern_Room3_EventScript_Grunt5, FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS

SeafloorCavern_Room3_MapWarps:
	warp_def 8, 1, 3, 1, MAP_SEAFLOOR_CAVERN_ROOM8
	warp_def 9, 13, 3, 1, MAP_SEAFLOOR_CAVERN_ROOM7
	warp_def 4, 15, 3, 1, MAP_SEAFLOOR_CAVERN_ROOM6

SeafloorCavern_Room3_MapEvents::
	map_events SeafloorCavern_Room3_ObjectEvents, SeafloorCavern_Room3_MapWarps, NULL, NULL

