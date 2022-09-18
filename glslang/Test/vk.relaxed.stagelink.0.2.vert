#version 460
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

layout(binding = 15) uniform samplerBuffer sTDInstanceT;
layout(binding = 16) uniform samplerBuffer sTDInstanceTexCoord;
layout(binding = 17) uniform samplerBuffer sTDInstanceColor;
#define TD_NUM_BONES 0
vec4 TDWorldToProj(vec4 v);
vec4 TDWorldToProj(vec3 v);
vec4 TDWorldToProj(vec4 v, vec3 uv);
vec4 TDWorldToProj(vec3 v, vec3 uv);
int TDPickID();
int TDInstanceID();
int TDCameraIndex();
vec3 TDUVUnwrapCoord();
vec3 TDInstanceTexCoord(int index, vec3 t) {
	vec3 v;
	int coord = index;
	vec4 samp = texelFetch(sTDInstanceTexCoord, coord);
	v[0] = t.s;
	v[1] = t.t;
	v[2] = samp[0];
    t.stp = v.stp;
	return t;
}
bool TDInstanceActive(int index) {
	index -= uTDInstanceIDOffset;
	float v;
	int coord = index;
	vec4 samp = texelFetch(sTDInstanceT, coord);
	v = samp[0];
	return v != 0.0;
}
vec3 iTDInstanceTranslate(int index, out bool instanceActive) {
	int origIndex = index;
	index -= uTDInstanceIDOffset;
	vec3 v;
	int coord = index;
	vec4 samp = texelFetch(sTDInstanceT, coord);
	v[0] = samp[1];
	v[1] = samp[2];
	v[2] = samp[3];
	instanceActive = samp[0] != 0.0;
	return v;
}
vec3 TDInstanceTranslate(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v;
	int coord = index;
	vec4 samp = texelFetch(sTDInstanceT, coord);
	v[0] = samp[1];
	v[1] = samp[2];
	v[2] = samp[3];
	return v;
}
mat3 TDInstanceRotateMat(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v = vec3(0.0, 0.0, 0.0);
	mat3 m = mat3(1.0);
{
	mat3 r;
}
	return m;
}
vec3 TDInstanceScale(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v = vec3(1.0, 1.0, 1.0);
	return v;
}
vec3 TDInstancePivot(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v = vec3(0.0, 0.0, 0.0);
	return v;
}
vec3 TDInstanceRotTo(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v = vec3(0.0, 0.0, 1.0);
	return v;
}
vec3 TDInstanceRotUp(int index) {
	index -= uTDInstanceIDOffset;
	vec3 v = vec3(0.0, 1.0, 0.0);
	return v;
}
mat4 TDInstanceMat(int id) {
	bool instanceActive = true;
	vec3 t = iTDInstanceTranslate(id, instanceActive);
	if (!instanceActive)
	{
		return mat4(0.0);
	}
	mat4 m = mat4(1.0);
	{
		vec3 tt = t;
		m[3][0] += m[0][0]*tt.x;
		m[3][1] += m[0][1]*tt.x;
		m[3][2] += m[0][2]*tt.x;
		m[3][3] += m[0][3]*tt.x;
		m[3][0] += m[1][0]*tt.y;
		m[3][1] += m[1][1]*tt.y;
		m[3][2] += m[1][2]*tt.y;
		m[3][3] += m[1][3]*tt.y;
		m[3][0] += m[2][0]*tt.z;
		m[3][1] += m[2][1]*tt.z;
		m[3][2] += m[2][2]*tt.z;
		m[3][3] += m[2][3]*tt.z;
	}
	return m;
}
mat3 TDInstanceMat3(int id) {
	mat3 m = mat3(1.0);
	return m;
}
mat3 TDInstanceMat3ForNorm(int id) {
	mat3 m = TDInstanceMat3(id);
	return m;
}
vec4 TDInstanceColor(int index, vec4 curColor) {
	index -= uTDInstanceIDOffset;
	vec4 v;
	int coord = index;
	vec4 samp = texelFetch(sTDInstanceColor, coord);
	v[0] = samp[0];
	v[1] = samp[1];
	v[2] = samp[2];
	v[3] = 1.0;
	curColor[0] = v[0];
;
	curColor[1] = v[1];
;
	curColor[2] = v[2];
;
	return curColor;
}
vec4 TDInstanceDeform(int id, vec4 pos) {
	pos = TDInstanceMat(id) * pos;
	return uTDMats[TDCameraIndex()].world * pos;
}

