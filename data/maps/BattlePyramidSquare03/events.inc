@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattlePyramidSquare03/map.json
@

	.align 2

BattlePyramidSquare03_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY_1, 2, 1, 4, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, BattlePyramid_TrainerBattle, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_BOY, 6, 1, 4, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, BattlePyramid_TrainerBattle, 0
	object_event 3, OBJ_EVENT_GFX_FISHERMAN, 6, 4, 4, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, BattlePyramid_TrainerBattle, 0
	object_event 4, OBJ_EVENT_GFX_MAN_3, 3, 4, 4, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, BattlePyramid_TrainerBattle, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 4, 2, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 0, 3, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 2, 7, 4, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, BattlePyramid_FindItemBall, 0

BattlePyramidSquare03_MapEvents::
	map_events BattlePyramidSquare03_ObjectEvents, NULL, NULL, NULL

