#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamGameSearch_SteamMatchGameSearch001.h"
EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams(void *linux_side, const char * pchKeyToFind, const char * pchValuesToFind)
{
    return ((ISteamGameSearch*)linux_side)->AddGameSearchParams((const char *)pchKeyToFind, (const char *)pchValuesToFind);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby(void *linux_side, CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax)
{
    return ((ISteamGameSearch*)linux_side)->SearchForGameWithLobby((CSteamID)steamIDLobby, (int)nPlayerMin, (int)nPlayerMax);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo(void *linux_side, int nPlayerMin, int nPlayerMax)
{
    return ((ISteamGameSearch*)linux_side)->SearchForGameSolo((int)nPlayerMin, (int)nPlayerMax);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame(void *linux_side)
{
    return ((ISteamGameSearch*)linux_side)->AcceptGame();
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame(void *linux_side)
{
    return ((ISteamGameSearch*)linux_side)->DeclineGame();
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails(void *linux_side, CSteamID steamIDHost, char * pchConnectionDetails, int cubConnectionDetails)
{
    return ((ISteamGameSearch*)linux_side)->RetrieveConnectionDetails((CSteamID)steamIDHost, (char *)pchConnectionDetails, (int)cubConnectionDetails);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch(void *linux_side)
{
    return ((ISteamGameSearch*)linux_side)->EndGameSearch();
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams(void *linux_side, const char * pchKey, const char * pchValue)
{
    return ((ISteamGameSearch*)linux_side)->SetGameHostParams((const char *)pchKey, (const char *)pchValue);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails(void *linux_side, const char * pchConnectionDetails, int cubConnectionDetails)
{
    return ((ISteamGameSearch*)linux_side)->SetConnectionDetails((const char *)pchConnectionDetails, (int)cubConnectionDetails);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame(void *linux_side, int nPlayerMin, int nPlayerMax, int nMaxTeamSize)
{
    return ((ISteamGameSearch*)linux_side)->RequestPlayersForGame((int)nPlayerMin, (int)nPlayerMax, (int)nMaxTeamSize);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart(void *linux_side, uint64 ullUniqueGameID)
{
    return ((ISteamGameSearch*)linux_side)->HostConfirmGameStart((uint64)ullUniqueGameID);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame(void *linux_side)
{
    return ((ISteamGameSearch*)linux_side)->CancelRequestPlayersForGame();
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult(void *linux_side, uint64 ullUniqueGameID, CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult)
{
    return ((ISteamGameSearch*)linux_side)->SubmitPlayerResult((uint64)ullUniqueGameID, (CSteamID)steamIDPlayer, (EPlayerResult_t)EPlayerResult);
}

EGameSearchErrorCode_t cppISteamGameSearch_SteamMatchGameSearch001_EndGame(void *linux_side, uint64 ullUniqueGameID)
{
    return ((ISteamGameSearch*)linux_side)->EndGame((uint64)ullUniqueGameID);
}

#ifdef __cplusplus
}
#endif
