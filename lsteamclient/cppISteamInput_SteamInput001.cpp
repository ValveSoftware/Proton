/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamInput_SteamInput001.h"

void cppISteamInput_SteamInput001_Init( struct cppISteamInput_SteamInput001_Init_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamInput_SteamInput001_Shutdown( struct cppISteamInput_SteamInput001_Shutdown_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamInput_SteamInput001_RunFrame( struct cppISteamInput_SteamInput001_RunFrame_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamInput_SteamInput001_GetConnectedControllers( struct cppISteamInput_SteamInput001_GetConnectedControllers_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetConnectedControllers( params->handlesOut );
}

void cppISteamInput_SteamInput001_GetActionSetHandle( struct cppISteamInput_SteamInput001_GetActionSetHandle_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pszActionSetName );
}

void cppISteamInput_SteamInput001_ActivateActionSet( struct cppISteamInput_SteamInput001_ActivateActionSet_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->ActivateActionSet( params->inputHandle, params->actionSetHandle );
}

void cppISteamInput_SteamInput001_GetCurrentActionSet( struct cppISteamInput_SteamInput001_GetCurrentActionSet_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetCurrentActionSet( params->inputHandle );
}

void cppISteamInput_SteamInput001_ActivateActionSetLayer( struct cppISteamInput_SteamInput001_ActivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->ActivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput001_DeactivateActionSetLayer( struct cppISteamInput_SteamInput001_DeactivateActionSetLayer_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->DeactivateActionSetLayer( params->inputHandle, params->actionSetLayerHandle );
}

void cppISteamInput_SteamInput001_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput001_DeactivateAllActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->DeactivateAllActionSetLayers( params->inputHandle );
}

void cppISteamInput_SteamInput001_GetActiveActionSetLayers( struct cppISteamInput_SteamInput001_GetActiveActionSetLayers_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActiveActionSetLayers( params->inputHandle, params->handlesOut );
}

void cppISteamInput_SteamInput001_GetDigitalActionHandle( struct cppISteamInput_SteamInput001_GetDigitalActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDigitalActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput001_GetDigitalActionData( struct cppISteamInput_SteamInput001_GetDigitalActionData_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetDigitalActionData( params->inputHandle, params->digitalActionHandle );
}

void cppISteamInput_SteamInput001_GetDigitalActionOrigins( struct cppISteamInput_SteamInput001_GetDigitalActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDigitalActionOrigins( params->inputHandle, params->actionSetHandle, params->digitalActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput001_GetAnalogActionHandle( struct cppISteamInput_SteamInput001_GetAnalogActionHandle_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetAnalogActionHandle( params->pszActionName );
}

void cppISteamInput_SteamInput001_GetAnalogActionData( struct cppISteamInput_SteamInput001_GetAnalogActionData_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetAnalogActionData( params->inputHandle, params->analogActionHandle );
}

void cppISteamInput_SteamInput001_GetAnalogActionOrigins( struct cppISteamInput_SteamInput001_GetAnalogActionOrigins_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetAnalogActionOrigins( params->inputHandle, params->actionSetHandle, params->analogActionHandle, params->originsOut );
}

void cppISteamInput_SteamInput001_GetStringForActionOrigin( struct cppISteamInput_SteamInput001_GetStringForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetStringForActionOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput001_StopAnalogActionMomentum( struct cppISteamInput_SteamInput001_StopAnalogActionMomentum_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->StopAnalogActionMomentum( params->inputHandle, params->eAction );
}

void cppISteamInput_SteamInput001_GetMotionData( struct cppISteamInput_SteamInput001_GetMotionData_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    *params->_ret = iface->GetMotionData( params->inputHandle );
}

void cppISteamInput_SteamInput001_TriggerVibration( struct cppISteamInput_SteamInput001_TriggerVibration_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerVibration( params->inputHandle, params->usLeftSpeed, params->usRightSpeed );
}

void cppISteamInput_SteamInput001_SetLEDColor( struct cppISteamInput_SteamInput001_SetLEDColor_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->SetLEDColor( params->inputHandle, params->nColorR, params->nColorG, params->nColorB, params->nFlags );
}

void cppISteamInput_SteamInput001_TriggerHapticPulse( struct cppISteamInput_SteamInput001_TriggerHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec );
}

void cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    iface->TriggerRepeatedHapticPulse( params->inputHandle, params->eTargetPad, params->usDurationMicroSec, params->usOffMicroSec, params->unRepeat, params->nFlags );
}

void cppISteamInput_SteamInput001_ShowBindingPanel( struct cppISteamInput_SteamInput001_ShowBindingPanel_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->ShowBindingPanel( params->inputHandle );
}

void cppISteamInput_SteamInput001_GetInputTypeForHandle( struct cppISteamInput_SteamInput001_GetInputTypeForHandle_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetInputTypeForHandle( params->inputHandle );
}

void cppISteamInput_SteamInput001_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput001_GetControllerForGamepadIndex_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetControllerForGamepadIndex( params->nIndex );
}

void cppISteamInput_SteamInput001_GetGamepadIndexForController( struct cppISteamInput_SteamInput001_GetGamepadIndexForController_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetGamepadIndexForController( params->ulinputHandle );
}

void cppISteamInput_SteamInput001_GetStringForXboxOrigin( struct cppISteamInput_SteamInput001_GetStringForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetStringForXboxOrigin( params->eOrigin );
}

void cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetActionOriginFromXboxOrigin( params->inputHandle, params->eOrigin );
}

void cppISteamInput_SteamInput001_TranslateActionOrigin( struct cppISteamInput_SteamInput001_TranslateActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->TranslateActionOrigin( params->eDestinationInputType, params->eSourceOrigin );
}

void cppISteamInput_SteamInput001_GetDeviceBindingRevision( struct cppISteamInput_SteamInput001_GetDeviceBindingRevision_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetDeviceBindingRevision( params->inputHandle, params->pMajor, params->pMinor );
}

void cppISteamInput_SteamInput001_GetRemotePlaySessionID( struct cppISteamInput_SteamInput001_GetRemotePlaySessionID_params *params )
{
    struct u_ISteamInput_SteamInput001 *iface = (struct u_ISteamInput_SteamInput001 *)params->linux_side;
    params->_ret = iface->GetRemotePlaySessionID( params->inputHandle );
}

