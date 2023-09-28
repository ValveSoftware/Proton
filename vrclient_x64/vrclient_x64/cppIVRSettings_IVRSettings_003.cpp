#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSettings_IVRSettings_003.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRSettings_IVRSettings_003
{
#ifdef __cplusplus
    virtual const char * GetSettingsErrorNameFromEnum( uint32_t ) = 0;
    virtual void SetBool( const char *, const char *, bool, uint32_t * ) = 0;
    virtual void SetInt32( const char *, const char *, int32_t, uint32_t * ) = 0;
    virtual void SetFloat( const char *, const char *, float, uint32_t * ) = 0;
    virtual void SetString( const char *, const char *, const char *, uint32_t * ) = 0;
    virtual bool GetBool( const char *, const char *, uint32_t * ) = 0;
    virtual int32_t GetInt32( const char *, const char *, uint32_t * ) = 0;
    virtual float GetFloat( const char *, const char *, uint32_t * ) = 0;
    virtual void GetString( const char *, const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual void RemoveSection( const char *, uint32_t * ) = 0;
    virtual void RemoveKeyInSection( const char *, const char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    params->_ret = iface->GetSettingsErrorNameFromEnum( params->eError );
}

void cppIVRSettings_IVRSettings_003_SetBool( struct cppIVRSettings_IVRSettings_003_SetBool_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
}

void cppIVRSettings_IVRSettings_003_SetInt32( struct cppIVRSettings_IVRSettings_003_SetInt32_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
}

void cppIVRSettings_IVRSettings_003_SetFloat( struct cppIVRSettings_IVRSettings_003_SetFloat_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
}

void cppIVRSettings_IVRSettings_003_SetString( struct cppIVRSettings_IVRSettings_003_SetString_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
}

void cppIVRSettings_IVRSettings_003_GetBool( struct cppIVRSettings_IVRSettings_003_GetBool_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    params->_ret = iface->GetBool( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_003_GetInt32( struct cppIVRSettings_IVRSettings_003_GetInt32_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    params->_ret = iface->GetInt32( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_003_GetFloat( struct cppIVRSettings_IVRSettings_003_GetFloat_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    params->_ret = iface->GetFloat( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_003_GetString( struct cppIVRSettings_IVRSettings_003_GetString_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->peError );
}

void cppIVRSettings_IVRSettings_003_RemoveSection( struct cppIVRSettings_IVRSettings_003_RemoveSection_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->RemoveSection( params->pchSection, params->peError );
}

void cppIVRSettings_IVRSettings_003_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_003_RemoveKeyInSection_params *params )
{
    struct cppIVRSettings_IVRSettings_003 *iface = (struct cppIVRSettings_IVRSettings_003 *)params->linux_side;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
}

#ifdef __cplusplus
}
#endif
