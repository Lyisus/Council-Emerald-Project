@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_Southeast/map.json
@

	.align 2

SafariZone_Southeast_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RICH_BOY, 7, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Southeast_EventScript_RichBoy, 0
	object_event 2, OBJ_EVENT_GFX_FAT_MAN, 20, 30, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Southeast_EventScript_FatMan, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_GIRL, 8, 26, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Southeast_EventScript_LittleGirl, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 31, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, ITEM_BIG_PEARL, Common_EventScript_FindItem, FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL
	object_event 5, OBJ_EVENT_GFX_CAMPER, 12, 16, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Southeast_EventScript_ExpansionZoneAttendant, FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION

SafariZone_Southeast_MapBGEvents:
	bg_hidden_item_event 19, 36, 3, ITEM_PP_UP, FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP
	bg_hidden_item_event 32, 33, 0, ITEM_FULL_RESTORE, FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE

SafariZone_Southeast_MapEvents::
	map_events SafariZone_Southeast_ObjectEvents, NULL, NULL, SafariZone_Southeast_MapBGEvents

