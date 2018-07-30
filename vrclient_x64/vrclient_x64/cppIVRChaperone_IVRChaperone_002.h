#ifdef __cplusplus
extern "C" {
#endif
extern ChaperoneCalibrationState cppIVRChaperone_IVRChaperone_002_GetCalibrationState(void *);
extern bool cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo(void *, ChaperoneSoftBoundsInfo_t *);
extern bool cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo(void *, HmdQuad_t *, uint32_t *);
extern bool cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo(void *, ChaperoneSeatedBoundsInfo_t *);
extern void cppIVRChaperone_IVRChaperone_002_ReloadInfo(void *);
extern void cppIVRChaperone_IVRChaperone_002_SetSceneColor(void *, HmdColor_t);
extern void cppIVRChaperone_IVRChaperone_002_GetBoundsColor(void *, HmdColor_t *, int);
extern bool cppIVRChaperone_IVRChaperone_002_AreBoundsVisible(void *);
extern void cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible(void *, bool);
#ifdef __cplusplus
}
#endif
