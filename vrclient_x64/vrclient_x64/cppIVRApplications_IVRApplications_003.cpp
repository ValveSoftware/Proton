#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.16/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_003.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRApplications_IVRApplications_003
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
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRApplications_IVRApplications_003_AddApplicationManifest( struct cppIVRApplications_IVRApplications_003_AddApplicationManifest_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_003_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_003_RemoveApplicationManifest_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_003_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_003_IsApplicationInstalled_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationCount( struct cppIVRApplications_IVRApplications_003_GetApplicationCount_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_LaunchApplication( struct cppIVRApplications_IVRApplications_003_LaunchApplication_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_IdentifyApplication( struct cppIVRApplications_IVRApplications_003_IdentifyApplication_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationProcessId_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyString_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetStartingApplication( struct cppIVRApplications_IVRApplications_003_GetStartingApplication_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_GetTransitionState( struct cppIVRApplications_IVRApplications_003_GetTransitionState_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetTransitionState(  );
}

void cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->GetApplicationsTransitionStateNameFromEnum( params->state );
}

void cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params *params )
{
    struct cppIVRApplications_IVRApplications_003 *iface = (struct cppIVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = iface->IsQuitUserPromptRequested(  );
}

#ifdef __cplusplus
}
#endif
