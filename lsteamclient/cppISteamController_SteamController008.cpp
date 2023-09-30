/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamController_SteamController008.h"

void cppISteamController_SteamController008_Init( struct cppISteamController_SteamController008_Init_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamController_SteamController008_Shutdown( struct cppISteamController_SteamController008_Shutdown_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamController_SteamController008_RunFrame( struct cppISteamController_SteamController008_RunFrame_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamController_SteamController008_GetConnectedControllers( struct cppISteamController_SteamController008_GetConnectedControllers_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamController_SteamController008_GetActionSetHandle( struct cppISteamController_SteamController008_GetActionSetHandle_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamController_SteamController008_ActivateActionSet( struct cppISteamController_SteamController008_ActivateActionSet_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->ActivateActionSet( params->controllerHandle, params->actionSetHandle );
}

void cppISteamController_SteamController008_GetCurrentActionSet( struct cppISteamController_SteamController008_GetCurrentActionSet_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->controllerHandle );
}

void cppISteamController_SteamController008_ActivateActionSetLayer( struct cppISteamController_SteamController008_ActivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->ActivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController008_DeactivateActionSetLayer( struct cppISteamController_SteamController008_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->controllerHandle, params->actionSetLayerHandle );
}

void cppISteamController_SteamController008_DeactivateAllActionSetLayers( struct cppISteamController_SteamController008_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->controllerHandle );
}

void cppISteamController_SteamController008_GetActiveActionSetLayers( struct cppISteamController_SteamController008_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->controllerHandle, params->handlesOut );
}

void cppISteamController_SteamController008_GetDigitalActionHandle( struct cppISteamController_SteamController008_GetDigitalActionHandle_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamController_SteamController008_GetDigitalActionData( struct cppISteamController_SteamController008_GetDigitalActionData_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->controllerHandle, params->digitalActionHandle );
}

void cppISteamController_SteamController008_GetDigitalActionOrigins( struct cppISteamController_SteamController008_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->controllerHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamController_SteamController008_GetAnalogActionHandle( struct cppISteamController_SteamController008_GetAnalogActionHandle_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamController_SteamController008_GetAnalogActionData( struct cppISteamController_SteamController008_GetAnalogActionData_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->controllerHandle, params->analogActionHandle );
}

void cppISteamController_SteamController008_GetAnalogActionOrigins( struct cppISteamController_SteamController008_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->controllerHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamController_SteamController008_GetStringForActionOrigin( struct cppISteamController_SteamController008_GetStringForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamController_SteamController008_StopAnalogActionMomentum( struct cppISteamController_SteamController008_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->controllerHandle, params->eAction );
}

void cppISteamController_SteamController008_GetMotionData( struct cppISteamController_SteamController008_GetMotionData_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->controllerHandle );
}

void cppISteamController_SteamController008_TriggerHapticPulse( struct cppISteamController_SteamController008_TriggerHapticPulse_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamController_SteamController008_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController008_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->controllerHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamController_SteamController008_TriggerVibration( struct cppISteamController_SteamController008_TriggerVibration_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->TriggerVibration( params->controllerHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamController_SteamController008_SetLEDColor( struct cppISteamController_SteamController008_SetLEDColor_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    iface->SetLEDColor( params->controllerHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamController_SteamController008_ShowBindingPanel( struct cppISteamController_SteamController008_ShowBindingPanel_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->controllerHandle );
}

void cppISteamController_SteamController008_GetInputTypeForHandle( struct cppISteamController_SteamController008_GetInputTypeForHandle_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->controllerHandle );
}

void cppISteamController_SteamController008_GetControllerForGamepadIndex( struct cppISteamController_SteamController008_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamController_SteamController008_GetGamepadIndexForController( struct cppISteamController_SteamController008_GetGamepadIndexForController_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulControllerHandle );
}

void cppISteamController_SteamController008_GetStringForXboxOrigin( struct cppISteamController_SteamController008_GetStringForXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
}

void cppISteamController_SteamController008_GetActionOriginFromXboxOrigin( struct cppISteamController_SteamController008_GetActionOriginFromXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->controllerHandle, params->eOrigin );
}

void cppISteamController_SteamController008_TranslateActionOrigin( struct cppISteamController_SteamController008_TranslateActionOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
}

void cppISteamController_SteamController008_GetControllerBindingRevision( struct cppISteamController_SteamController008_GetControllerBindingRevision_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetControllerBindingRevision( params->controllerHandle, params->pMajor, params->pMinor );
}

