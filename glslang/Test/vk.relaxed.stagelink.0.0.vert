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
layout(location = 0) in vec3 P;
layout(location = 1) in vec3 N;
layout(location = 2) in vec4 Cd;
layout(location = 3) in vec3 uv[8];
vec4 TDWorldToProj(vec4 v);
vec4 TDWorldToProj(vec3 v);
vec4 TDWorldToProj(vec4 v, vec3 uv);
vec4 TDWorldToProj(vec3 v, vec3 uv);
int TDInstanceID();
int TDCameraIndex();
vec3 TDUVUnwrapCoord();
/*********TOUCHDEFORMPREFIX**********/
#define TD_NUM_BONES 0

vec3 TDInstanceTexCoord(int instanceID, vec3 t);
vec4 TDInstanceColor(int instanceID, vec4 curColor);

vec4 TDDeform(vec4 pos);
vec4 TDDeform(vec3 pos);
vec3 TDInstanceTexCoord(vec3 t);
vec4 TDInstanceColor(vec4 curColor);
#line 1

out Vertex
{
	vec4 color;
	vec3 worldSpacePos;
	vec3 texCoord0;
	flat int cameraIndex;
	flat int instance;
} oVert;

void main()
{

	{ // Avoid duplicate variable defs
		vec3 texcoord = TDInstanceTexCoord(uv[0]);
		oVert.texCoord0.stp = texcoord.stp;
	}
	// First deform the vertex and normal
	// TDDeform always returns values in world space
	oVert.instance = TDInstanceID();
	vec4 worldSpacePos = TDDeform(P);
	vec3 uvUnwrapCoord = TDInstanceTexCoord(TDUVUnwrapCoord());
	gl_Position = TDWorldToProj(worldSpacePos, uvUnwrapCoord);


	// This is here to ensure we only execute lighting etc. code
	// when we need it. If picking is active we don't need lighting, so
	// this entire block of code will be ommited from the compile.
	// The TD_PICKING_ACTIVE define will be set automatically when
	// picking is active.

	int cameraIndex = TDCameraIndex();
	oVert.cameraIndex = cameraIndex;
	oVert.worldSpacePos.xyz = worldSpacePos.xyz;
	oVert.color = TDInstanceColor(Cd);
}
