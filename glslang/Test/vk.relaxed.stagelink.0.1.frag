#version 460
uniform sampler2D sTDNoiseMap;
uniform sampler1D sTDSineLookup;
uniform sampler2D sTDWhite2D;
uniform sampler3D sTDWhite3D;
uniform sampler2DArray sTDWhite2DArray;
uniform samplerCube sTDWhiteCube;
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
vec4 TDDither(vec4 color);
vec3 TDHSVToRGB(vec3 c);
vec3 TDRGBToHSV(vec3 c);
#define PI 3.14159265

vec4 TDColor(vec4 color) { return color; }
void TDCheckOrderIndTrans() {
}
void TDCheckDiscard() {
	TDCheckOrderIndTrans();
}
vec4 TDDither(vec4 color)
{
   float d = texture(sTDNoiseMap, 
                gl_FragCoord.xy / 256.0).r;
   d -= 0.5;
   d /= 256.0;
   return vec4(color.rgb + d, color.a);
}
bool TDFrontFacing(vec3 pos, vec3 normal)
{
	return gl_FrontFacing;
}
float TDAttenuateLight(int index, float lightDist)
{
	return 1.0;
}
void TDAlphaTest(float alpha) {
}
float TDHardShadow(int lightIndex, vec3 worldSpacePos)
{ return 0.0; }
float TDSoftShadow(int lightIndex, vec3 worldSpacePos, int samples, int steps)
{ return 0.0; }
float TDSoftShadow(int lightIndex, vec3 worldSpacePos)
{ return 0.0; }
float TDShadow(int lightIndex, vec3 worldSpacePos)
{ return 0.0; }
vec3 TDEquirectangularToCubeMap(vec2 mapCoord);
vec2 TDCubeMapToEquirectangular(vec3 envMapCoord);
vec2 TDCubeMapToEquirectangular(vec3 envMapCoord, out float mipMapBias);
vec2 TDTexGenSphere(vec3 envMapCoord);
float iTDRadicalInverse_VdC(uint bits) 
{
	bits = (bits << 16u) | (bits >> 16u);
    bits = ((bits & 0x55555555u) << 1u) | ((bits & 0xAAAAAAAAu) >> 1u);
    bits = ((bits & 0x33333333u) << 2u) | ((bits & 0xCCCCCCCCu) >> 2u);
    bits = ((bits & 0x0F0F0F0Fu) << 4u) | ((bits & 0xF0F0F0F0u) >> 4u);
    bits = ((bits & 0x00FF00FFu) << 8u) | ((bits & 0xFF00FF00u) >> 8u);
    return float(bits) * 2.3283064365386963e-10; // / 0x100000000
}
vec2 iTDHammersley(uint i, uint N) 
{
    return vec2(float(i) / float(N), iTDRadicalInverse_VdC(i));
}
vec3 iTDImportanceSampleGGX(vec2 Xi, float roughness2, vec3 N)
{	
	float a = roughness2;
	float phi = 2 * 3.14159265 * Xi.x;
	float cosTheta = sqrt( (1 - Xi.y) / (1 + (a*a - 1) * Xi.y) );
	float sinTheta = sqrt( 1 - cosTheta * cosTheta );
	
	vec3 H;
	H.x = sinTheta * cos(phi);
	H.y = sinTheta * sin(phi);
	H.z = cosTheta;
	
	vec3 upVector = abs(N.z) < 0.999 ? vec3(0, 0, 1) : vec3(1, 0, 0);
	vec3 tangentX = normalize(cross(upVector, N));
	vec3 tangentY = cross(N, tangentX);
	
	// Tangent to world space
	vec3 worldResult = tangentX * H.x + tangentY * H.y + N * H.z;
	return worldResult;
}
float iTDDistributionGGX(vec3 normal, vec3 half_vector, float roughness2)
{
	const float Epsilon = 0.000001;

    float NdotH = clamp(dot(normal, half_vector), Epsilon, 1.0);
    
    float alpha2 = roughness2 * roughness2;
    
    float denom = NdotH * NdotH * (alpha2 - 1.0) + 1.0;
	denom = max(1e-8, denom);
    return alpha2 / (PI * denom * denom);
}
vec3 iTDCalcF(vec3 F0, float VdotH) {
    return F0 + (vec3(1.0) - F0) * pow(2.0, (-5.55473*VdotH - 6.98316) * VdotH);
}

