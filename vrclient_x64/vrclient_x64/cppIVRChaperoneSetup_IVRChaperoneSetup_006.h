#ifdef __cplusplus
extern "C" {
#endif
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(void *, EChaperoneConfigFile);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(void *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(void *, float *, float *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(void *, HmdQuad_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(void *, float, float);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(void *, HmdQuad_t *, uint32_t);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(void *, HmdVector2_t *, uint32_t);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(void *, EChaperoneConfigFile);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(void *, HmdMatrix34_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(void *, char *, uint32_t *);
extern bool cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(void *, const char *, uint32_t);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(void *);
extern void cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(void *);
#ifdef __cplusplus
}
#endif
