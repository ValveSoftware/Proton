#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRChaperone_IVRChaperone_003;
struct cppIVRChaperone_IVRChaperone_003_GetCalibrationState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRChaperone_IVRChaperone_003_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_003_GetCalibrationState_params *params );

struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize_params
{
    void *linux_side;
    bool _ret;
    float *pSizeX;
    float *pSizeZ;
};
extern void cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize_params *params );

struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *rect;
};
extern void cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect_params *params );

struct cppIVRChaperone_IVRChaperone_003_ReloadInfo_params
{
    void *linux_side;
};
extern void cppIVRChaperone_IVRChaperone_003_ReloadInfo( struct cppIVRChaperone_IVRChaperone_003_ReloadInfo_params *params );

struct cppIVRChaperone_IVRChaperone_003_SetSceneColor_params
{
    void *linux_side;
    HmdColor_t color;
};
extern void cppIVRChaperone_IVRChaperone_003_SetSceneColor( struct cppIVRChaperone_IVRChaperone_003_SetSceneColor_params *params );

struct cppIVRChaperone_IVRChaperone_003_GetBoundsColor_params
{
    void *linux_side;
    HmdColor_t *pOutputColorArray;
    int32_t nNumOutputColors;
    float flCollisionBoundsFadeDistance;
    HmdColor_t *pOutputCameraColor;
};
extern void cppIVRChaperone_IVRChaperone_003_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_003_GetBoundsColor_params *params );

struct cppIVRChaperone_IVRChaperone_003_AreBoundsVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRChaperone_IVRChaperone_003_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_AreBoundsVisible_params *params );

struct cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible_params
{
    void *linux_side;
    bool bForce;
};
extern void cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible_params *params );

#ifdef __cplusplus
}
#endif
