#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_151/steam_api.h"
#include "steamworks_sdk_151/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_151
#include "struct_converters.h"
#include "cppISteamInput_SteamInput002.h"
void cppISteamInput_SteamInput002_Init( struct cppISteamInput_SteamInput002_Init_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->Init(  );
}

void cppISteamInput_SteamInput002_Shutdown( struct cppISteamInput_SteamInput002_Shutdown_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->Shutdown(  );
}

void cppISteamInput_SteamInput002_RunFrame( struct cppISteamInput_SteamInput002_RunFrame_params *params )
{
    ((ISteamInput*)params->linux_side)->RunFrame(  );
}

void cppISteamInput_SteamInput002_GetConnectedControllers( struct cppISteamInput_SteamInput002_GetConnectedControllers_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetConnectedControllers( (InputHandle_t *)params->handlesOut );
}

void cppISteamInput_SteamInput002_GetActionSetHandle( struct cppISteamInput_SteamInput002_GetActionSetHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActionSetHandle( (const char *)params->pszActionSetName );
}

void cppISteamInput_SteamInput002_ActivateActionSet( struct cppISteamInput_SteamInput002_ActivateActionSet_params *params )
{
    ((ISteamInput*)params->linux_side)->ActivateActionSet( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle );
}

void cppISteamInput_SteamInput002_GetCurrentActionSet( struct cppISteamInput_SteamInput002_GetCurrentActionSet_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetCurrentActionSet( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput002_ActivateActionSetLayer( struct cppISteamInput_SteamInput002_ActivateActionSetLayer_params *params )
{
    ((ISteamInput*)params->linux_side)->ActivateActionSetLayer( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput002_DeactivateActionSetLayer( struct cppISteamInput_SteamInput002_DeactivateActionSetLayer_params *params )
{
    ((ISteamInput*)params->linux_side)->DeactivateActionSetLayer( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput002_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput002_DeactivateAllActionSetLayers_params *params )
{
    ((ISteamInput*)params->linux_side)->DeactivateAllActionSetLayers( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput002_GetActiveActionSetLayers( struct cppISteamInput_SteamInput002_GetActiveActionSetLayers_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActiveActionSetLayers( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t *)params->handlesOut );
}

void cppISteamInput_SteamInput002_GetDigitalActionHandle( struct cppISteamInput_SteamInput002_GetDigitalActionHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionHandle( (const char *)params->pszActionName );
}

void cppISteamInput_SteamInput002_GetDigitalActionData( struct cppISteamInput_SteamInput002_GetDigitalActionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionData( (InputHandle_t)params->inputHandle, (InputDigitalActionHandle_t)params->digitalActionHandle );
}

void cppISteamInput_SteamInput002_GetDigitalActionOrigins( struct cppISteamInput_SteamInput002_GetDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDigitalActionOrigins( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle, (InputDigitalActionHandle_t)params->digitalActionHandle, (EInputActionOrigin *)params->originsOut );
}

void cppISteamInput_SteamInput002_GetAnalogActionHandle( struct cppISteamInput_SteamInput002_GetAnalogActionHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionHandle( (const char *)params->pszActionName );
}

void cppISteamInput_SteamInput002_GetAnalogActionData( struct cppISteamInput_SteamInput002_GetAnalogActionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionData( (InputHandle_t)params->inputHandle, (InputAnalogActionHandle_t)params->analogActionHandle );
}

void cppISteamInput_SteamInput002_GetAnalogActionOrigins( struct cppISteamInput_SteamInput002_GetAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetAnalogActionOrigins( (InputHandle_t)params->inputHandle, (InputActionSetHandle_t)params->actionSetHandle, (InputAnalogActionHandle_t)params->analogActionHandle, (EInputActionOrigin *)params->originsOut );
}

void cppISteamInput_SteamInput002_GetStringForActionOrigin( struct cppISteamInput_SteamInput002_GetStringForActionOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForActionOrigin( (EInputActionOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput002_StopAnalogActionMomentum( struct cppISteamInput_SteamInput002_StopAnalogActionMomentum_params *params )
{
    ((ISteamInput*)params->linux_side)->StopAnalogActionMomentum( (InputHandle_t)params->inputHandle, (InputAnalogActionHandle_t)params->eAction );
}

void cppISteamInput_SteamInput002_GetMotionData( struct cppISteamInput_SteamInput002_GetMotionData_params *params )
{
    *params->_ret = ((ISteamInput*)params->linux_side)->GetMotionData( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput002_TriggerVibration( struct cppISteamInput_SteamInput002_TriggerVibration_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerVibration( (InputHandle_t)params->inputHandle, (unsigned short)params->usLeftSpeed, (unsigned short)params->usRightSpeed );
}

void cppISteamInput_SteamInput002_SetLEDColor( struct cppISteamInput_SteamInput002_SetLEDColor_params *params )
{
    ((ISteamInput*)params->linux_side)->SetLEDColor( (InputHandle_t)params->inputHandle, (uint8)params->nColorR, (uint8)params->nColorG, (uint8)params->nColorB, (unsigned int)params->nFlags );
}

void cppISteamInput_SteamInput002_TriggerHapticPulse( struct cppISteamInput_SteamInput002_TriggerHapticPulse_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerHapticPulse( (InputHandle_t)params->inputHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params *params )
{
    ((ISteamInput*)params->linux_side)->TriggerRepeatedHapticPulse( (InputHandle_t)params->inputHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec, (unsigned short)params->usOffMicroSec, (unsigned short)params->unRepeat, (unsigned int)params->nFlags );
}

void cppISteamInput_SteamInput002_ShowBindingPanel( struct cppISteamInput_SteamInput002_ShowBindingPanel_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->ShowBindingPanel( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput002_GetInputTypeForHandle( struct cppISteamInput_SteamInput002_GetInputTypeForHandle_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetInputTypeForHandle( (InputHandle_t)params->inputHandle );
}

void cppISteamInput_SteamInput002_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput002_GetControllerForGamepadIndex_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetControllerForGamepadIndex( (int)params->nIndex );
}

void cppISteamInput_SteamInput002_GetGamepadIndexForController( struct cppISteamInput_SteamInput002_GetGamepadIndexForController_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetGamepadIndexForController( (InputHandle_t)params->ulinputHandle );
}

void cppISteamInput_SteamInput002_GetStringForXboxOrigin( struct cppISteamInput_SteamInput002_GetStringForXboxOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetStringForXboxOrigin( (EXboxOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetActionOriginFromXboxOrigin( (InputHandle_t)params->inputHandle, (EXboxOrigin)params->eOrigin );
}

void cppISteamInput_SteamInput002_TranslateActionOrigin( struct cppISteamInput_SteamInput002_TranslateActionOrigin_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->TranslateActionOrigin( (ESteamInputType)params->eDestinationInputType, (EInputActionOrigin)params->eSourceOrigin );
}

void cppISteamInput_SteamInput002_GetDeviceBindingRevision( struct cppISteamInput_SteamInput002_GetDeviceBindingRevision_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetDeviceBindingRevision( (InputHandle_t)params->inputHandle, (int *)params->pMajor, (int *)params->pMinor );
}

void cppISteamInput_SteamInput002_GetRemotePlaySessionID( struct cppISteamInput_SteamInput002_GetRemotePlaySessionID_params *params )
{
    params->_ret = ((ISteamInput*)params->linux_side)->GetRemotePlaySessionID( (InputHandle_t)params->inputHandle );
}

#ifdef __cplusplus
}
#endif
