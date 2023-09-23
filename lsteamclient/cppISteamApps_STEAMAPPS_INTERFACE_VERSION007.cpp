#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_136/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_136
#include "struct_converters.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION007.h"

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007
{
#ifdef __cplusplus
    virtual bool BIsSubscribed(  ) = 0;
    virtual bool BIsLowViolence(  ) = 0;
    virtual bool BIsCybercafe(  ) = 0;
    virtual bool BIsVACBanned(  ) = 0;
    virtual const char * GetCurrentGameLanguage(  ) = 0;
    virtual const char * GetAvailableGameLanguages(  ) = 0;
    virtual bool BIsSubscribedApp( uint32_t ) = 0;
    virtual bool BIsDlcInstalled( uint32_t ) = 0;
    virtual uint32_t GetEarliestPurchaseUnixTime( uint32_t ) = 0;
    virtual bool BIsSubscribedFromFreeWeekend(  ) = 0;
    virtual int32_t GetDLCCount(  ) = 0;
    virtual bool BGetDLCDataByIndex( int32_t, uint32_t *, bool *, char *, int32_t ) = 0;
    virtual void InstallDLC( uint32_t ) = 0;
    virtual void UninstallDLC( uint32_t ) = 0;
    virtual void RequestAppProofOfPurchaseKey( uint32_t ) = 0;
    virtual bool GetCurrentBetaName( char *, int32_t ) = 0;
    virtual bool MarkContentCorrupt( bool ) = 0;
    virtual uint32_t GetInstalledDepots( uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetAppInstallDir( uint32_t, char *, uint32_t ) = 0;
    virtual bool BIsAppInstalled( uint32_t ) = 0;
    virtual CSteamID GetAppOwner(  ) = 0;
    virtual const char * GetLaunchQueryParam( const char * ) = 0;
    virtual bool GetDlcDownloadProgress( uint32_t, uint64_t *, uint64_t * ) = 0;
    virtual int32_t GetAppBuildId(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetDlcDownloadProgress( params->nAppID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *params )
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *iface = (struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007 *)params->linux_side;
    params->_ret = iface->GetAppBuildId(  );
}

#ifdef __cplusplus
}
#endif
