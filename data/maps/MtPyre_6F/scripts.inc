MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_Text_ValerieIntro:
	.string "When I'm here…\n"
	.string "A curious power flows into me…$"

MtPyre_6F_Text_ValerieDefeat:
	.string "The power is ebbing away…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Perhaps the power is from the spirits\n"
	.string "of POKéMON in fitful sleep here…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your POKéNAV… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Behind you…\n"
	.string "What is it…$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Something faded away…$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "The POKéMON at rest here…\n"
	.string "Sometimes, they play…$"

MtPyre_6F_Text_CedricIntro:
	.string "Have you lost your bearings?\n"
	.string "Have no fear for I am here!$"

MtPyre_6F_Text_CedricDefeat:
	.string "Weren't you lost?$"

MtPyre_6F_Text_CedricPostBattle:
	.string "I had this feeling that a lost TRAINER\n"
	.string "would be panicked and easy to beat.\p"
	.string "It's dirty and I won't try it again…$"

MtPyre_6F_EventScript_FromundaSpiritomb::
	lock
	faceplayer
	msgbox MtPyre_6F_Text_YouSureImStrong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MtPyre_6F_EventScript_FromundaBattle
	goto_if_eq VAR_RESULT, NO, MtPyre_6F_EventScript_FromundaDecline
	end

MtPyre_6F_Text_YouSureImStrong:
	.string "Oh, how did you find me?\p"
	.string "Is it because you've heard of me?\n"
	.string "Is it because you want a battle?\p"
	.string "I'm willing to battle.\n"
	.string "I must warn you, I am very strong.$"

MtPyre_6F_EventScript_FromundaBattle::
	trainerbattle_single TRAINER_FROMUNDA_SPIRITOMB, MtPyre_6F_Text_FromundaIntro, MtPyre_6F_Text_FromundaDefeat
	msgbox MtPyre_6F_Text_FromundaPostBattle, MSGBOX_AUTOCLOSE	
	end

MtPyre_6F_Text_FromundaIntro:
	.string "Do not say I didn't warn you.$"

MtPyre_6F_Text_FromundaDefeat:
	.string "I only lost because I didn't win…$"

MtPyre_6F_Text_FromundaPostBattle:
	.string "I never played X & Y…$"


MtPyre_6F_EventScript_FromundaDecline::
	msgbox MtPyre_6F_Text_YoureSmart, MSGBOX_NPC
	end

MtPyre_6F_Text_YoureSmart:
	.string "Good.\nYou're one of the smart ones.$"

