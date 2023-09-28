#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRChaperone_IVRChaperone_002;
struct cppIVRChaperone_IVRChaperone_002_GetCalibrationState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRChaperone_IVRChaperone_002_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_002_GetCalibrationState_params *params );

struct cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    ChaperoneSoftBoundsInfo_t *pInfo;
};
extern void cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *params );

struct cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *params );

struct cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    ChaperoneSeatedBoundsInfo_t *pInfo;
};
extern void cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *params );

struct cppIVRChaperone_IVRChaperone_002_ReloadInfo_params
{
    void *linux_side;
};
extern void cppIVRChaperone_IVRChaperone_002_ReloadInfo( struct cppIVRChaperone_IVRChaperone_002_ReloadInfo_params *params );

struct cppIVRChaperone_IVRChaperone_002_SetSceneColor_params
{
    void *linux_side;
    HmdColor_t color;
};
extern void cppIVRChaperone_IVRChaperone_002_SetSceneColor( struct cppIVRChaperone_IVRChaperone_002_SetSceneColor_params *params );

struct cppIVRChaperone_IVRChaperone_002_GetBoundsColor_params
{
    void *linux_side;
    HmdColor_t *pOutputColorArray;
    int32_t nNumOutputColors;
};
extern void cppIVRChaperone_IVRChaperone_002_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_002_GetBoundsColor_params *params );

struct cppIVRChaperone_IVRChaperone_002_AreBoundsVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRChaperone_IVRChaperone_002_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_AreBoundsVisible_params *params );

struct cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible_params
{
    void *linux_side;
    bool bForce;
};
extern void cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *params );

#ifdef __cplusplus
}
#endif
