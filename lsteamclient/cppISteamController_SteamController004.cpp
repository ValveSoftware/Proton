#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_138a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_138a
#include "struct_converters.h"
#include "cppISteamController_SteamController004.h"
void cppISteamController_SteamController004_Init( struct cppISteamController_SteamController004_Init_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Init(  );
}

void cppISteamController_SteamController004_Shutdown( struct cppISteamController_SteamController004_Shutdown_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->Shutdown(  );
}

void cppISteamController_SteamController004_RunFrame( struct cppISteamController_SteamController004_RunFrame_params *params )
{
    ((ISteamController*)params->linux_side)->RunFrame(  );
}

void cppISteamController_SteamController004_GetConnectedControllers( struct cppISteamController_SteamController004_GetConnectedControllers_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetConnectedControllers( (ControllerHandle_t *)params->handlesOut );
}

void cppISteamController_SteamController004_ShowBindingPanel( struct cppISteamController_SteamController004_ShowBindingPanel_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowBindingPanel( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController004_GetActionSetHandle( struct cppISteamController_SteamController004_GetActionSetHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetActionSetHandle( (const char *)params->pszActionSetName );
}

void cppISteamController_SteamController004_ActivateActionSet( struct cppISteamController_SteamController004_ActivateActionSet_params *params )
{
    ((ISteamController*)params->linux_side)->ActivateActionSet( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle );
}

void cppISteamController_SteamController004_GetCurrentActionSet( struct cppISteamController_SteamController004_GetCurrentActionSet_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetCurrentActionSet( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController004_GetDigitalActionHandle( struct cppISteamController_SteamController004_GetDigitalActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController004_GetDigitalActionData( struct cppISteamController_SteamController004_GetDigitalActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionData( (ControllerHandle_t)params->controllerHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle );
}

void cppISteamController_SteamController004_GetDigitalActionOrigins( struct cppISteamController_SteamController004_GetDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetDigitalActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController004_GetAnalogActionHandle( struct cppISteamController_SteamController004_GetAnalogActionHandle_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionHandle( (const char *)params->pszActionName );
}

void cppISteamController_SteamController004_GetAnalogActionData( struct cppISteamController_SteamController004_GetAnalogActionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionData( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle );
}

void cppISteamController_SteamController004_GetAnalogActionOrigins( struct cppISteamController_SteamController004_GetAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetAnalogActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerActionSetHandle_t)params->actionSetHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle, (EControllerActionOrigin *)params->originsOut );
}

void cppISteamController_SteamController004_StopAnalogActionMomentum( struct cppISteamController_SteamController004_StopAnalogActionMomentum_params *params )
{
    ((ISteamController*)params->linux_side)->StopAnalogActionMomentum( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->eAction );
}

void cppISteamController_SteamController004_TriggerHapticPulse( struct cppISteamController_SteamController004_TriggerHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec );
}

void cppISteamController_SteamController004_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController004_TriggerRepeatedHapticPulse_params *params )
{
    ((ISteamController*)params->linux_side)->TriggerRepeatedHapticPulse( (ControllerHandle_t)params->controllerHandle, (ESteamControllerPad)params->eTargetPad, (unsigned short)params->usDurationMicroSec, (unsigned short)params->usOffMicroSec, (unsigned short)params->unRepeat, (unsigned int)params->nFlags );
}

void cppISteamController_SteamController004_GetGamepadIndexForController( struct cppISteamController_SteamController004_GetGamepadIndexForController_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetGamepadIndexForController( (ControllerHandle_t)params->ulControllerHandle );
}

void cppISteamController_SteamController004_GetControllerForGamepadIndex( struct cppISteamController_SteamController004_GetControllerForGamepadIndex_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->GetControllerForGamepadIndex( (int)params->nIndex );
}

void cppISteamController_SteamController004_GetMotionData( struct cppISteamController_SteamController004_GetMotionData_params *params )
{
    *params->_ret = ((ISteamController*)params->linux_side)->GetMotionData( (ControllerHandle_t)params->controllerHandle );
}

void cppISteamController_SteamController004_ShowDigitalActionOrigins( struct cppISteamController_SteamController004_ShowDigitalActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowDigitalActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerDigitalActionHandle_t)params->digitalActionHandle, (float)params->flScale, (float)params->flXPosition, (float)params->flYPosition );
}

void cppISteamController_SteamController004_ShowAnalogActionOrigins( struct cppISteamController_SteamController004_ShowAnalogActionOrigins_params *params )
{
    params->_ret = ((ISteamController*)params->linux_side)->ShowAnalogActionOrigins( (ControllerHandle_t)params->controllerHandle, (ControllerAnalogActionHandle_t)params->analogActionHandle, (float)params->flScale, (float)params->flXPosition, (float)params->flYPosition );
}

#ifdef __cplusplus
}
#endif
