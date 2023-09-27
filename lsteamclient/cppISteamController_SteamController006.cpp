#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamController_SteamController006.h"
void cppISteamController_SteamController006_Init( struct cppISteamController_SteamController006_Init_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Init(  );
}

void cppISteamController_SteamController006_Shutdown( struct cppISteamController_SteamController006_Shutdown_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Shutdown(  );
}

void cppISteamController_SteamController006_RunFrame( struct cppISteamController_SteamController006_RunFrame_params *params )
{
    ((ISteamController*)params->linux_side)->RunFrame(  );
}

void cppISteamController_SteamController006_GetConnectedControllers( struct cppISteamController_SteamController006_GetConnectedControllers_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetConnectedControllers( (ControllerHandle_t *)params->handlesOut );
}

void cppISteamController_SteamController006_ShowBindingPanel( struct cppISteamController_SteamController006_ShowBindingPanel_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowBindingPanel( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController006_GetActionSetHandle( struct cppISteamController_SteamController006_GetActionSetHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActionSetHandle( (const char *)params->pszActionSetName );
}

void cppISteamController_SteamController006_ActivateActionSet( struct cppISteamController_SteamController006_ActivateActionSet_params *params )
{
    ((ISteamController*)params->linux_side)->ActivateActionSet( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle );
}

void cppISteamController_SteamController006_GetCurrentActionSet( struct cppISteamController_SteamController006_GetCurrentActionSet_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetCurrentActionSet( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController006_ActivateActionSetLayer( struct cppISteamController_SteamController006_ActivateActionSetLayer_params *params )
{
    ((ISteamController*)params->linux_side)->ActivateActionSetLayer( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamController_SteamController006_DeactivateActionSetLayer( struct cppISteamController_SteamController006_DeactivateActionSetLayer_params *params )
{
    ((ISteamController*)params->linux_side)->DeactivateActionSetLayer( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetLayerHandle );
}

void cppISteamController_SteamController006_DeactivateAllActionSetLayers( struct cppISteamController_SteamController006_DeactivateAllActionSetLayers_params *params )
{
    ((ISteamController*)params->linux_side)->DeactivateAllActionSetLayers( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController006_GetActiveActionSetLayers( struct cppISteamController_SteamController006_GetActiveActionSetLayers_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActiveActionSetLayers( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t *)params->handlesOut );
}

void cppISteamController_SteamController006_GetDigitalActionHandle( struct cppISteamController_SteamController006_GetDigitalActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController006_GetDigitalActionData( struct cppISteamController_SteamController006_GetDigitalActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionData( (ControllerHandle_t)params->controllerHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle );
}

void cppISteamController_SteamController006_GetDigitalActionOrigins( struct cppISteamController_SteamController006_GetDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController006_GetAnalogActionHandle( struct cppISteamController_SteamController006_GetAnalogActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController006_GetAnalogActionData( struct cppISteamController_SteamController006_GetAnalogActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionData( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle );
}

void cppISteamController_SteamController006_GetAnalogActionOrigins( struct cppISteamController_SteamController006_GetAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController006_StopAnalogActionMomentum( struct cppISteamController_SteamController006_StopAnalogActionMomentum_params *params )
{
    ((ISteamController*)params->linux_side)->StopAnalogActionMomentum( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->eAction );
}

void cppISteamController_SteamController006_TriggerHapticPulse( struct cppISteamController_SteamController006_TriggerHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamController_SteamController006_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController006_TriggerRepeatedHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerRepeatedHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec, (unsigned short)params->usOffMicroSec, (unsigned short)params->unRepeat, (unsigned int)params->nFlags );
}

void cppISteamController_SteamController006_TriggerVibration( struct cppISteamController_SteamController006_TriggerVibration_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerVibration( (ControllerHandle_t)params->controllerHandle, (unsigned short)params->usLeftSpeed, (unsigned short)params->usRightSpeed );
}

void cppISteamController_SteamController006_SetLEDColor( struct cppISteamController_SteamController006_SetLEDColor_params *params )
{
    ((ISteamController*)params->linux_side)->SetLEDColor( (ControllerHandle_t)params->controllerHandle, (uint8)params->nColorR, (uint8)params->nColorG, (uint8)params->nColorB, (unsigned int)params->nFlags );
}

void cppISteamController_SteamController006_GetGamepadIndexForController( struct cppISteamController_SteamController006_GetGamepadIndexForController_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetGamepadIndexForController( (ControllerHandle_t)params->ulControllerHandle );
}

void cppISteamController_SteamController006_GetControllerForGamepadIndex( struct cppISteamController_SteamController006_GetControllerForGamepadIndex_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetControllerForGamepadIndex( (int)params->nIndex );
}

void cppISteamController_SteamController006_GetMotionData( struct cppISteamController_SteamController006_GetMotionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetMotionData( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController006_ShowDigitalActionOrigins( struct cppISteamController_SteamController006_ShowDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowDigitalActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle, (float)params->flScale, (float)params->flXPosition, (float)params->flYPosition );
}

void cppISteamController_SteamController006_ShowAnalogActionOrigins( struct cppISteamController_SteamController006_ShowAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowAnalogActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle, (float)params->flScale, (float)params->flXPosition, (float)params->flYPosition );
}

void cppISteamController_SteamController006_GetStringForActionOrigin( struct cppISteamController_SteamController006_GetStringForActionOrigin_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetStringForActionOrigin( (EControllerActionOrigin)params->eOrigin );
}

void cppISteamController_SteamController006_GetInputTypeForHandle( struct cppISteamController_SteamController006_GetInputTypeForHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetInputTypeForHandle( (ControllerHandle_t)params->controllerHandle );
}

#ifdef __cplusplus
}
#endif
