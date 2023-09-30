/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils007.h"

struct u_ISteamUtils_SteamUtils007
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
    virtual void SetWarningMessageHook( void (*U_CDECL )(int32_t, const char *) ) = 0;
    virtual bool IsOverlayEnabled(  ) = 0;
    virtual bool BOverlayNeedsPresent(  ) = 0;
    virtual uint64_t CheckFileSignature( const char * ) = 0;
    virtual bool ShowGamepadTextInput( uint32_t, uint32_t, const char *, uint32_t, const char * ) = 0;
    virtual uint32_t GetEnteredGamepadTextLength(  ) = 0;
    virtual bool GetEnteredGamepadTextInput( char *, uint32_t ) = 0;
    virtual const char * GetSteamUILanguage(  ) = 0;
    virtual bool IsSteamRunningInVR(  ) = 0;
    virtual void SetOverlayNotificationInset( int32_t, int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils007_GetConnectedUniverse( struct cppISteamUtils_SteamUtils007_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils007_GetServerRealTime( struct cppISteamUtils_SteamUtils007_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils007_GetIPCountry( struct cppISteamUtils_SteamUtils007_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils007_GetImageSize( struct cppISteamUtils_SteamUtils007_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils007_GetImageRGBA( struct cppISteamUtils_SteamUtils007_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils007_GetCSERIPPort( struct cppISteamUtils_SteamUtils007_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils007_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils007_GetAppID( struct cppISteamUtils_SteamUtils007_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils007_IsAPICallCompleted( struct cppISteamUtils_SteamUtils007_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils007_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils007_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils007_GetAPICallResult( struct cppISteamUtils_SteamUtils007_GetAPICallResult_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetAPICallResult( params->hSteamAPICall, params->pCallback, params->cubCallback, params->iCallbackExpected, params->pbFailed );
}

void cppISteamUtils_SteamUtils007_RunFrame( struct cppISteamUtils_SteamUtils007_RunFrame_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils007_GetIPCCallCount( struct cppISteamUtils_SteamUtils007_GetIPCCallCount_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils007_SetWarningMessageHook( struct cppISteamUtils_SteamUtils007_SetWarningMessageHook_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamUtils_SteamUtils007_IsOverlayEnabled( struct cppISteamUtils_SteamUtils007_IsOverlayEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils007_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils007_CheckFileSignature( struct cppISteamUtils_SteamUtils007_CheckFileSignature_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils007_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils007_ShowGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
}

void cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

void cppISteamUtils_SteamUtils007_GetSteamUILanguage( struct cppISteamUtils_SteamUtils007_GetSteamUILanguage_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils007_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils007_IsSteamRunningInVR_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils007_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *params )
{
    struct u_ISteamUtils_SteamUtils007 *iface = (struct u_ISteamUtils_SteamUtils007 *)params->linux_side;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
}

