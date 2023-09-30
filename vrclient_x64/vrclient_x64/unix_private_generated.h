/* This file is auto-generated, do not edit. */

struct u_IVRSystem_IVRSystem_003
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
    virtual bool AttachToWindow( void * ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual bool LoadRenderModel( const char *, u_RenderModel_t_090 * ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_090 * ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_090 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_090 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( const Compositor_OverlaySettings *, HmdVector2_t, HmdVector2_t, uint32_t, uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperone_IVRChaperone_002
{
#ifdef __cplusplus
    virtual uint32_t GetCalibrationState(  ) = 0;
    virtual bool GetSoftBoundsInfo( ChaperoneSoftBoundsInfo_t * ) = 0;
    virtual bool GetHardBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetSeatedBoundsInfo( ChaperoneSeatedBoundsInfo_t * ) = 0;
    virtual void ReloadInfo(  ) = 0;
    virtual void SetSceneColor( HmdColor_t ) = 0;
    virtual void GetBoundsColor( HmdColor_t *, int32_t ) = 0;
    virtual bool AreBoundsVisible(  ) = 0;
    virtual void ForceBoundsVisible( bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_005
{
#ifdef __cplusplus
    virtual uint32_t GetLastError( char *, uint32_t ) = 0;
    virtual void SetVSync( bool ) = 0;
    virtual bool GetVSync(  ) = 0;
    virtual void SetGamma( float ) = 0;
    virtual float GetGamma(  ) = 0;
    virtual void SetGraphicsDevice( uint32_t, void * ) = 0;
    virtual void WaitGetPoses( TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void Submit( uint32_t, void *, Compositor_TextureBounds * ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void GetOverlayDefaults( Compositor_OverlaySettings * ) = 0;
    virtual void SetOverlay( void *, Compositor_OverlaySettings * ) = 0;
    virtual void SetOverlayRaw( void *, uint32_t, uint32_t, uint32_t, Compositor_OverlaySettings * ) = 0;
    virtual void SetOverlayFromFile( const char *, Compositor_OverlaySettings * ) = 0;
    virtual void ClearOverlay(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_090 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual bool ComputeOverlayIntersection( const Compositor_OverlaySettings *, float, uint32_t, HmdVector3_t, HmdVector3_t, HmdVector2_t *, HmdVector3_t * ) = 0;
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_004
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
    virtual bool AttachToWindow( void * ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_092 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_092 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_006
{
#ifdef __cplusplus
    virtual uint32_t GetLastError( char *, uint32_t ) = 0;
    virtual void SetVSync( bool ) = 0;
    virtual bool GetVSync(  ) = 0;
    virtual void SetGamma( float ) = 0;
    virtual float GetGamma(  ) = 0;
    virtual void SetGraphicsDevice( uint32_t, void * ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, void *, VRTextureBounds_t * ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_090 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_001
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayVisibility( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayVisibility( uint64_t, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_092 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, void * ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual bool IsSystemOverlayVisible(  ) = 0;
    virtual bool IsActiveSystemOverlay( uint64_t ) = 0;
    virtual uint32_t SetSystemOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetSystemOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRRenderModels_IVRRenderModels_001
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, u_RenderModel_t_090 * ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_090 * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_005
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
    virtual bool AttachToWindow( void * ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_097 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_097 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_007
{
#ifdef __cplusplus
    virtual uint32_t GetLastError( char *, uint32_t ) = 0;
    virtual void SetVSync( bool ) = 0;
    virtual bool GetVSync(  ) = 0;
    virtual void SetGamma( float ) = 0;
    virtual float GetGamma(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, uint32_t, void *, const VRTextureBounds_t * ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_093 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_002
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_093 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, uint32_t, void * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRNotifications_IVRNotifications_001
{
#ifdef __cplusplus
    virtual uint32_t GetErrorString( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t CreateNotification( uint64_t, uint64_t, const char *, const char *, const char *, const u_NotificationBitmap *, uint32_t * ) = 0;
    virtual uint32_t DismissNotification( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_003
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_097 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, uint32_t, void * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_001
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetHomeApplication( char *, uint32_t ) = 0;
    virtual uint32_t SetHomeApplication( const char * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_004
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_097 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, uint32_t, void * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_006
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
    virtual bool AttachToWindow( void * ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_0910 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_0910 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSettings_IVRSettings_001
{
#ifdef __cplusplus
    virtual const char * GetSettingsErrorNameFromEnum( uint32_t ) = 0;
    virtual bool Sync( bool, uint32_t * ) = 0;
    virtual bool GetBool( const char *, const char *, bool, uint32_t * ) = 0;
    virtual void SetBool( const char *, const char *, bool, uint32_t * ) = 0;
    virtual int32_t GetInt32( const char *, const char *, int32_t, uint32_t * ) = 0;
    virtual void SetInt32( const char *, const char *, int32_t, uint32_t * ) = 0;
    virtual float GetFloat( const char *, const char *, float, uint32_t * ) = 0;
    virtual void SetFloat( const char *, const char *, float, uint32_t * ) = 0;
    virtual void GetString( const char *, const char *, char *, uint32_t, const char *, uint32_t * ) = 0;
    virtual void SetString( const char *, const char *, const char *, uint32_t * ) = 0;
    virtual void RemoveSection( const char *, uint32_t * ) = 0;
    virtual void RemoveKeyInSection( const char *, const char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_008
{
#ifdef __cplusplus
    virtual uint32_t GetLastError( char *, uint32_t ) = 0;
    virtual void SetVSync( bool ) = 0;
    virtual bool GetVSync(  ) = 0;
    virtual void SetGamma( float ) = 0;
    virtual float GetGamma(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, uint32_t, void *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_093 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual void SetSkyboxOverride( uint32_t, void *, void *, void *, void *, void *, void * ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_005
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0910 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, uint32_t, void * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_009
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_0912 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_0912 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_002
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperone_IVRChaperone_003
{
#ifdef __cplusplus
    virtual uint32_t GetCalibrationState(  ) = 0;
    virtual bool GetPlayAreaSize( float *, float * ) = 0;
    virtual bool GetPlayAreaRect( HmdQuad_t * ) = 0;
    virtual void ReloadInfo(  ) = 0;
    virtual void SetSceneColor( HmdColor_t ) = 0;
    virtual void GetBoundsColor( HmdColor_t *, int32_t, float, HmdColor_t * ) = 0;
    virtual bool AreBoundsVisible(  ) = 0;
    virtual void ForceBoundsVisible( bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperoneSetup_IVRChaperoneSetup_004
{
#ifdef __cplusplus
    virtual bool CommitWorkingCopy( uint32_t ) = 0;
    virtual void RevertWorkingCopy(  ) = 0;
    virtual bool GetWorkingPlayAreaSize( float *, float * ) = 0;
    virtual bool GetWorkingPlayAreaRect( HmdQuad_t * ) = 0;
    virtual bool GetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetLiveCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetWorkingSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool GetWorkingStandingZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingPlayAreaSize( float, float ) = 0;
    virtual void SetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void ReloadFromDisk( uint32_t ) = 0;
    virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingWallTagInfo( uint8_t *, uint32_t ) = 0;
    virtual bool GetLiveWallTagInfo( uint8_t *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_009
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0913 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRNotifications_IVRNotifications_002
{
#ifdef __cplusplus
    virtual uint32_t CreateNotification( uint64_t, uint64_t, uint32_t, const char *, uint32_t, const u_NotificationBitmap_t *, uint32_t * ) = 0;
    virtual uint32_t RemoveNotification( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_007
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0912 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRRenderModels_IVRRenderModels_002
{
#ifdef __cplusplus
    virtual bool LoadRenderModel( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual bool LoadTexture( int32_t, u_RenderModel_TextureMap_t_090 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_090 * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_001
{
#ifdef __cplusplus
    virtual bool HasCamera( uint32_t ) = 0;
    virtual bool GetCameraFirmwareDescription( uint32_t, char *, uint32_t ) = 0;
    virtual bool GetCameraFrameDimensions( uint32_t, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool SetCameraVideoStreamFormat( uint32_t, uint32_t ) = 0;
    virtual uint32_t GetCameraVideoStreamFormat( uint32_t ) = 0;
    virtual bool EnableCameraForStreaming( uint32_t, bool ) = 0;
    virtual bool StartVideoStream( uint32_t ) = 0;
    virtual bool StopVideoStream( uint32_t ) = 0;
    virtual bool IsVideoStreamActive( uint32_t ) = 0;
    virtual float GetVideoStreamElapsedTime( uint32_t ) = 0;
    virtual const u_CameraVideoStreamFrame_t_0914 * GetVideoStreamFrame( uint32_t ) = 0;
    virtual bool ReleaseVideoStreamFrame( uint32_t, const u_CameraVideoStreamFrame_t_0914 * ) = 0;
    virtual bool SetAutoExposure( uint32_t, bool ) = 0;
    virtual bool PauseVideoStream( uint32_t ) = 0;
    virtual bool ResumeVideoStream( uint32_t ) = 0;
    virtual bool IsVideoStreamPaused( uint32_t ) = 0;
    virtual bool GetCameraDistortion( uint32_t, float, float, float *, float * ) = 0;
    virtual bool GetCameraProjection( uint32_t, float, float, float, float, HmdMatrix44_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRExtendedDisplay_IVRExtendedDisplay_001
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_010
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_0914 * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_0914 *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
    virtual void PerformanceTestEnableCapture( bool ) = 0;
    virtual void PerformanceTestReportFidelityLevelChange( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_008
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0914 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_010
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0914 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_011
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_0918 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_0918 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
    virtual void PerformanceTestEnableCapture( bool ) = 0;
    virtual void PerformanceTestReportFidelityLevelChange( int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_003
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperoneSetup_IVRChaperoneSetup_005
{
#ifdef __cplusplus
    virtual bool CommitWorkingCopy( uint32_t ) = 0;
    virtual void RevertWorkingCopy(  ) = 0;
    virtual bool GetWorkingPlayAreaSize( float *, float * ) = 0;
    virtual bool GetWorkingPlayAreaRect( HmdQuad_t * ) = 0;
    virtual bool GetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetLiveCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetWorkingSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool GetWorkingStandingZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingPlayAreaSize( float, float ) = 0;
    virtual void SetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void ReloadFromDisk( uint32_t ) = 0;
    virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingCollisionBoundsTagsInfo( uint8_t *, uint32_t ) = 0;
    virtual bool GetLiveCollisionBoundsTagsInfo( uint8_t *, uint32_t * ) = 0;
    virtual bool SetWorkingPhysicalBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual bool GetLivePhysicalBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool ExportLiveToBuffer( char *, uint32_t * ) = 0;
    virtual bool ImportFromBufferToWorking( const char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_011
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0915 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_010
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0918 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRRenderModels_IVRRenderModels_004
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, u_RenderModel_TextureMap_t_090 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_090 * ) = 0;
    virtual uint32_t LoadTextureD3D11_Async( int32_t, void *, void ** ) = 0;
    virtual void FreeTextureD3D11( void * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_004
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual bool CancelApplicationLaunch( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
    virtual uint32_t LaunchInternalProcess( const char *, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_012
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0915 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_013
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0915 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_012
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_103 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_103 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_005
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchTemplateApplication( const char *, const char *, const u_AppOverrideKeys_t *, uint32_t ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual bool CancelApplicationLaunch( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
    virtual uint32_t LaunchInternalProcess( const char *, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_011
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0918 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRRenderModels_IVRRenderModels_005
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, u_RenderModel_TextureMap_t_090 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_090 * ) = 0;
    virtual uint32_t LoadTextureD3D11_Async( int32_t, void *, void ** ) = 0;
    virtual uint32_t LoadIntoTextureD3D11_Async( int32_t, void * ) = 0;
    virtual void FreeTextureD3D11( void * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
    virtual uint32_t GetRenderModelThumbnailURL( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetRenderModelOriginalPath( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetRenderModelErrorNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_014
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0920 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_015
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_0920 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t RequestScreenshot( uint32_t, const char *, const char * ) = 0;
    virtual uint32_t GetCurrentScreenshotType(  ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_012
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_101 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_002
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinisics( uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, void ** ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( void * ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( void *, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_100 *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_003
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_100 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, u_CameraVideoStreamFrameHeader_t_100 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, u_CameraVideoStreamFrameHeader_t_100 *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRScreenshots_IVRScreenshots_001
{
#ifdef __cplusplus
    virtual uint32_t RequestScreenshot( uint32_t *, uint32_t, const char *, const char * ) = 0;
    virtual uint32_t HookScreenshot( uint32_t *, int32_t ) = 0;
    virtual uint32_t GetScreenshotPropertyType( uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetScreenshotPropertyFilename( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t UpdateScreenshotProgress( uint32_t, float ) = 0;
    virtual uint32_t TakeStereoScreenshot( uint32_t *, const char *, const char * ) = 0;
    virtual uint32_t SubmitScreenshot( uint32_t, uint32_t, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_006
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchTemplateApplication( const char *, const char *, const u_AppOverrideKeys_t *, uint32_t ) = 0;
    virtual uint32_t LaunchApplicationFromMimeType( const char *, const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual bool CancelApplicationLaunch( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t SetDefaultApplicationForMimeType( const char *, const char * ) = 0;
    virtual bool GetDefaultApplicationForMimeType( const char *, char *, uint32_t ) = 0;
    virtual bool GetApplicationSupportedMimeTypes( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationsThatSupportMimeType( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationLaunchArguments( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetTransitionState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetApplicationsTransitionStateNameFromEnum( uint32_t ) = 0;
    virtual bool IsQuitUserPromptRequested(  ) = 0;
    virtual uint32_t LaunchInternalProcess( const char *, const char *, const char * ) = 0;
    virtual uint32_t GetCurrentSceneProcessId(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_016
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_102 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_013
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_103 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRResources_IVRResources_001
{
#ifdef __cplusplus
    virtual uint32_t LoadSharedResource( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetResourceFullPath( const char *, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSettings_IVRSettings_002
{
#ifdef __cplusplus
    virtual const char * GetSettingsErrorNameFromEnum( uint32_t ) = 0;
    virtual bool Sync( bool, uint32_t * ) = 0;
    virtual void SetBool( const char *, const char *, bool, uint32_t * ) = 0;
    virtual void SetInt32( const char *, const char *, int32_t, uint32_t * ) = 0;
    virtual void SetFloat( const char *, const char *, float, uint32_t * ) = 0;
    virtual void SetString( const char *, const char *, const char *, uint32_t * ) = 0;
    virtual bool GetBool( const char *, const char *, uint32_t * ) = 0;
    virtual int32_t GetInt32( const char *, const char *, uint32_t * ) = 0;
    virtual float GetFloat( const char *, const char *, uint32_t * ) = 0;
    virtual void GetString( const char *, const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual void RemoveSection( const char *, uint32_t * ) = 0;
    virtual void RemoveKeyInSection( const char *, const char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_014
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_103 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_103 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_017
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRClientCore_IVRClientCore_002
{
#ifdef __cplusplus
    virtual uint32_t Init( uint32_t ) = 0;
    virtual void Cleanup(  ) = 0;
    virtual uint32_t IsInterfaceVersionValid( const char * ) = 0;
    virtual void * GetGenericInterface( const char *, uint32_t * ) = 0;
    virtual bool BIsHmdPresent(  ) = 0;
    virtual const char * GetEnglishStringForHmdError( uint32_t ) = 0;
    virtual const char * GetIDForVRInitError( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_018
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_015
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_106 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_106 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_019
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_014
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_106 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_020
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_016
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_106 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_016
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_106 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_106 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRDriverManager_IVRDriverManager_001
{
#ifdef __cplusplus
    virtual uint32_t GetDriverCount(  ) = 0;
    virtual uint32_t GetDriverName( uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetDriverHandle( const char * ) = 0;
    virtual bool IsEnabled( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_017
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_1011 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_1011 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_021
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_103a *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( bool ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRClientCore_IVRClientCore_003
{
#ifdef __cplusplus
    virtual uint32_t Init( uint32_t, const char * ) = 0;
    virtual void Cleanup(  ) = 0;
    virtual uint32_t IsInterfaceVersionValid( const char * ) = 0;
    virtual void * GetGenericInterface( const char *, uint32_t * ) = 0;
    virtual bool BIsHmdPresent(  ) = 0;
    virtual const char * GetEnglishStringForHmdError( uint32_t ) = 0;
    virtual const char * GetIDForVRInitError( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_022
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( uint32_t ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
    virtual bool IsMotionSmoothingEnabled(  ) = 0;
    virtual bool IsMotionSmoothingSupported(  ) = 0;
    virtual bool IsCurrentSceneFocusAppLoading(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_017
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1011 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_019
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetArrayTrackedDeviceProperty( uint32_t, uint32_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_1322 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool IsInputAvailable(  ) = 0;
    virtual bool IsSteamVRDrawingControllers(  ) = 0;
    virtual bool ShouldApplicationPause(  ) = 0;
    virtual bool ShouldApplicationReduceRenderingWork(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_018
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1016 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_003
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1015 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, uint32_t, float, u_InputSkeletonActionData_t *, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalActionDataCompressed( uint64_t, uint32_t, float, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t UncompressSkeletalActionData( void *, uint32_t, uint32_t *, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1015 *, uint32_t, uint32_t, uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRIOBuffer_IVRIOBuffer_001
{
#ifdef __cplusplus
    virtual uint32_t Open( const char *, uint32_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t Close( uint64_t ) = 0;
    virtual uint32_t Read( uint64_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t Write( uint64_t, void *, uint32_t ) = 0;
    virtual uint64_t PropertyContainer( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRRenderModels_IVRRenderModels_006
{
#ifdef __cplusplus
    virtual uint32_t LoadRenderModel_Async( const char *, u_RenderModel_t_0912 ** ) = 0;
    virtual void FreeRenderModel( u_RenderModel_t_0912 * ) = 0;
    virtual uint32_t LoadTexture_Async( int32_t, u_RenderModel_TextureMap_t_1237 ** ) = 0;
    virtual void FreeTexture( u_RenderModel_TextureMap_t_1237 * ) = 0;
    virtual uint32_t LoadTextureD3D11_Async( int32_t, void *, void ** ) = 0;
    virtual uint32_t LoadIntoTextureD3D11_Async( int32_t, void * ) = 0;
    virtual void FreeTextureD3D11( void * ) = 0;
    virtual uint32_t GetRenderModelName( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetRenderModelCount(  ) = 0;
    virtual uint32_t GetComponentCount( const char * ) = 0;
    virtual uint32_t GetComponentName( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint64_t GetComponentButtonMask( const char *, const char * ) = 0;
    virtual uint32_t GetComponentRenderModelName( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool GetComponentStateForDevicePath( const char *, const char *, uint64_t, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool GetComponentState( const char *, const char *, const u_VRControllerState001_t *, const RenderModel_ControllerMode_State_t *, RenderModel_ComponentState_t * ) = 0;
    virtual bool RenderModelHasComponent( const char *, const char * ) = 0;
    virtual uint32_t GetRenderModelThumbnailURL( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetRenderModelOriginalPath( const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetRenderModelErrorNameFromEnum( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_004
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_1016 *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, uint32_t, void *, uint32_t, uint32_t *, uint64_t ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( void *, uint32_t, uint32_t *, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_004
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperoneSetup_IVRChaperoneSetup_006
{
#ifdef __cplusplus
    virtual bool CommitWorkingCopy( uint32_t ) = 0;
    virtual void RevertWorkingCopy(  ) = 0;
    virtual bool GetWorkingPlayAreaSize( float *, float * ) = 0;
    virtual bool GetWorkingPlayAreaRect( HmdQuad_t * ) = 0;
    virtual bool GetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetLiveCollisionBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetWorkingSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool GetWorkingStandingZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual void SetWorkingPlayAreaSize( float, float ) = 0;
    virtual void SetWorkingCollisionBoundsInfo( HmdQuad_t *, uint32_t ) = 0;
    virtual void SetWorkingPerimeter( HmdVector2_t *, uint32_t ) = 0;
    virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t * ) = 0;
    virtual void ReloadFromDisk( uint32_t ) = 0;
    virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t * ) = 0;
    virtual bool ExportLiveToBuffer( char *, uint32_t * ) = 0;
    virtual bool ImportFromBufferToWorking( const char *, uint32_t ) = 0;
    virtual void ShowWorkingSetPreview(  ) = 0;
    virtual void HideWorkingSetPreview(  ) = 0;
    virtual void RoomSetupStarting(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_019
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_005
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_005
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionData( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_113b *, uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRIOBuffer_IVRIOBuffer_002
{
#ifdef __cplusplus
    virtual uint32_t Open( const char *, uint32_t, uint32_t, uint32_t, uint64_t * ) = 0;
    virtual uint32_t Close( uint64_t ) = 0;
    virtual uint32_t Read( uint64_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t Write( uint64_t, void *, uint32_t ) = 0;
    virtual uint64_t PropertyContainer( uint64_t ) = 0;
    virtual bool HasReaders( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_006
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataRelativeToNow( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataForNextFrame( uint64_t, uint32_t, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_113b *, uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, uint32_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_020
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetArrayTrackedDeviceProperty( uint32_t, uint32_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_1322 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool IsInputAvailable(  ) = 0;
    virtual bool IsSteamVRDrawingControllers(  ) = 0;
    virtual bool ShouldApplicationPause(  ) = 0;
    virtual bool ShouldApplicationReduceRenderingWork(  ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
    virtual uint32_t GetAppContainerFilePaths( char *, uint32_t ) = 0;
    virtual const char * GetRuntimeVersion(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_007
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataRelativeToNow( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataForNextFrame( uint64_t, uint32_t, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_113b *, uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, uint32_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t GetActionBindingInfo( uint64_t, InputBindingInfo_t_1517 *, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
    virtual uint32_t OpenBindingUI( const char *, uint64_t, uint64_t, bool ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_020
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint64_t GetGamepadFocusOverlay(  ) = 0;
    virtual uint32_t SetGamepadFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayNeighbor( uint32_t, uint64_t, uint64_t ) = 0;
    virtual uint32_t MoveGamepadFocusToNeighbor( uint32_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRTrackedCamera_IVRTrackedCamera_006
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
    virtual void SetCameraTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetCameraTrackingSpace(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_021
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetArrayTrackedDeviceProperty( uint32_t, uint32_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_11030 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_11030 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool IsInputAvailable(  ) = 0;
    virtual bool IsSteamVRDrawingControllers(  ) = 0;
    virtual bool ShouldApplicationPause(  ) = 0;
    virtual bool ShouldApplicationReduceRenderingWork(  ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual uint32_t GetAppContainerFilePaths( char *, uint32_t ) = 0;
    virtual const char * GetRuntimeVersion(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRApplications_IVRApplications_007
{
#ifdef __cplusplus
    virtual uint32_t AddApplicationManifest( const char *, bool ) = 0;
    virtual uint32_t RemoveApplicationManifest( const char * ) = 0;
    virtual bool IsApplicationInstalled( const char * ) = 0;
    virtual uint32_t GetApplicationCount(  ) = 0;
    virtual uint32_t GetApplicationKeyByIndex( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationKeyByProcessId( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t LaunchApplication( const char * ) = 0;
    virtual uint32_t LaunchTemplateApplication( const char *, const char *, const u_AppOverrideKeys_t *, uint32_t ) = 0;
    virtual uint32_t LaunchApplicationFromMimeType( const char *, const char * ) = 0;
    virtual uint32_t LaunchDashboardOverlay( const char * ) = 0;
    virtual bool CancelApplicationLaunch( const char * ) = 0;
    virtual uint32_t IdentifyApplication( uint32_t, const char * ) = 0;
    virtual uint32_t GetApplicationProcessId( const char * ) = 0;
    virtual const char * GetApplicationsErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t GetApplicationPropertyString( const char *, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual bool GetApplicationPropertyBool( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetApplicationPropertyUint64( const char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetApplicationAutoLaunch( const char *, bool ) = 0;
    virtual bool GetApplicationAutoLaunch( const char * ) = 0;
    virtual uint32_t SetDefaultApplicationForMimeType( const char *, const char * ) = 0;
    virtual bool GetDefaultApplicationForMimeType( const char *, char *, uint32_t ) = 0;
    virtual bool GetApplicationSupportedMimeTypes( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationsThatSupportMimeType( const char *, char *, uint32_t ) = 0;
    virtual uint32_t GetApplicationLaunchArguments( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetStartingApplication( char *, uint32_t ) = 0;
    virtual uint32_t GetSceneApplicationState(  ) = 0;
    virtual uint32_t PerformApplicationPrelaunchCheck( const char * ) = 0;
    virtual const char * GetSceneApplicationStateNameFromEnum( uint32_t ) = 0;
    virtual uint32_t LaunchInternalProcess( const char *, const char *, const char * ) = 0;
    virtual uint32_t GetCurrentSceneProcessId(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_021
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSettings_IVRSettings_003
{
#ifdef __cplusplus
    virtual const char * GetSettingsErrorNameFromEnum( uint32_t ) = 0;
    virtual void SetBool( const char *, const char *, bool, uint32_t * ) = 0;
    virtual void SetInt32( const char *, const char *, int32_t, uint32_t * ) = 0;
    virtual void SetFloat( const char *, const char *, float, uint32_t * ) = 0;
    virtual void SetString( const char *, const char *, const char *, uint32_t * ) = 0;
    virtual bool GetBool( const char *, const char *, uint32_t * ) = 0;
    virtual int32_t GetInt32( const char *, const char *, uint32_t * ) = 0;
    virtual float GetFloat( const char *, const char *, uint32_t * ) = 0;
    virtual void GetString( const char *, const char *, char *, uint32_t, uint32_t * ) = 0;
    virtual void RemoveSection( const char *, uint32_t * ) = 0;
    virtual void RemoveKeyInSection( const char *, const char *, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_024
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( uint32_t ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
    virtual bool IsMotionSmoothingEnabled(  ) = 0;
    virtual bool IsMotionSmoothingSupported(  ) = 0;
    virtual bool IsCurrentSceneFocusAppLoading(  ) = 0;
    virtual uint32_t SetStageOverride_Async( const char *, const HmdMatrix34_t *, const Compositor_StageRenderSettings *, uint32_t ) = 0;
    virtual void ClearStageOverride(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_022
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1322 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_026
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_100 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( uint32_t ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
    virtual bool IsMotionSmoothingEnabled(  ) = 0;
    virtual bool IsMotionSmoothingSupported(  ) = 0;
    virtual bool IsCurrentSceneFocusAppLoading(  ) = 0;
    virtual uint32_t SetStageOverride_Async( const char *, const HmdMatrix34_t *, const Compositor_StageRenderSettings *, uint32_t ) = 0;
    virtual void ClearStageOverride(  ) = 0;
    virtual bool GetCompositorBenchmarkResults( Compositor_BenchmarkResults *, uint32_t ) = 0;
    virtual uint32_t GetLastPosePredictionIDs( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetPosesForFrame( uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRHeadsetView_IVRHeadsetView_001
{
#ifdef __cplusplus
    virtual void SetHeadsetViewSize( uint32_t, uint32_t ) = 0;
    virtual void GetHeadsetViewSize( uint32_t *, uint32_t * ) = 0;
    virtual void SetHeadsetViewMode( uint32_t ) = 0;
    virtual uint32_t GetHeadsetViewMode(  ) = 0;
    virtual void SetHeadsetViewCropped( bool ) = 0;
    virtual bool GetHeadsetViewCropped(  ) = 0;
    virtual float GetHeadsetViewAspectRatio(  ) = 0;
    virtual void SetHeadsetViewBlendRange( float, float ) = 0;
    virtual void GetHeadsetViewBlendRange( float *, float * ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_024
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_11030 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlayView_IVROverlayView_003
{
#ifdef __cplusplus
    virtual uint32_t AcquireOverlayView( uint64_t, u_VRNativeDevice_t *, u_VROverlayView_t *, uint32_t ) = 0;
    virtual uint32_t ReleaseOverlayView( u_VROverlayView_t * ) = 0;
    virtual void PostOverlayEvent( uint64_t, const u_VREvent_t_1168 * ) = 0;
    virtual bool IsViewingPermitted( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRInput_IVRInput_010
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t_1016 *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, u_InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, u_InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataRelativeToNow( uint64_t, uint32_t, float, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataForNextFrame( uint64_t, uint32_t, u_InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, u_InputSkeletalActionData_t_113b *, uint32_t ) = 0;
    virtual uint32_t GetDominantHand( uint32_t * ) = 0;
    virtual uint32_t SetDominantHand( uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, uint32_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, u_InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t GetActionBindingInfo( uint64_t, InputBindingInfo_t_11030 *, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t_1016 *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetComponentStateForBinding( const char *, const char *, const InputBindingInfo_t_11030 *, uint32_t, uint32_t, RenderModel_ComponentState_t * ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
    virtual uint32_t OpenBindingUI( const char *, uint64_t, uint64_t, bool ) = 0;
    virtual uint32_t GetBindingVariant( uint64_t, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRControlPanel_IVRControlPanel_006
{
#ifdef __cplusplus
    virtual uint32_t undoc1(  ) = 0;
    virtual uint32_t undoc2( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t undoc3( const char * ) = 0;
    virtual uint32_t undoc4( const char * ) = 0;
    virtual uint32_t undoc5( const char *, uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t undoc6( const char *, const char *, char *, uint32_t ) = 0;
    virtual uint32_t undoc7( const char *, const char *, char *, uint32_t ) = 0;
    virtual bool undoc8( uint32_t ) = 0;
    virtual void undoc9(  ) = 0;
    virtual void undoc10(  ) = 0;
    virtual bool undoc11( uint32_t ) = 0;
    virtual void undoc12(  ) = 0;
    virtual void undoc13( uint32_t ) = 0;
    virtual void undoc14( uint32_t ) = 0;
    virtual uint32_t undoc15(  ) = 0;
    virtual void undoc16( bool ) = 0;
    virtual bool undoc17(  ) = 0;
    virtual uint32_t undoc18(  ) = 0;
    virtual void undoc19( bool ) = 0;
    virtual bool undoc20(  ) = 0;
    virtual uint32_t undoc21(  ) = 0;
    virtual void undoc22( uint64_t, const char *, uint32_t, uint32_t, const char * ) = 0;
    virtual bool undoc23( const char * ) = 0;
    virtual bool undoc24(  ) = 0;
    virtual bool undoc25( bool ) = 0;
    virtual uint64_t undoc26(  ) = 0;
    virtual uint32_t undoc27( const char * ) = 0;
    virtual void undoc28( uint64_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRMailbox_IVRMailbox_001
{
#ifdef __cplusplus
    virtual uint32_t undoc1( const char *, uint64_t * ) = 0;
    virtual uint32_t undoc2( uint64_t ) = 0;
    virtual uint32_t undoc3( uint64_t, const char *, const char * ) = 0;
    virtual uint32_t undoc4( uint64_t, char *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

struct u_IVRSystem_IVRSystem_022
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetArrayTrackedDeviceProperty( uint32_t, uint32_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_1168 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_1168 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool IsInputAvailable(  ) = 0;
    virtual bool IsSteamVRDrawingControllers(  ) = 0;
    virtual bool ShouldApplicationPause(  ) = 0;
    virtual bool ShouldApplicationReduceRenderingWork(  ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual uint32_t GetAppContainerFilePaths( char *, uint32_t ) = 0;
    virtual const char * GetRuntimeVersion(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVRChaperone_IVRChaperone_004
{
#ifdef __cplusplus
    virtual uint32_t GetCalibrationState(  ) = 0;
    virtual bool GetPlayAreaSize( float *, float * ) = 0;
    virtual bool GetPlayAreaRect( HmdQuad_t * ) = 0;
    virtual void ReloadInfo(  ) = 0;
    virtual void SetSceneColor( HmdColor_t ) = 0;
    virtual void GetBoundsColor( HmdColor_t *, int32_t, float, HmdColor_t * ) = 0;
    virtual bool AreBoundsVisible(  ) = 0;
    virtual void ForceBoundsVisible( bool ) = 0;
    virtual void ResetZeroPose( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVRCompositor_IVRCompositor_027
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoseForTrackedDeviceIndex( uint32_t, TrackedDevicePose_t *, TrackedDevicePose_t * ) = 0;
    virtual uint32_t Submit( uint32_t, const u_Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual uint32_t GetFrameTimings( u_Compositor_FrameTiming_1017 *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void GetCumulativeStats( Compositor_CumulativeStats_1267 *, uint32_t ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual HmdColor_t GetCurrentFadeColor( bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual float GetCurrentGridAlpha(  ) = 0;
    virtual uint32_t SetSkyboxOverride( const u_Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
    virtual bool ShouldAppRenderWithLowResources(  ) = 0;
    virtual void ForceInterleavedReprojectionOn( bool ) = 0;
    virtual void ForceReconnectProcess(  ) = 0;
    virtual void SuspendRendering( bool ) = 0;
    virtual uint32_t GetMirrorTextureD3D11( uint32_t, void *, void ** ) = 0;
    virtual void ReleaseMirrorTextureD3D11( void * ) = 0;
    virtual uint32_t GetMirrorTextureGL( uint32_t, uint32_t *, void ** ) = 0;
    virtual bool ReleaseSharedGLTexture( uint32_t, void * ) = 0;
    virtual void LockGLSharedTextureForAccess( void * ) = 0;
    virtual void UnlockGLSharedTextureForAccess( void * ) = 0;
    virtual uint32_t GetVulkanInstanceExtensionsRequired( char *, uint32_t ) = 0;
    virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *, char *, uint32_t ) = 0;
    virtual void SetExplicitTimingMode( uint32_t ) = 0;
    virtual uint32_t SubmitExplicitTimingData(  ) = 0;
    virtual bool IsMotionSmoothingEnabled(  ) = 0;
    virtual bool IsMotionSmoothingSupported(  ) = 0;
    virtual bool IsCurrentSceneFocusAppLoading(  ) = 0;
    virtual uint32_t SetStageOverride_Async( const char *, const HmdMatrix34_t *, const Compositor_StageRenderSettings *, uint32_t ) = 0;
    virtual void ClearStageOverride(  ) = 0;
    virtual bool GetCompositorBenchmarkResults( Compositor_BenchmarkResults *, uint32_t ) = 0;
    virtual uint32_t GetLastPosePredictionIDs( uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetPosesForFrame( uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_025
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayTransformProjection( uint64_t, uint32_t, const HmdMatrix34_t *, const VROverlayProjection_t *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1168 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_026
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayPreCurvePitch( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayPreCurvePitch( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayTransformProjection( uint64_t, uint32_t, const HmdMatrix34_t *, const VROverlayProjection_t *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual uint32_t WaitFrameSync( uint32_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1168 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

struct u_IVROverlay_IVROverlay_027
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayPreCurvePitch( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayPreCurvePitch( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t SetOverlayTransformCursor( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t GetOverlayTransformCursor( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayTransformProjection( uint64_t, uint32_t, const HmdMatrix34_t *, const VROverlayProjection_t *, uint32_t ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual uint32_t WaitFrameSync( uint32_t ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_1168 *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t TriggerLaserMouseHapticVibration( uint64_t, float, float, float ) = 0;
    virtual uint32_t SetOverlayCursor( uint64_t, uint64_t ) = 0;
    virtual uint32_t SetOverlayCursorPositionOverride( uint64_t, const HmdVector2_t * ) = 0;
    virtual uint32_t ClearOverlayCursorPositionOverride( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, uint32_t, const char *, uint32_t, const char *, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};


