/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils008.h"

struct u_ISteamUtils_SteamUtils008
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
    virtual bool IsSteamInBigPictureMode(  ) = 0;
    virtual void StartVRDashboard(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils008_GetConnectedUniverse( struct cppISteamUtils_SteamUtils008_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils008_GetServerRealTime( struct cppISteamUtils_SteamUtils008_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils008_GetIPCountry( struct cppISteamUtils_SteamUtils008_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils008_GetImageSize( struct cppISteamUtils_SteamUtils008_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils008_GetImageRGBA( struct cppISteamUtils_SteamUtils008_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils008_GetCSERIPPort( struct cppISteamUtils_SteamUtils008_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils008_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils008_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils008_GetAppID( struct cppISteamUtils_SteamUtils008_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils008_IsAPICallCompleted( struct cppISteamUtils_SteamUtils008_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils008_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils008_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils008_RunFrame( struct cppISteamUtils_SteamUtils008_RunFrame_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils008_GetIPCCallCount( struct cppISteamUtils_SteamUtils008_GetIPCCallCount_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils008_SetWarningMessageHook( struct cppISteamUtils_SteamUtils008_SetWarningMessageHook_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamUtils_SteamUtils008_IsOverlayEnabled( struct cppISteamUtils_SteamUtils008_IsOverlayEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils008_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils008_BOverlayNeedsPresent_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils008_CheckFileSignature( struct cppISteamUtils_SteamUtils008_CheckFileSignature_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils008_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils008_ShowGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText );
}

void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

void cppISteamUtils_SteamUtils008_GetSteamUILanguage( struct cppISteamUtils_SteamUtils008_GetSteamUILanguage_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->GetSteamUILanguage(  );
}

void cppISteamUtils_SteamUtils008_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils008_IsSteamRunningInVR_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsSteamRunningInVR(  );
}

void cppISteamUtils_SteamUtils008_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationInset_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->SetOverlayNotificationInset( params->nHorizontalInset, params->nVerticalInset );
}

void cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    params->_ret = iface->IsSteamInBigPictureMode(  );
}

void cppISteamUtils_SteamUtils008_StartVRDashboard( struct cppISteamUtils_SteamUtils008_StartVRDashboard_params *params )
{
    struct u_ISteamUtils_SteamUtils008 *iface = (struct u_ISteamUtils_SteamUtils008 *)params->linux_side;
    iface->StartVRDashboard(  );
}

