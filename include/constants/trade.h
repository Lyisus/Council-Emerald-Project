#ifndef GUARD_CONSTANTS_TRADE_H
#define GUARD_CONSTANTS_TRADE_H

#define TRADE_PLAYER  0
#define TRADE_PARTNER 1

// In-game Trade IDs
enum InGameTradeID
{
    INGAME_TRADE_SPHEAL,         // Oldale Spheal
    INGAME_TRADE_G_DARUMAKA,     // Petalburg Galarian Darumaka
    INGAME_TRADE_DELTA_BULBASAUR,// Rustboro Delta Bulbasaur
    INGAME_TRADE_A_VULPIX,       // Dewford Alolan Vulpix
    INGAME_TRADE_ESPURR,         // Slateport Espurr
    INGAME_TRADE_H_SNEASEL,      // Mauville Hisuian Sneasel
    INGAME_TRADE_DELTA_FROAKIE,  // Verdanturf Delta Froakie
    INGAME_TRADE_TRUBBISH,       // Route 113 Trubbish
    INGAME_TRADE_GOTHITA,        // Lavaridge Gothita
    INGAME_TRADE_FEEBAS,         // Fortree Feebas
    INGAME_TRADE_G_SLOWPOKE,     // Lilycove Galarian Slowpoke
    INGAME_TRADE_LUCARIO,        // Mossdeep Lucario
    INGAME_TRADE_SINISTCHA,      // Pacifilog Poltchageist
    INGAME_TRADE_SALAZZLE,       // Sootopolis
    INGAME_TRADE_MEOWTH,         // Battle Frontier
};

// Return values for CanTradeSelectedMon and CanSpinTradeMon
#define CAN_TRADE_MON              0
#define CANT_TRADE_LAST_MON        1
#define CANT_TRADE_NATIONAL        2
#define CANT_TRADE_EGG_YET         3
#define CANT_TRADE_INVALID_MON     4
#define CANT_TRADE_PARTNER_EGG_YET 5

// Return values for CheckValidityOfTradeMons
#define PLAYER_MON_INVALID   0
#define BOTH_MONS_VALID      1
#define PARTNER_MON_INVALID  2

// Return values for GetGameProgressForLinkTrade
#define TRADE_BOTH_PLAYERS_READY      0
#define TRADE_PLAYER_NOT_READY        1
#define TRADE_PARTNER_NOT_READY       2

// Message indexes for sUnionRoomTradeMessages
#define UR_TRADE_MSG_NONE                         0
#define UR_TRADE_MSG_NOT_MON_PARTNER_WANTS        1
#define UR_TRADE_MSG_NOT_EGG                      2
#define UR_TRADE_MSG_MON_CANT_BE_TRADED_NOW       3
#define UR_TRADE_MSG_MON_CANT_BE_TRADED           4
#define UR_TRADE_MSG_PARTNERS_MON_CANT_BE_TRADED  5
#define UR_TRADE_MSG_EGG_CANT_BE_TRADED           6
#define UR_TRADE_MSG_PARTNER_CANT_ACCEPT_MON      7
#define UR_TRADE_MSG_CANT_TRADE_WITH_PARTNER_1    8
#define UR_TRADE_MSG_CANT_TRADE_WITH_PARTNER_2    9

// Return values for CanRegisterMonForTradingBoard
#define CAN_REGISTER_MON      0
#define CANT_REGISTER_MON_NOW 1
#define CANT_REGISTER_MON     2
#define CANT_REGISTER_EGG     3


#endif //GUARD_CONSTANTS_TRADE_H
