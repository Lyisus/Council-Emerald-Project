@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Underwater_SeafloorCavern/map.json
@

	.align 2

Underwater_SeafloorCavern_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, 5, 4, 3, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, Underwater_SeafloorCavern_EventScript_CheckStolenSub, FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
	object_event 2, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, 6, 4, 3, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, Underwater_SeafloorCavern_EventScript_CheckStolenSub, FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
	object_event 3, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, 7, 4, 3, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, Underwater_SeafloorCavern_EventScript_CheckStolenSub, FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
	object_event 4, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL, 8, 4, 3, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, Underwater_SeafloorCavern_EventScript_CheckStolenSub, FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE

Underwater_SeafloorCavern_MapWarps:
	warp_def 6, 7, 0, 0, MAP_UNDERWATER_ROUTE128

Underwater_SeafloorCavern_MapEvents::
	map_events Underwater_SeafloorCavern_ObjectEvents, Underwater_SeafloorCavern_MapWarps, NULL, NULL

