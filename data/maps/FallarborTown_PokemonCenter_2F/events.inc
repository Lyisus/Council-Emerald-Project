@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FallarborTown_PokemonCenter_2F/map.json
@

	.align 2

FallarborTown_PokemonCenter_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 6, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Common_EventScript_UnionRoomAttendant, 0
	object_event 2, OBJ_EVENT_GFX_TEALA, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Common_EventScript_WirelessClubAttendant, 0
	object_event 3, OBJ_EVENT_GFX_TEALA, 10, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Common_EventScript_DirectCornerAttendant, 0
	object_event 4, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 1, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CableClub_EventScript_MysteryGiftMan, FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN

FallarborTown_PokemonCenter_2F_MapWarps:
	warp_def 1, 6, 4, 2, MAP_FALLARBOR_TOWN_POKEMON_CENTER_1F
	warp_def 5, 1, 3, 0, MAP_UNION_ROOM
	warp_def 9, 1, 3, 0, MAP_TRADE_CENTER

FallarborTown_PokemonCenter_2F_MapEvents::
	map_events FallarborTown_PokemonCenter_2F_ObjectEvents, FallarborTown_PokemonCenter_2F_MapWarps, NULL, NULL

