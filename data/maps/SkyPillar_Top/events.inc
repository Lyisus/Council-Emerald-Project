@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SkyPillar_Top/map.json
@

	.align 2

SkyPillar_Top_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RAYQUAZA, 14, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
	object_event 2, OBJ_EVENT_GFX_RAYQUAZA_STILL, 14, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SkyPillar_Top_EventScript_Rayquaza, FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL

SkyPillar_Top_MapWarps:
	warp_def 16, 14, 3, 1, MAP_SKY_PILLAR_5F

SkyPillar_Top_MapCoordEvents:
	coord_event 14, 9, 3, VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 0, SkyPillar_Top_EventScript_AwakenRayquaza

SkyPillar_Top_MapEvents::
	map_events SkyPillar_Top_ObjectEvents, SkyPillar_Top_MapWarps, SkyPillar_Top_MapCoordEvents, NULL

