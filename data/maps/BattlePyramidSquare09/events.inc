@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattlePyramidSquare09/map.json
@

	.align 2

BattlePyramidSquare09_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LITTLE_GIRL, 3, 0, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 5, BattlePyramid_TrainerBattle, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 6, 4, 4, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, BattlePyramid_TrainerBattle, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_GIRL, 6, 0, 4, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, BattlePyramid_TrainerBattle, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_GIRL, 3, 5, 4, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, BattlePyramid_TrainerBattle, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 7, 0, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 1, 0, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 1, 6, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0

BattlePyramidSquare09_MapEvents::
	map_events BattlePyramidSquare09_ObjectEvents, NULL, NULL, NULL