float iTDCalcG(float NdotL, float NdotV, float k) {
    float Gl = 1.0 / (NdotL * (1.0 - k) + k);
    float Gv = 1.0 / (NdotV * (1.0 - k) + k);
    return Gl * Gv;
}
// 0 - All options
TDPBRResult TDLightingPBR(int index,vec3 diffuseColor,vec3 specularColor,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float roughness)
{
	TDPBRResult res;
	return res;
}
// 0 - All options
void TDLightingPBR(inout vec3 diffuseContrib,inout vec3 specularContrib,inout float shadowStrengthOut,int index,vec3 diffuseColor,vec3 specularColor,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float roughness)
{
	TDPBRResult res = TDLightingPBR(index,diffuseColor,specularColor,worldSpacePos,normal,shadowStrength,shadowColor,camVector,roughness);	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
	shadowStrengthOut = res.shadowStrength;
}
// 0 - All options
void TDLightingPBR(inout vec3 diffuseContrib,inout vec3 specularContrib,int index,vec3 diffuseColor,vec3 specularColor,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float roughness)
{
	TDPBRResult res = TDLightingPBR(index,diffuseColor,specularColor,worldSpacePos,normal,shadowStrength,shadowColor,camVector,roughness);	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
}
// 0 - All options
TDPBRResult TDEnvLightingPBR(int index,vec3 diffuseColor,vec3 specularColor,vec3 normal,vec3 camVector,float roughness,float ambientOcclusion)
{
	TDPBRResult res;
	return res;
}
// 0 - All options
void TDEnvLightingPBR(inout vec3 diffuseContrib,inout vec3 specularContrib,int index,vec3 diffuseColor,vec3 specularColor,vec3 normal,vec3 camVector,float roughness,float ambientOcclusion)
{
	TDPBRResult res = TDEnvLightingPBR(index, diffuseColor, specularColor,										normal, camVector, roughness, ambientOcclusion);
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
}
// 0 - All options
TDPhongResult TDLighting(int index,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float shininess,float shininess2)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
		return res;
}
// 0 - Legacy
void TDLighting(inout vec3 diffuseContrib,inout vec3 specularContrib,inout vec3 specularContrib2,inout float shadowStrengthOut,int index,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float shininess,float shininess2)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
	specularContrib2 = res.specular2;
	shadowStrengthOut = res.shadowStrength;
}
// 0 - Legacy
void TDLighting(inout vec3 diffuseContrib,inout vec3 specularContrib,inout vec3 specularContrib2,int index,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float shininess,float shininess2)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
	specularContrib2 = res.specular2;
}
// 1 - Without specular2
void TDLighting(inout vec3 diffuseContrib,inout vec3 specularContrib,int index,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor,vec3 camVector,float shininess)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
}
// 2 - Without shadows
void TDLighting(inout vec3 diffuseContrib,inout vec3 specularContrib,inout vec3 specularContrib2,int index,vec3 worldSpacePos,vec3 normal,vec3 camVector,float shininess,float shininess2)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
	specularContrib2 = res.specular2;
}
// 3 - diffuse and specular only
void TDLighting(inout vec3 diffuseContrib,inout vec3 specularContrib,int index,vec3 worldSpacePos,vec3 normal,vec3 camVector,float shininess)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
	specularContrib = res.specular;
}
// 4 - Diffuse only
void TDLighting(inout vec3 diffuseContrib,int index, vec3 worldSpacePos, vec3 normal)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
}
// 5 - diffuse only with shadows
void TDLighting(inout vec3 diffuseContrib,int index,vec3 worldSpacePos,vec3 normal,float shadowStrength,vec3 shadowColor)
{
	TDPhongResult res;
	switch (index)
	{
		default:
			res.diffuse = vec3(0.0);
			res.specular = vec3(0.0);
			res.specular2 = vec3(0.0);
			res.shadowStrength = 0.0;
			break;
	}
	diffuseContrib = res.diffuse;
}
vec4 TDProjMap(int index, vec3 worldSpacePos, vec4 defaultColor) {
	switch (index)
	{
		default: return defaultColor;
	}
}
vec4 TDFog(vec4 color, vec3 lightingSpacePosition, int cameraIndex) {
	switch (cameraIndex) {
			default:
		case 0:
		{
	return color;
		}
	}
}
vec4 TDFog(vec4 color, vec3 lightingSpacePosition)
{
	return TDFog(color, lightingSpacePosition, 0);
}
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
