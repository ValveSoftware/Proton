/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRApplications_IVRApplications_001.h"
struct u_IVRApplications_IVRApplications_001
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetHomeApplication( char *, uint32_t ) = 0;
    virtual uint32_t SetHomeApplication( const char * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRApplications_IVRApplications_001_AddApplicationManifest( struct cppIVRApplications_IVRApplications_001_AddApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_001_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_001_RemoveApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_001_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_001_IsApplicationInstalled_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_GetApplicationCount( struct cppIVRApplications_IVRApplications_001_GetApplicationCount_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_001_LaunchApplication( struct cppIVRApplications_IVRApplications_001_LaunchApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_IdentifyApplication( struct cppIVRApplications_IVRApplications_001_IdentifyApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_001_GetApplicationProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_001_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyString_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_001_GetHomeApplication( struct cppIVRApplications_IVRApplications_001_GetHomeApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetHomeApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_001_SetHomeApplication( struct cppIVRApplications_IVRApplications_001_SetHomeApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHomeApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_GetStartingApplication( struct cppIVRApplications_IVRApplications_001_GetStartingApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_001_GetTransitionState( struct cppIVRApplications_IVRApplications_001_GetTransitionState_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
}

void cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
}

