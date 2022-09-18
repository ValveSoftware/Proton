#version 460
layout(location = 0) in vec3 P;
layout(location = 1) in vec3 N;
layout(location = 2) in vec4 Cd;
layout(location = 3) in vec3 uv[8];
uniform int uTDInstanceIDOffset;
uniform int uTDNumInstances;
uniform float uTDAlphaTestVal;
#define TD_NUM_COLOR_BUFFERS 1
#define TD_NUM_LIGHTS 0
#define TD_NUM_SHADOWED_LIGHTS 0
#define TD_NUM_ENV_LIGHTS 0
#define TD_LIGHTS_ARRAY_SIZE 1
#define TD_ENV_LIGHTS_ARRAY_SIZE 1
#define TD_NUM_CAMERAS 1
struct TDLight
{
	vec4 position;
	vec3 direction;
	vec3 diffuse;
	vec4 nearFar;
	vec4 lightSize;
	vec4 misc;
	vec4 coneLookupScaleBias;
	vec4 attenScaleBiasRoll;
	mat4 shadowMapMatrix;
	mat4 shadowMapCamMatrix;
	vec4 shadowMapRes;
	mat4 projMapMatrix;
};
struct TDEnvLight
{
	vec3 color;
	mat3 rotate;
};
layout(std140) uniform TDLightBlock
{
	TDLight	uTDLights[TD_LIGHTS_ARRAY_SIZE];
};
layout(std140) uniform TDEnvLightBlock
{
	TDEnvLight	uTDEnvLights[TD_ENV_LIGHTS_ARRAY_SIZE];
};
layout(std430) readonly restrict buffer TDEnvLightBuffer
{
	vec3 shCoeffs[9];
} uTDEnvLightBuffers[TD_ENV_LIGHTS_ARRAY_SIZE];
struct TDPhongResult
{
	vec3 diffuse;
	vec3 specular;
	vec3 specular2;
	float shadowStrength;
};
struct TDPBRResult
{
	vec3 diffuse;
	vec3 specular;
	float shadowStrength;
};
struct TDMatrix
{
	mat4 world;
	mat4 worldInverse;
	mat4 worldCam;
	mat4 worldCamInverse;
	mat4 cam;
	mat4 camInverse;
	mat4 camProj;
	mat4 camProjInverse;
	mat4 proj;
	mat4 projInverse;
	mat4 worldCamProj;
	mat4 worldCamProjInverse;
	mat4 quadReproject;
	mat3 worldForNormals;
	mat3 camForNormals;
	mat3 worldCamForNormals;
};
layout(std140) uniform TDMatricesBlock {
	TDMatrix uTDMats[TD_NUM_CAMERAS];
};
struct TDCameraInfo
{
	vec4 nearFar;
	vec4 fog;
	vec4 fogColor;
	int renderTOPCameraIndex;
};
layout(std140) uniform TDCameraInfoBlock {
	TDCameraInfo uTDCamInfos[TD_NUM_CAMERAS];
};
struct TDGeneral
{
	vec4 ambientColor;
	vec4 nearFar;
	vec4 viewport;
	vec4 viewportRes;
	vec4 fog;
	vec4 fogColor;
};
layout(std140) uniform TDGeneralBlock {
	TDGeneral uTDGeneral;
};
layout (rgba8) uniform image2D mTD2DImageOutputs[1];
layout (rgba8) uniform image2DArray mTD2DArrayImageOutputs[1];
layout (rgba8) uniform image3D mTD3DImageOutputs[1];
layout (rgba8) uniform imageCube mTDCubeImageOutputs[1];

mat4 TDInstanceMat(int instanceID);
mat3 TDInstanceMat3(int instanceID);
vec3 TDInstanceTranslate(int instanceID);
bool TDInstanceActive(int instanceID);
mat3 TDInstanceRotateMat(int instanceID);
vec3 TDInstanceScale(int instanceID);
vec3 TDInstanceTexCoord(int instanceID, vec3 t);
vec4 TDInstanceColor(int instanceID, vec4 curColor);
vec4 TDInstanceCustomAttrib0(int instanceID);
vec4 TDInstanceCustomAttrib1(int instanceID);
vec4 TDInstanceCustomAttrib2(int instanceID);
vec4 TDInstanceCustomAttrib3(int instanceID);
vec4 TDInstanceCustomAttrib4(int instanceID);
vec4 TDInstanceCustomAttrib5(int instanceID);
vec4 TDInstanceCustomAttrib6(int instanceID);
vec4 TDInstanceCustomAttrib7(int instanceID);
vec4 TDInstanceCustomAttrib8(int instanceID);
vec4 TDInstanceCustomAttrib9(int instanceID);
vec4 TDInstanceCustomAttrib10(int instanceID);
vec4 TDInstanceCustomAttrib11(int instanceID);
uint TDInstanceTextureIndex(int instanceIndex);
vec4 TDInstanceTexture(uint texIndex, vec3 uv);
vec4 TDInstanceTexture(uint texIndex, vec2 uv);

