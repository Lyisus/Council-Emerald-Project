@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/EverGrandeCity/map.json
@

	.align 2

EverGrandeCity_MapWarps:
	warp_def 18, 5, 0, 0, MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	warp_def 27, 48, 0, 0, MAP_EVER_GRANDE_CITY_POKEMON_CENTER_1F
	warp_def 18, 41, 0, 0, MAP_VICTORY_ROAD_1F
	warp_def 18, 27, 0, 1, MAP_VICTORY_ROAD_1F

EverGrandeCity_MapCoordEvents:
	coord_event 17, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 16, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 18, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 19, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 20, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 21, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 22, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 23, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 24, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 25, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande
	coord_event 26, 58, 1, VAR_TEMP_1, 0, EverGrandeCity_EventScript_SetVisitedEverGrande

EverGrandeCity_MapBGEvents:
	bg_sign_event 19, 43, 5, BG_EVENT_PLAYER_FACING_ANY, EverGrandeCity_EventScript_VictoryRoadSign
	bg_sign_event 29, 48, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 18, 52, 5, BG_EVENT_PLAYER_FACING_ANY, EverGrandeCity_EventScript_CitySign
	bg_sign_event 23, 15, 0, BG_EVENT_PLAYER_FACING_ANY, EverGrandeCity_EventScript_PokemonLeagueSign
	bg_sign_event 28, 48, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign

EverGrandeCity_MapEvents::
	map_events NULL, EverGrandeCity_MapWarps, EverGrandeCity_MapCoordEvents, EverGrandeCity_MapBGEvents

