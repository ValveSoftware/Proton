#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRTrackedCamera_IVRTrackedCamera_001;
struct cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    char *pBuffer;
    uint32_t nBufferLen;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    uint32_t nVideoStreamFormat;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    uint32_t nVideoStreamFormat;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    bool bEnable;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming( struct cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params
{
    void *linux_side;
    float _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params
{
    void *linux_side;
    const CameraVideoStreamFrame_t *_ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    const CameraVideoStreamFrame_t *pFrameImage;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    bool bEnable;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    float flInputU;
    float flInputV;
    float *pflOutputU;
    float *pflOutputV;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params
{
    void *linux_side;
    bool _ret;
    uint32_t nDeviceIndex;
    float flWidthPixels;
    float flHeightPixels;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *params );

#ifdef __cplusplus
}
#endif
