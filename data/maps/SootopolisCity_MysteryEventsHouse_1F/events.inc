@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SootopolisCity_MysteryEventsHouse_1F/map.json
@

	.align 2

SootopolisCity_MysteryEventsHouse_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN, 6, 4, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan, 0

SootopolisCity_MysteryEventsHouse_1F_MapWarps:
	warp_def 3, 7, 0, 12, MAP_SOOTOPOLIS_CITY
	warp_def 4, 7, 0, 12, MAP_SOOTOPOLIS_CITY
	warp_def 3, 1, 3, 0, MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F

SootopolisCity_MysteryEventsHouse_1F_MapEvents::
	map_events SootopolisCity_MysteryEventsHouse_1F_ObjectEvents, SootopolisCity_MysteryEventsHouse_1F_MapWarps, NULL, NULL

