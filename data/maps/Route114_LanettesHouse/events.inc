@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route114_LanettesHouse/map.json
@

	.align 2

Route114_LanettesHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 5, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Route114_LanettesHouse_EventScript_Lanette, FLAG_HIDE_LANETTES_HOUSE_LANETTE

Route114_LanettesHouse_MapWarps:
	warp_def 5, 7, 0, 2, MAP_ROUTE114
	warp_def 6, 7, 0, 2, MAP_ROUTE114

Route114_LanettesHouse_MapBGEvents:
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_Notebook
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_PC
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_PC

Route114_LanettesHouse_MapEvents::
	map_events Route114_LanettesHouse_ObjectEvents, Route114_LanettesHouse_MapWarps, NULL, Route114_LanettesHouse_MapBGEvents

