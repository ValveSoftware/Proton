#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eCameraError;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    bool *pHasCamera;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t nCameraIndex;
    uint32_t eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint64_t *pHandle;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nDeviceIndex;
    uint32_t eFrameType;
    VRTextureBounds_t *pTextureBounds;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
    winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t eFrameType;
    uint32_t *pglTextureId;
    winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader;
    uint32_t nFrameHeaderSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hTrackedCamera;
    uint32_t glTextureId;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace_params
{
    void *linux_side;
    uint32_t eUniverse;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace( struct cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace_params *params );

#ifdef __cplusplus
}
#endif
