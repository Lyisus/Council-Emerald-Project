@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ArtisanCave_1F/map.json
@

	.align 2

ArtisanCave_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 14, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_CARBOS, Common_EventScript_FindItem, FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS

ArtisanCave_1F_MapWarps:
	warp_def 10, 17, 0, 13, MAP_BATTLE_FRONTIER_OUTSIDE_EAST
	warp_def 6, 5, 0, 1, MAP_ARTISAN_CAVE_B1F

ArtisanCave_1F_MapEvents::
	map_events ArtisanCave_1F_ObjectEvents, ArtisanCave_1F_MapWarps, NULL, NULL

