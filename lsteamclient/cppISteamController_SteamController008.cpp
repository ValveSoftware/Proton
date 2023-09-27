#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamController_SteamController008.h"
void cppISteamController_SteamController008_Init( struct cppISteamController_SteamController008_Init_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Init(  );
}

void cppISteamController_SteamController008_Shutdown( struct cppISteamController_SteamController008_Shutdown_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Shutdown(  );
}

void cppISteamController_SteamController008_RunFrame( struct cppISteamController_SteamController008_RunFrame_params *params )
{
    ((ISteamController*)params->linux_side)->RunFrame(  );
}

void cppISteamController_SteamController008_GetConnectedControllers( struct cppISteamController_SteamController008_GetConnectedControllers_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetConnectedControllers( (ControllerHandle_t *)params->handlesOut );
}

void cppISteamController_SteamController008_GetActionSetHandle( struct cppISteamController_SteamController008_GetActionSetHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActionSetHandle( (const char *)params->pszActionSetName );
}

void cppISteamController_SteamController008_ActivateActionSet( struct cppISteamController_SteamController008_ActivateActionSet_params *params )
{
    ((ISteamController*)params->linux_side)->ActivateActionSet( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle );
}

void cppISteamController_SteamController008_GetCurrentActionSet( struct cppISteamController_SteamController008_GetCurrentActionSet_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetCurrentActionSet( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController008_ActivateActionSetLayer( struct cppISteamController_SteamController008_ActivateActionSetLayer_params *params )
{
    ((ISteamController*)params->linux_side)->ActivateActionSetLayer( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamController_SteamController008_DeactivateActionSetLayer( struct cppISteamController_SteamController008_DeactivateActionSetLayer_params *params )
{
    ((ISteamController*)params->linux_side)->DeactivateActionSetLayer( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamController_SteamController008_DeactivateAllActionSetLayers( struct cppISteamController_SteamController008_DeactivateAllActionSetLayers_params *params )
{
    ((ISteamController*)params->linux_side)->DeactivateAllActionSetLayers( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController008_GetActiveActionSetLayers( struct cppISteamController_SteamController008_GetActiveActionSetLayers_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActiveActionSetLayers( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t *)params->handlesOut );
}

void cppISteamController_SteamController008_GetDigitalActionHandle( struct cppISteamController_SteamController008_GetDigitalActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController008_GetDigitalActionData( struct cppISteamController_SteamController008_GetDigitalActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionData( (ControllerHandle_t)params->controllerHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle );
}

void cppISteamController_SteamController008_GetDigitalActionOrigins( struct cppISteamController_SteamController008_GetDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController008_GetAnalogActionHandle( struct cppISteamController_SteamController008_GetAnalogActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController008_GetAnalogActionData( struct cppISteamController_SteamController008_GetAnalogActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionData( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle );
}

void cppISteamController_SteamController008_GetAnalogActionOrigins( struct cppISteamController_SteamController008_GetAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController008_GetStringForActionOrigin( struct cppISteamController_SteamController008_GetStringForActionOrigin_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetStringForActionOrigin( (EControllerActionOrigin)params->eOrigin );
}

void cppISteamController_SteamController008_StopAnalogActionMomentum( struct cppISteamController_SteamController008_StopAnalogActionMomentum_params *params )
{
    ((ISteamController*)params->linux_side)->StopAnalogActionMomentum( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->eAction );
}

void cppISteamController_SteamController008_GetMotionData( struct cppISteamController_SteamController008_GetMotionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetMotionData( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController008_TriggerHapticPulse( struct cppISteamController_SteamController008_TriggerHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamController_SteamController008_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController008_TriggerRepeatedHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerRepeatedHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec, (unsigned short)params->usOffMicroSec, (unsigned short)params->unRepeat, (unsigned int)params->nFlags );
}

void cppISteamController_SteamController008_TriggerVibration( struct cppISteamController_SteamController008_TriggerVibration_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerVibration( (ControllerHandle_t)params->controllerHandle, (unsigned short)params->usLeftSpeed, (unsigned short)params->usRightSpeed );
}

void cppISteamController_SteamController008_SetLEDColor( struct cppISteamController_SteamController008_SetLEDColor_params *params )
{
    ((ISteamController*)params->linux_side)->SetLEDColor( (ControllerHandle_t)params->controllerHandle, (uint8)params->nColorR, (uint8)params->nColorG, (uint8)params->nColorB, (unsigned int)params->nFlags );
}

void cppISteamController_SteamController008_ShowBindingPanel( struct cppISteamController_SteamController008_ShowBindingPanel_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowBindingPanel( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController008_GetInputTypeForHandle( struct cppISteamController_SteamController008_GetInputTypeForHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetInputTypeForHandle( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController008_GetControllerForGamepadIndex( struct cppISteamController_SteamController008_GetControllerForGamepadIndex_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetControllerForGamepadIndex( (int)params->nIndex );
}

void cppISteamController_SteamController008_GetGamepadIndexForController( struct cppISteamController_SteamController008_GetGamepadIndexForController_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetGamepadIndexForController( (ControllerHandle_t)params->ulControllerHandle );
}

void cppISteamController_SteamController008_GetStringForXboxOrigin( struct cppISteamController_SteamController008_GetStringForXboxOrigin_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetStringForXboxOrigin( (EXboxOrigin)params->eOrigin );
}

void cppISteamController_SteamController008_GetActionOriginFromXboxOrigin( struct cppISteamController_SteamController008_GetActionOriginFromXboxOrigin_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActionOriginFromXboxOrigin( (ControllerHandle_t)params->controllerHandle, (EXboxOrigin)params->eOrigin );
}

void cppISteamController_SteamController008_TranslateActionOrigin( struct cppISteamController_SteamController008_TranslateActionOrigin_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->TranslateActionOrigin( (ESteamInputType)params->eDestinationInputType, (EControllerActionOrigin)params->eSourceOrigin );
}

void cppISteamController_SteamController008_GetControllerBindingRevision( struct cppISteamController_SteamController008_GetControllerBindingRevision_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetControllerBindingRevision( (ControllerHandle_t)params->controllerHandle, (int *)params->pMajor, (int *)params->pMinor );
}

#ifdef __cplusplus
}
#endif
