#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_128
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils006.h"

struct cppISteamUtils_SteamUtils006
{
#ifdef __cplusplus
    virtual uint32_t GetSecondsSinceAppActive(  ) = 0;
    virtual uint32_t GetSecondsSinceComputerActive(  ) = 0;
    virtual uint32_t GetConnectedUniverse(  ) = 0;
    virtual uint32_t GetServerRealTime(  ) = 0;
    virtual const char * GetIPCountry(  ) = 0;
    virtual bool GetImageSize( int32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetImageRGBA( int32_t, uint8_t *, int32_t ) = 0;
    virtual bool GetCSERIPPort( uint32_t *, uint16_t * ) = 0;
    virtual uint8_t GetCurrentBatteryPower(  ) = 0;
    virtual uint32_t GetAppID(  ) = 0;
    virtual void SetOverlayNotificationPosition( uint32_t ) = 0;
    virtual bool IsAPICallCompleted( uint64_t, bool * ) = 0;
    virtual uint32_t GetAPICallFailureReason( uint64_t ) = 0;
    virtual bool GetAPICallResult( uint64_t, void *, int32_t, int32_t, bool * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*)(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils006_GetConnectedUniverse( struct cppISteamUtils_SteamUtils006_GetConnectedUniverse_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils006_GetServerRealTime( struct cppISteamUtils_SteamUtils006_GetServerRealTime_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils006_GetIPCountry( struct cppISteamUtils_SteamUtils006_GetIPCountry_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils006_GetImageSize( struct cppISteamUtils_SteamUtils006_GetImageSize_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils006_GetImageRGBA( struct cppISteamUtils_SteamUtils006_GetImageRGBA_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils006_GetCSERIPPort( struct cppISteamUtils_SteamUtils006_GetCSERIPPort_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils006_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils006_GetCurrentBatteryPower_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils006_GetAppID( struct cppISteamUtils_SteamUtils006_GetAppID_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils006_IsAPICallCompleted( struct cppISteamUtils_SteamUtils006_IsAPICallCompleted_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils006_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils006_GetAPICallFailureReason_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils006_GetAPICallResult( struct cppISteamUtils_SteamUtils006_GetAPICallResult_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, params->pCallback, params->cubCallback, params->iCallbackExpected, params->pbFailed );
}

void cppISteamUtils_SteamUtils006_RunFrame( struct cppISteamUtils_SteamUtils006_RunFrame_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils006_GetIPCCallCount( struct cppISteamUtils_SteamUtils006_GetIPCCallCount_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils006_SetWarningMessageHook( struct cppISteamUtils_SteamUtils006_SetWarningMessageHook_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    void (*U_CDECL lin_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( lin_pFunction );
}

void cppISteamUtils_SteamUtils006_IsOverlayEnabled( struct cppISteamUtils_SteamUtils006_IsOverlayEnabled_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils006_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils006_BOverlayNeedsPresent_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils006_CheckFileSignature( struct cppISteamUtils_SteamUtils006_CheckFileSignature_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils006_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils006_ShowGamepadTextInput_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax );
}

void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

void cppISteamUtils_SteamUtils006_GetSteamUILanguage( struct cppISteamUtils_SteamUtils006_GetSteamUILanguage_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils006_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils006_IsSteamRunningInVR_params *params )
{
    struct cppISteamUtils_SteamUtils006 *iface = (struct cppISteamUtils_SteamUtils006 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
}

#ifdef __cplusplus
}
#endif
