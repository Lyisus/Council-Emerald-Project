Route115_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
	.byte 0

Route115_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
	end

Route115_OnTransition:
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
	end

Route115_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route115_EventScript_Woman::
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
	end

Route115_EventScript_RouteSignRustboro::
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
	end

Route115_EventScript_MeteorFallsSign::
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
	end

Route115_EventScript_Timothy::
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
	release
	end

Route115_EventScript_RegisterTimothy::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TIMOTHY_1
	release
	end

Route115_EventScript_RematchTimothy::
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Koichi::
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Nob::
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchNob
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
	release
	end

Route115_EventScript_RegisterNob::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NOB_1
	release
	end

Route115_EventScript_RematchNob::
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Cyndy::
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
	release
	end

Route115_EventScript_RegisterCyndy::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CYNDY_1
	release
	end

Route115_EventScript_RematchCyndy::
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Hector::
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Kyra::
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Jaiden::
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Alix::
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Helene::
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
	end

Route115_EventScript_Marlene::
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
	end

Route115_Text_NeverKnowWhenCavePokemonWillAppear:
	.string "Exploring a cave isn't like walking\n"
	.string "on a road.\p"
	.string "You never know when wild POKéMON will\n"
	.string "appear. It's full of suspense.$"

Route115_Text_RouteSignRustboro:
	.string "ROUTE 115…\n"
	.string "{DOWN_ARROW} RUSTBORO CITY$"

Route115_Text_MeteorFallsSign:
	.string "METEOR FALLS\n"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_EventScript_FromundaJail::
	lock
	faceplayer
	msgbox Route115_Text_FromundaAreYouSure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route115_EventScript_FromundaLastCheck
	goto_if_eq VAR_RESULT, NO, Route115_EventScript_FromundaDecline
	end

Route115_Text_FromundaAreYouSure:
	.string "Are you sure you want to talk to me?\n"
	.string "You're probably going to regret it.$"

Route115_EventScript_FromundaLastCheck::
	msgbox Route115_Text_FromundaFinalWarning, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route115_EventScript_FromundaJailCount
	goto_if_eq VAR_RESULT, NO, Route115_EventScript_FromundaDecline
	end

Route115_Text_FromundaFinalWarning:
	.string "Are you certain?\n"
	.string "This is your final warning.$"


Route115_EventScript_FromundaJailCount::
	msgbox Route115_Text_FromundaJailCount, MSGBOX_NPC


Route115_Text_FromundaJailCount:
	.string "You messed up.\p"
	.string "Now I'm going to count backwards from\n"
	.string "100 and you have to watch me do it.\p"
	.string "100…\p99…\p98…\p97…\p96…\p95…\p94…\p93…\p92…\p91…\p"
	.string "90…\p89…\p88…\p87…\p86…\p85…\p84…\p83…\p82…\p81…\p"
	.string "80…\p79…\p78…\p77…\p76…\p75…\p74…\p73…\p72…\p71…\p"
	.string "70…\p69…\nNice…\p68…\pSIX SEVEN!!!\p66…\p65…\p64…\p63…\p62…\p61…\p"
	.string "60…\p59…\p58…\p57…\p56…\p55…\p54…\p53…\p52…\p51…\p"
	.string "50…\p49…\p48…\p47…\p46…\p45…\pCuatro Cuatro…\p43…\p42…\p41…\p"
	.string "40…\p39…\p38…\p37…\p36…\p35…\p34…\p33…\p32…\p31…\p"
	.string "30…\p29…\p28…\p27…\p26…\p25…\p24…\p23…\p22…\p21…\p"
	.string "20…\p19…\p18…\p17…\p16…\p15…\p14…\p13…\p12…\p11…\p"
	.string "10…\p9…\p8…\p7…\p6…\p5…\p4…\p"
	.string "3.14159265358979323846264338327950288\n4197169399375105820974944592307816406\l2862089986280348253421170679821480865\l1328230664709384460955058223172535940\l8128481117450284102701938521105559644\l6229489549303819644288109756659334461\l2847564823378678316527120190914564856\l6923460348610454326648213393607260249\l1412737245870066063155881748815209209\l6282925409171536436789259036001133053…\p"
	.string "3…\p2…\p1…\p"
	.string "0.75…\p0.50…\p0.25…\p0.13…\p0.07…\p0.01…\p0.008…\p0.0001…\p0.00002…\p0…\p"
	.string "Alright.\nYou're free to go now.$"
	
Route115_EventScript_FromundaDecline::
	msgbox Route115_Text_GoodForYou, MSGBOX_NPC
	end

Route115_Text_GoodForYou:
	.string "Good.\nNow leave me be.$"

