#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRHeadsetView_IVRHeadsetView_001;
struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params
{
    void *linux_side;
    uint32_t nWidth;
    uint32_t nHeight;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params
{
    void *linux_side;
    uint32_t eHeadsetViewMode;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params
{
    void *linux_side;
    bool bCropped;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params
{
    void *linux_side;
    float flStartPct;
    float flEndPct;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params *params );

struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params
{
    void *linux_side;
    float *pStartPct;
    float *pEndPct;
};
extern void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params *params );

#ifdef __cplusplus
}
#endif
