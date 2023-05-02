#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099v/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099v
#include "struct_converters.h"
#include "cppISteamUser_SteamUser005.h"
HSteamUser cppISteamUser_SteamUser005_GetHSteamUser(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetHSteamUser();
}

void cppISteamUser_SteamUser005_LogOn(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->LogOn((CSteamID)steamID);
}

void cppISteamUser_SteamUser005_LogOff(void *linux_side)
{
    ((ISteamUser*)linux_side)->LogOff();
}

bool cppISteamUser_SteamUser005_BLoggedOn(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BLoggedOn();
}

ELogonState cppISteamUser_SteamUser005_GetLogonState(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetLogonState();
}

bool cppISteamUser_SteamUser005_BConnected(void *linux_side)
{
    return ((ISteamUser*)linux_side)->BConnected();
}

CSteamID cppISteamUser_SteamUser005_GetSteamID(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetSteamID();
}

bool cppISteamUser_SteamUser005_IsVACBanned(void *linux_side, int nGameID)
{
    return ((ISteamUser*)linux_side)->IsVACBanned((int)nGameID);
}

bool cppISteamUser_SteamUser005_RequireShowVACBannedMessage(void *linux_side, int nAppID)
{
    return ((ISteamUser*)linux_side)->RequireShowVACBannedMessage((int)nAppID);
}

void cppISteamUser_SteamUser005_AcknowledgeVACBanning(void *linux_side, int nAppID)
{
    ((ISteamUser*)linux_side)->AcknowledgeVACBanning((int)nAppID);
}

void cppISteamUser_SteamUser005_SetSteam2Ticket(void *linux_side, uint8 * pubTicket, int cubTicket)
{
    ((ISteamUser*)linux_side)->SetSteam2Ticket((uint8 *)pubTicket, (int)cubTicket);
}

void cppISteamUser_SteamUser005_AddServerNetAddress(void *linux_side, uint32 unIP, uint16 unPort)
{
    ((ISteamUser*)linux_side)->AddServerNetAddress((uint32)unIP, (uint16)unPort);
}

bool cppISteamUser_SteamUser005_SetEmail(void *linux_side, const char * pchEmail)
{
    return ((ISteamUser*)linux_side)->SetEmail((const char *)pchEmail);
}

bool cppISteamUser_SteamUser005_SetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, const char * pchValue)
{
    return ((ISteamUser*)linux_side)->SetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamUser_SteamUser005_GetRegistryString(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, char * pchValue, int cbValue)
{
    return ((ISteamUser*)linux_side)->GetRegistryString((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (char *)pchValue, (int)cbValue);
}

bool cppISteamUser_SteamUser005_SetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, int iValue)
{
    return ((ISteamUser*)linux_side)->SetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int)iValue);
}

bool cppISteamUser_SteamUser005_GetRegistryInt(void *linux_side, EConfigSubTree eRegistrySubTree, const char * pchKey, int * piValue)
{
    return ((ISteamUser*)linux_side)->GetRegistryInt((EConfigSubTree)eRegistrySubTree, (const char *)pchKey, (int *)piValue);
}

int cppISteamUser_SteamUser005_InitiateGameConnection(void *linux_side, void * pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    return ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pBlob, (int)cbMaxBlob, (CSteamID)steamID, (CGameID)gameID, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
}

void cppISteamUser_SteamUser005_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(void *linux_side)
{
    ((ISteamUser*)linux_side)->SetSelfAsPrimaryChatDestination();
}

bool cppISteamUser_SteamUser005_IsPrimaryChatDestination(void *linux_side)
{
    return ((ISteamUser*)linux_side)->IsPrimaryChatDestination();
}

void cppISteamUser_SteamUser005_RequestLegacyCDKey(void *linux_side, uint32 nAppID)
{
    ((ISteamUser*)linux_side)->RequestLegacyCDKey((uint32)nAppID);
}

bool cppISteamUser_SteamUser005_SendGuestPassByEmail(void *linux_side, const char * pchEmailAccount, GID_t gidGuestPassID, bool bResending)
{
    return ((ISteamUser*)linux_side)->SendGuestPassByEmail((const char *)pchEmailAccount, (GID_t)gidGuestPassID, (bool)bResending);
}

