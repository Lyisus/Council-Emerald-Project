#ifndef GUARD_CONSTANTS_TRADE_H
#define GUARD_CONSTANTS_TRADE_H

#define TRADE_PLAYER  0
#define TRADE_PARTNER 1

// In-game Trade IDs
#define INGAME_TRADE_SPHEAL          0  // Oldale Spheal
#define INGAME_TRADE_G_DARUMAKA      1  // Petalburg Galarian Darumaka
#define INGAME_TRADE_DELTA_BULBASAUR 2  // Rustboro Delta Bulbasaur
#define INGAME_TRADE_A_VULPIX        3  // Dewford Alolan Vulpix
#define INGAME_TRADE_ESPURR          4  // Slateport Espurr
#define INGAME_TRADE_H_SNEASEL       5  // Mauville Hisuian Sneasel
#define INGAME_TRADE_DELTA_FROAKIE   6  // Verdanturf Delta Froakie
#define INGAME_TRADE_TRUBBISH        7  // Route 113 Trubbish
#define INGAME_TRADE_GOTHITA         8  // Lavaridge Gothita
#define INGAME_TRADE_FEEBAS          9  // Fortree Feebas
#define INGAME_TRADE_G_SLOWPOKE      10 // Lilycove Galarian Slowpoke
#define INGAME_TRADE_LUCARIO         11 // Mossdeep Lucario
#define INGAME_TRADE_SINISTCHA       12 // Pacifilog Poltchageist
#define INGAME_TRADE_SALAZZLE        13 // Sootopolis
#define INGAME_TRADE_MEOWTH          14 // Battle Frontier

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
