@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TerraCave_End/map.json
@

	.align 2

TerraCave_End_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GROUDON_FRONT, 17, 22, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_TERRA_CAVE_GROUDON

TerraCave_End_MapWarps:
	warp_def 5, 4, 3, 1, MAP_TERRA_CAVE_ENTRANCE

TerraCave_End_MapCoordEvents:
	coord_event 17, 26, 3, VAR_TEMP_1, 1, TerraCave_End_EventScript_Groudon

TerraCave_End_MapEvents::
	map_events TerraCave_End_ObjectEvents, TerraCave_End_MapWarps, TerraCave_End_MapCoordEvents, NULL