vec3 TDInstanceDeformVec(int id, vec3 vec)
{
	mat3 m = TDInstanceMat3(id);
	return mat3(uTDMats[TDCameraIndex()].world) * (m * vec);
}
vec3 TDInstanceDeformNorm(int id, vec3 vec)
{
	mat3 m = TDInstanceMat3ForNorm(id);
	return mat3(uTDMats[TDCameraIndex()].worldForNormals) * (m * vec);
}
vec4 TDInstanceDeform(vec4 pos) {
	return TDInstanceDeform(TDInstanceID(), pos);
}
vec3 TDInstanceDeformVec(vec3 vec) {
	return TDInstanceDeformVec(TDInstanceID(), vec);
}
vec3 TDInstanceDeformNorm(vec3 vec) {
	return TDInstanceDeformNorm(TDInstanceID(), vec);
}
bool TDInstanceActive() { return TDInstanceActive(TDInstanceID()); }
vec3 TDInstanceTranslate() { return TDInstanceTranslate(TDInstanceID()); }
mat3 TDInstanceRotateMat() { return TDInstanceRotateMat(TDInstanceID()); }
vec3 TDInstanceScale() { return TDInstanceScale(TDInstanceID()); }
mat4 TDInstanceMat() { return TDInstanceMat(TDInstanceID());
 }
mat3 TDInstanceMat3() { return TDInstanceMat3(TDInstanceID());
}
vec3 TDInstanceTexCoord(vec3 t) {
	return TDInstanceTexCoord(TDInstanceID(), t);
}
vec4 TDInstanceColor(vec4 curColor) {
	return TDInstanceColor(TDInstanceID(), curColor);
}
vec4 TDSkinnedDeform(vec4 pos) { return pos; }

vec3 TDSkinnedDeformVec(vec3 vec) { return vec; }

vec3 TDFastDeformTangent(vec3 oldNorm, vec4 oldTangent, vec3 deformedNorm)
{   return oldTangent.xyz;   }
mat4 TDBoneMat(int index) {
   return mat4(1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1);
}
vec4 TDDeform(vec4 pos) {
    pos = TDSkinnedDeform(pos);
    pos = TDInstanceDeform(pos);
    return pos;
}

vec4 TDDeform(int instanceID, vec3 p) {
	vec4 pos = vec4(p, 1.0);
    pos = TDSkinnedDeform(pos);
    pos = TDInstanceDeform(instanceID, pos);
    return pos;
}

vec4 TDDeform(vec3 pos) {
	return TDDeform(TDInstanceID(), pos);
}

vec3 TDDeformVec(int instanceID, vec3 vec) {
    vec = TDSkinnedDeformVec(vec);
    vec = TDInstanceDeformVec(instanceID, vec);
    return vec;
}

vec3 TDDeformVec(vec3 vec) {
	return TDDeformVec(TDInstanceID(), vec);
}

vec3 TDDeformNorm(int instanceID, vec3 vec) {
    vec = TDSkinnedDeformVec(vec);
    vec = TDInstanceDeformNorm(instanceID, vec);
    return vec;
}

vec3 TDDeformNorm(vec3 vec) {
	return TDDeformNorm(TDInstanceID(), vec);
}

vec3 TDSkinnedDeformNorm(vec3 vec) {
    vec = TDSkinnedDeformVec(vec);
	return vec;
}
