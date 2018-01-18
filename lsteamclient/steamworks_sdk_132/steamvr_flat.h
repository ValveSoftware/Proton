//====== Copyright (c) 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to user account information in Steam
//
//=============================================================================

#ifndef STEAMVRFLAT_H
#define STEAMVRFLAT_H
#ifdef _WIN32
#pragma once
#endif



S_API void SteamAPI_IHmd_GetWindowBounds(intptr_t instancePtr, int32_t * pnX, int32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
S_API void SteamAPI_IHmd_GetRecommendedRenderTargetSize(intptr_t instancePtr, uint32_t * pnWidth, uint32_t * pnHeight);
S_API void SteamAPI_IHmd_GetEyeOutputViewport(intptr_t instancePtr, vr::Hmd_Eye eEye, uint32_t * pnX, uint32_t * pnY, uint32_t * pnWidth, uint32_t * pnHeight);
S_API struct vr::HmdMatrix44_t SteamAPI_IHmd_GetProjectionMatrix(intptr_t instancePtr, vr::Hmd_Eye eEye, float fNearZ, float fFarZ, vr::GraphicsAPIConvention eProjType);
S_API void SteamAPI_IHmd_GetProjectionRaw(intptr_t instancePtr, vr::Hmd_Eye eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom);
S_API struct vr::DistortionCoordinates_t SteamAPI_IHmd_ComputeDistortion(intptr_t instancePtr, vr::Hmd_Eye eEye, float fU, float fV);
S_API struct vr::HmdMatrix34_t SteamAPI_IHmd_GetHeadFromEyePose(intptr_t instancePtr, vr::Hmd_Eye eEye);
S_API bool SteamAPI_IHmd_GetViewMatrix(intptr_t instancePtr, float fSecondsFromNow, struct vr::HmdMatrix44_t * pMatLeftView, struct vr::HmdMatrix44_t * pMatRightView, vr::HmdTrackingResult * peResult);
S_API int32_t SteamAPI_IHmd_GetD3D9AdapterIndex(intptr_t instancePtr);
S_API void SteamAPI_IHmd_GetDXGIOutputInfo(intptr_t instancePtr, int32_t * pnAdapterIndex, int32_t * pnAdapterOutputIndex);
S_API void SteamAPI_IHmd_AttachToWindow(intptr_t instancePtr, void * hWnd);
S_API bool SteamAPI_IHmd_GetTrackerFromHeadPose(intptr_t instancePtr, float fPredictedSecondsFromNow, struct vr::HmdMatrix34_t * pmPose, vr::HmdTrackingResult * peResult);
S_API bool SteamAPI_IHmd_GetLastTrackerFromHeadPose(intptr_t instancePtr, struct vr::HmdMatrix34_t * pmPose);
S_API bool SteamAPI_IHmd_WillDriftInYaw(intptr_t instancePtr);
S_API void SteamAPI_IHmd_ZeroTracker(intptr_t instancePtr);
S_API struct vr::HmdMatrix34_t SteamAPI_IHmd_GetTrackerZeroPose(intptr_t instancePtr);
S_API uint32_t SteamAPI_IHmd_GetDriverId(intptr_t instancePtr, char * pchBuffer, uint32_t unBufferLen);
S_API uint32_t SteamAPI_IHmd_GetDisplayId(intptr_t instancePtr, char * pchBuffer, uint32_t unBufferLen);
#endif // STEAMVRFLAT_H
