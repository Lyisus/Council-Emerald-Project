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
            .nickname = COMPOUND_STRING("Mare"),
#line 18
            .species = SPECIES_INDEEDEE_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .heldItem = ITEM_PSYCHIC_SEED,
#line 22
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
#line 23
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .ability = ABILITY_PSYCHIC_SURGE,
#line 20
            .lvl = 61,
            .nature = NATURE_HARDY,
#line 21
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 24
                MOVE_PROTECT,
                MOVE_EXPANDING_FORCE,
                MOVE_TRICK_ROOM,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 29
            .nickname = COMPOUND_STRING("Orlan"),
#line 29
            .species = SPECIES_EMBOAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .heldItem = ITEM_SITRUS_BERRY,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
#line 33
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .ability = ABILITY_RECKLESS,
#line 31
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 34
                MOVE_PROTECT,
                MOVE_FLARE_BLITZ,
                MOVE_WILD_CHARGE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 39
            .nickname = COMPOUND_STRING("Haku"),
#line 39
            .species = SPECIES_LOPUNNY,
#line 39
            .gender = TRAINER_MON_MALE,
#line 39
            .heldItem = ITEM_LOPUNNITE,
#line 43
            .ev = TRAINER_PARTY_EVS(0, 25, 0, 248, 0, 0),
#line 44
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .ability = ABILITY_LIMBER,
#line 41
            .lvl = 65,
            .nature = NATURE_HARDY,
#line 42
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 45
                MOVE_PROTECT,
                MOVE_CLOSE_COMBAT,
                MOVE_RETURN,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
