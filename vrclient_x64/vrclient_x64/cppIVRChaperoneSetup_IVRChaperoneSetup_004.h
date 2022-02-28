#ifdef __cplusplus
extern "C" {
#endif
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(void *, EChaperoneConfigFile);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(void *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(void *, float *, float *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(void *, HmdQuad_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(void *, float, float);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(void *, EChaperoneConfigFile);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(void *, uint8_t *, uint32_t);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(void *, uint8_t *, uint32_t *);
#ifdef __cplusplus
}
#endif
