#ifdef __cplusplus
extern "C" {
#endif
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(void *, EChaperoneConfigFile);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(void *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(void *, float *, float *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(void *, HmdQuad_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(void *, float, float);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(void *, EChaperoneConfigFile);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(void *, uint8_t *, uint32_t);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(void *, uint8_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(void *, HmdQuad_t *, uint32_t);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(void *, char *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(void *, const char *, uint32_t);
#ifdef __cplusplus
}
#endif
