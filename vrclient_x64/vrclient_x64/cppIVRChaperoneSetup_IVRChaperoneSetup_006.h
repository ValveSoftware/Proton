#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRChaperoneSetup_IVRChaperoneSetup_006;
struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params
{
    void *linux_side;
    bool _ret;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    bool _ret;
    float *pSizeX;
    float *pSizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *rect;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params
{
    void *linux_side;
    HmdVector2_t *pPointBuffer;
    uint32_t unPointCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params
{
    void *linux_side;
    bool _ret;
    char *pBuffer;
    uint32_t *pnBufferLength;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params
{
    void *linux_side;
    bool _ret;
    const char *pBuffer;
    uint32_t nImportFlags;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting( struct cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params *params );

#ifdef __cplusplus
}
#endif
