@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TrainerHill_Elevator/map.json
@

	.align 2

TrainerHill_Elevator_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 0, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TrainerHill_Elevator_EventScript_Attendant, 0

TrainerHill_Elevator_MapWarps:
	warp_def 1, 6, 3, 1, MAP_TRAINER_HILL_ROOF
	warp_def 2, 6, 3, 1, MAP_TRAINER_HILL_ROOF

TrainerHill_Elevator_MapEvents::
	map_events TrainerHill_Elevator_ObjectEvents, TrainerHill_Elevator_MapWarps, NULL, NULL