vec4 TDDeform(vec4 pos);
vec4 TDDeform(vec3 pos);
vec4 TDDeform(int instanceID, vec3 pos);
vec3 TDDeformVec(vec3 v); 
vec3 TDDeformVec(int instanceID, vec3 v); 
vec3 TDDeformNorm(vec3 v); 
vec3 TDDeformNorm(int instanceID, vec3 v); 
vec4 TDSkinnedDeform(vec4 pos);
vec3 TDSkinnedDeformVec(vec3 vec);
vec3 TDSkinnedDeformNorm(vec3 vec);
vec4 TDInstanceDeform(vec4 pos);
vec3 TDInstanceDeformVec(vec3 vec);
vec3 TDInstanceDeformNorm(vec3 vec);
vec4 TDInstanceDeform(int instanceID, vec4 pos);
vec3 TDInstanceDeformVec(int instanceID, vec3 vec);
vec3 TDInstanceDeformNorm(int instanceID, vec3 vec);
vec3 TDFastDeformTangent(vec3 oldNorm, vec4 oldTangent, vec3 deformedNorm);
mat4 TDBoneMat(int boneIndex);
mat4 TDInstanceMat();
mat3 TDInstanceMat3();
vec3 TDInstanceTranslate();
bool TDInstanceActive();
mat3 TDInstanceRotateMat();
vec3 TDInstanceScale();
vec3 TDInstanceTexCoord(vec3 t);
vec4 TDInstanceColor(vec4 curColor);
vec4 TDPointColor();
#ifdef TD_PICKING_ACTIVE
out TDPickVertex {
	vec3 sopSpacePosition;
	vec3 camSpacePosition;
	vec3 worldSpacePosition;
	vec3 sopSpaceNormal;
	vec3 camSpaceNormal;
	vec3 worldSpaceNormal;
	vec3 uv[1];
	flat int pickId;
	flat int instanceId;
	vec4 color;
} oTDPickVert;
#define vTDPickVert oTDPickVert
#endif
vec4 iTDCamToProj(vec4 v, vec3 uv, int cameraIndex, bool applyPickMod)
{
	if (!TDInstanceActive())
		return vec4(2, 2, 2, 0);
	v = uTDMats[0].proj * v;
	return v;
}
vec4 iTDWorldToProj(vec4 v, vec3 uv, int cameraIndex, bool applyPickMod) {
	if (!TDInstanceActive())
		return vec4(2, 2, 2, 0);
	v = uTDMats[0].camProj * v;
	return v;
}
vec4 TDDeform(vec4 pos);
vec4 TDDeform(vec3 pos);
vec4 TDInstanceColor(vec4 curColor);
vec3 TDInstanceTexCoord(vec3 t);
int TDInstanceID() {
	return gl_InstanceID + uTDInstanceIDOffset;
}
int TDCameraIndex() {
	return 0;
}
vec3 TDUVUnwrapCoord() {
	return uv[0];
}
#ifdef TD_PICKING_ACTIVE
uniform int uTDPickId;
#endif
int TDPickID() {
#ifdef TD_PICKING_ACTIVE
	return uTDPickId;
#else
	return 0;
#endif
}
float iTDConvertPickId(int id) {
	id |= 1073741824;
	return intBitsToFloat(id);
}

	void TDWritePickingValues() {
#ifdef TD_PICKING_ACTIVE
   vec4 worldPos = TDDeform(P);
   vec4 camPos = uTDMats[TDCameraIndex()].cam * worldPos;
	oTDPickVert.pickId = TDPickID();
#endif
}
vec4 TDWorldToProj(vec4 v, vec3 uv)
{
	return iTDWorldToProj(v, uv, TDCameraIndex(), true);
}
vec4 TDWorldToProj(vec3 v, vec3 uv)
{
	return TDWorldToProj(vec4(v, 1.0), uv);
}
vec4 TDWorldToProj(vec4 v)
{
	return TDWorldToProj(v, vec3(0.0));
}
vec4 TDWorldToProj(vec3 v)
{
	return TDWorldToProj(vec4(v, 1.0));
}
vec4 TDPointColor() {
	return Cd;
}
