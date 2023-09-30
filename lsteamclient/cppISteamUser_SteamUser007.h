/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamUser_SteamUser007_GetHSteamUser_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser007_GetHSteamUser( struct cppISteamUser_SteamUser007_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser007_LogOn_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamUser_SteamUser007_LogOn( struct cppISteamUser_SteamUser007_LogOn_params *params );

struct cppISteamUser_SteamUser007_LogOff_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser007_LogOff( struct cppISteamUser_SteamUser007_LogOff_params *params );

struct cppISteamUser_SteamUser007_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser007_BLoggedOn( struct cppISteamUser_SteamUser007_BLoggedOn_params *params );

struct cppISteamUser_SteamUser007_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser007_GetSteamID( struct cppISteamUser_SteamUser007_GetSteamID_params *params );

struct cppISteamUser_SteamUser007_SetRegistryString_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUser_SteamUser007_SetRegistryString( struct cppISteamUser_SteamUser007_SetRegistryString_params *params );

struct cppISteamUser_SteamUser007_GetRegistryString_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    char *pchValue;
    int32_t cbValue;
};
extern void cppISteamUser_SteamUser007_GetRegistryString( struct cppISteamUser_SteamUser007_GetRegistryString_params *params );

struct cppISteamUser_SteamUser007_SetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t iValue;
};
extern void cppISteamUser_SteamUser007_SetRegistryInt( struct cppISteamUser_SteamUser007_SetRegistryInt_params *params );

struct cppISteamUser_SteamUser007_GetRegistryInt_params
{
    void *linux_side;
    bool _ret;
    uint32_t eRegistrySubTree;
    const char *pchKey;
    int32_t *piValue;
};
extern void cppISteamUser_SteamUser007_GetRegistryInt( struct cppISteamUser_SteamUser007_GetRegistryInt_params *params );

struct cppISteamUser_SteamUser007_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pBlob;
    int32_t cbMaxBlob;
    CSteamID steamID;
    CGameID gameID;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
    void *pvSteam2GetEncryptionKey;
    int32_t cbSteam2GetEncryptionKey;
};
extern void cppISteamUser_SteamUser007_InitiateGameConnection( struct cppISteamUser_SteamUser007_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser007_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser007_TerminateGameConnection( struct cppISteamUser_SteamUser007_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser007_TrackAppUsageEvent( struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser007_RefreshSteam2Login_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser007_RefreshSteam2Login( struct cppISteamUser_SteamUser007_RefreshSteam2Login_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
