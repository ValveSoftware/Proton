#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_100/steam_api.h"
#include "cppISteamUser_SteamUser009.h"
#ifdef __cplusplus
extern "C" {
#endif
HSteamUser cppISteamUser_SteamUser009_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

bool cppISteamUser_SteamUser009_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

CSteamID cppISteamUser_SteamUser009_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

int cppISteamUser_SteamUser009_InitiateGameConnection(void *linux_side, void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    CGameID lin_gameID;
    win_to_lin_struct_CGameID_100(&gameID, &lin_gameID);
    int retval = ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, lin_gameID, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
    lin_to_win_struct_CGameID_100(&lin_gameID, &gameID);
    return retval;
}

void cppISteamUser_SteamUser009_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser009_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    CGameID lin_gameID;
    win_to_lin_struct_CGameID_100(&gameID, &lin_gameID);
    ((ISteamUser*)linux_side)->TrackAppUsageEvent(lin_gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
    lin_to_win_struct_CGameID_100(&lin_gameID, &gameID);
}

void cppISteamUser_SteamUser009_RefreshSteam2Login(void *linux_side)
{
    ((ISteamUser*)linux_side)->RefreshSteam2Login();
}

#ifdef __cplusplus
}
#endif
