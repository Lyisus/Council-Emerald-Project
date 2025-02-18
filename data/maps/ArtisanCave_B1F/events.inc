@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ArtisanCave_B1F/map.json
@

	.align 2

ArtisanCave_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 32, 38, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_HP_UP, Common_EventScript_FindItem, FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP

ArtisanCave_B1F_MapWarps:
	warp_def 8, 48, 0, 10, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 38, 5, 0, 1, MAP_ARTISAN_CAVE_1F

ArtisanCave_B1F_MapBGEvents:
	bg_hidden_item_event 32, 29, 0, ITEM_ZINC, FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC
	bg_hidden_item_event 27, 8, 0, ITEM_CALCIUM, FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM
	bg_hidden_item_event 7, 5, 0, ITEM_PROTEIN, FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN
	bg_hidden_item_event 19, 43, 0, ITEM_IRON, FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON

ArtisanCave_B1F_MapEvents::
	map_events ArtisanCave_B1F_ObjectEvents, ArtisanCave_B1F_MapWarps, NULL, ArtisanCave_B1F_MapBGEvents

