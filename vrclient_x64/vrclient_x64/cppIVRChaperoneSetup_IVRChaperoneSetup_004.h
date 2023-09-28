#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRChaperoneSetup_IVRChaperoneSetup_004;
struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params
{
    void *linux_side;
    bool _ret;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params
{
    void *linux_side;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params
{
    void *linux_side;
    bool _ret;
    float *pSizeX;
    float *pSizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *rect;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params
{
    void *linux_side;
    bool _ret;
    HmdQuad_t *pQuadsBuffer;
    uint32_t *punQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params
{
    void *linux_side;
    float sizeX;
    float sizeZ;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params
{
    void *linux_side;
    HmdQuad_t *pQuadsBuffer;
    uint32_t unQuadsCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params
{
    void *linux_side;
    uint32_t configFile;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params
{
    void *linux_side;
    bool _ret;
    HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params
{
    void *linux_side;
    uint8_t *pTagsBuffer;
    uint32_t unTagCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params *params );

struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params
{
    void *linux_side;
    bool _ret;
    uint8_t *pTagsBuffer;
    uint32_t *punTagCount;
};
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo( struct cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params *params );

#ifdef __cplusplus
}
#endif
