/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRApplications_IVRApplications_007.h"
struct u_IVRApplications_IVRApplications_007
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchTemplateApplication( const char *, const char *, const u_AppOverrideKeys_t *, uint32_t ) = 0;
    virtual uint32_t LaunchApplicationFromMimeType( const char *, const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual bool CancelApplicationLaunch( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t SetDefaultApplicationForMimeType( const char *, const char * ) = 0;
    virtual bool GetDefaultApplicationForMimeType( const char *, char *, uint32_t ) = 0;
    virtual bool GetApplicationSupportedMimeTypes( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationsThatSupportMimeType( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationLaunchArguments( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetSceneApplicationState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetSceneApplicationStateNameFromEnum( uint32_t ) = 0;
    virtual uint32_t LaunchInternalProcess( const char *, const char *, const char * ) = 0;
    virtual uint32_t GetCurrentSceneProcessId(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRApplications_IVRApplications_007_AddApplicationManifest( struct cppIVRApplications_IVRApplications_007_AddApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_007_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_007_RemoveApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_007_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_007_IsApplicationInstalled_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_GetApplicationCount( struct cppIVRApplications_IVRApplications_007_GetApplicationCount_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_007_LaunchApplication( struct cppIVRApplications_IVRApplications_007_LaunchApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_007_LaunchTemplateApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
}

void cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType( struct cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
}

void cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_007_CancelApplicationLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->CancelApplicationLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_IdentifyApplication( struct cppIVRApplications_IVRApplications_007_IdentifyApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_007_GetApplicationProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyString_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
}

void cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes( struct cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
}

void cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType( struct cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
}

void cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments( struct cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
}

void cppIVRApplications_IVRApplications_007_GetStartingApplication( struct cppIVRApplications_IVRApplications_007_GetStartingApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_007_GetSceneApplicationState( struct cppIVRApplications_IVRApplications_007_GetSceneApplicationState_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSceneApplicationState(  );
}

void cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum( struct cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (const char *)iface->GetSceneApplicationStateNameFromEnum( params->state );
}

void cppIVRApplications_IVRApplications_007_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_007_LaunchInternalProcess_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
}

void cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId( struct cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneProcessId(  );
}

