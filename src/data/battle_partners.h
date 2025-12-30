//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .heldItem = ITEM_FOCUS_SASH,
#line 21
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 23
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 19
            .ability = ABILITY_MAGIC_GUARD,
#line 20
            .lvl = 63,
#line 22
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 24
                MOVE_PSYCHIC,
                MOVE_PSYSHOCK,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 29
            .species = SPECIES_TYRANITAR,
#line 29
            .gender = TRAINER_MON_MALE,
#line 29
            .heldItem = ITEM_TYRANITARITE,
#line 33
            .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
#line 35
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .ability = ABILITY_SAND_STREAM,
#line 31
            .lvl = 66,
#line 34
            .nature = NATURE_ADAMANT,
#line 32
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 35
                MOVE_KNOCK_OFF,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 40
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 40
            .heldItem = ITEM_LIFE_ORB,
#line 43
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 45
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 41
            .ability = ABILITY_SAND_RUSH,
#line 42
            .lvl = 64,
#line 44
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 45
                MOVE_IRON_HEAD,
                MOVE_HIGH_HORSEPOWER,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
