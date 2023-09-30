/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION006.h"

struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006
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
#endif /* __cplusplus */
};

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribed(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsLowViolence(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsCybercafe(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsVACBanned(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCurrentGameLanguage(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAvailableGameLanguages(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribedApp( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsDlcInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetEarliestPurchaseUnixTime( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsSubscribedFromFreeWeekend(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetDLCCount(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BGetDLCDataByIndex( params->iDLC, params->pAppID, params->pbAvailable, params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->InstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->UninstallDLC( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    iface->RequestAppProofOfPurchaseKey( params->nAppID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetCurrentBetaName( params->pchName, params->cchNameBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->MarkContentCorrupt( params->bMissingFilesOnly );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetInstalledDepots( params->appID, params->pvecDepots, params->cMaxDepots );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetAppInstallDir( params->appID, params->pchFolder, params->cchFolderBufferSize );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->BIsAppInstalled( params->appID );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    *params->_ret = iface->GetAppOwner(  );
}

void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params *params )
{
    struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *iface = (struct u_ISteamApps_STEAMAPPS_INTERFACE_VERSION006 *)params->linux_side;
    params->_ret = iface->GetLaunchQueryParam( params->pchKey );
}