bool cppISteamUser_SteamUser005_SendGuestPassByAccountID(void *linux_side, uint32 uAccountID, GID_t gidGuestPassID, bool bResending)
{
    return ((ISteamUser*)linux_side)->SendGuestPassByAccountID((uint32)uAccountID, (GID_t)gidGuestPassID, (bool)bResending);
}

bool cppISteamUser_SteamUser005_AckGuestPass(void *linux_side, const char * pchGuestPassCode)
{
    return ((ISteamUser*)linux_side)->AckGuestPass((const char *)pchGuestPassCode);
}

bool cppISteamUser_SteamUser005_RedeemGuestPass(void *linux_side, const char * pchGuestPassCode)
{
    return ((ISteamUser*)linux_side)->RedeemGuestPass((const char *)pchGuestPassCode);
}

uint32 cppISteamUser_SteamUser005_GetGuestPassToGiveCount(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToGiveCount();
}

uint32 cppISteamUser_SteamUser005_GetGuestPassToRedeemCount(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToRedeemCount();
}

RTime32 cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime(void *linux_side)
{
    return ((ISteamUser*)linux_side)->GetGuestPassLastUpdateTime();
}

bool cppISteamUser_SteamUser005_GetGuestPassToGiveInfo(void *linux_side, uint32 nPassIndex, GID_t * pgidGuestPassID, PackageId_t * pnPackageID, RTime32 * pRTime32Created, RTime32 * pRTime32Expiration, RTime32 * pRTime32Sent, RTime32 * pRTime32Redeemed, char * pchRecipientAddress, int cRecipientAddressSize)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToGiveInfo((uint32)nPassIndex, (GID_t *)pgidGuestPassID, (PackageId_t *)pnPackageID, (RTime32 *)pRTime32Created, (RTime32 *)pRTime32Expiration, (RTime32 *)pRTime32Sent, (RTime32 *)pRTime32Redeemed, (char *)pchRecipientAddress, (int)cRecipientAddressSize);
}

bool cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo(void *linux_side, uint32 nPassIndex, GID_t * pgidGuestPassID, PackageId_t * pnPackageID, RTime32 * pRTime32Created, RTime32 * pRTime32Expiration, RTime32 * pRTime32Sent, RTime32 * pRTime32Redeemed)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToRedeemInfo((uint32)nPassIndex, (GID_t *)pgidGuestPassID, (PackageId_t *)pnPackageID, (RTime32 *)pRTime32Created, (RTime32 *)pRTime32Expiration, (RTime32 *)pRTime32Sent, (RTime32 *)pRTime32Redeemed);
}

bool cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(void *linux_side, uint32 nPassIndex, char * pchSenderAddress, int cSenderAddressSize)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToRedeemSenderAddress((uint32)nPassIndex, (char *)pchSenderAddress, (int)cSenderAddressSize);
}

bool cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(void *linux_side, uint32 nPassIndex, char * pchSenderName, int cSenderNameSize)
{
    return ((ISteamUser*)linux_side)->GetGuestPassToRedeemSenderName((uint32)nPassIndex, (char *)pchSenderName, (int)cSenderNameSize);
}

void cppISteamUser_SteamUser005_AcknowledgeMessageByGID(void *linux_side, const char * pchMessageGID)
{
    ((ISteamUser*)linux_side)->AcknowledgeMessageByGID((const char *)pchMessageGID);
}

bool cppISteamUser_SteamUser005_SetLanguage(void *linux_side, const char * pchLanguage)
{
    return ((ISteamUser*)linux_side)->SetLanguage((const char *)pchLanguage);
}

void cppISteamUser_SteamUser005_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

void cppISteamUser_SteamUser005_SetAccountName(void *linux_side, const char * pchAccountName)
{
    ((ISteamUser*)linux_side)->SetAccountName((const char *)pchAccountName);
}

void cppISteamUser_SteamUser005_SetPassword(void *linux_side, const char * pchPassword)
{
    ((ISteamUser*)linux_side)->SetPassword((const char *)pchPassword);
}

void cppISteamUser_SteamUser005_SetAccountCreationTime(void *linux_side, RTime32 rt)
{
    ((ISteamUser*)linux_side)->SetAccountCreationTime((RTime32)rt);
}

#ifdef __cplusplus
}
#endif
