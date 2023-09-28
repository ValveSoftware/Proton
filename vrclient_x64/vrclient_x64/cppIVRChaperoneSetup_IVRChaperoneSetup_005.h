#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRChaperoneSetup_IVRChaperoneSetup_005;
struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params
{
    void *linux_side;
    bool _ret;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    bool _ret;
    float *pSizeX;
    float *pSizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *rect;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params
{
    void *linux_side;
    uint8_t *pTagsBuffer;
    uint32_t unTagCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params
{
    void *linux_side;
    bool _ret;
    uint8_t *pTagsBuffer;
    uint32_t *punTagCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params
{
    void *linux_side;
    bool _ret;
    char *pBuffer;
    uint32_t *pnBufferLength;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params
{
    void *linux_side;
    bool _ret;
    const char *pBuffer;
    uint32_t nImportFlags;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking( struct cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params *params );

#ifdef __cplusplus
}
#endif
