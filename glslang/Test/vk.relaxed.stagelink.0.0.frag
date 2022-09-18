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

void TDAlphaTest(float alpha);
vec4 TDDither(vec4 color);
vec4 TDOutputSwizzle(vec4 v);
uvec4 TDOutputSwizzle(uvec4 v);
void TDCheckOrderIndTrans();
void TDCheckDiscard();
uniform vec3 uConstant;
uniform float uShadowStrength;
uniform vec3 uShadowColor;
uniform vec4 uDiffuseColor;
uniform vec4 uAmbientColor;

uniform sampler2DArray sColorMap;

in Vertex
{
	vec4 color;
	vec3 worldSpacePos;
	vec3 texCoord0;
	flat int cameraIndex;
	flat int instance;
} iVert;

// Output variable for the color
layout(location = 0) out vec4 oFragColor[TD_NUM_COLOR_BUFFERS];
void main()
{
	// This allows things such as order independent transparency
	// and Dual-Paraboloid rendering to work properly
	TDCheckDiscard();

	vec4 outcol = vec4(0.0, 0.0, 0.0, 0.0);

	vec3 texCoord0 = iVert.texCoord0.stp;
	float actualTexZ = mod(int(texCoord0.z),2048);
	float instanceLoop = floor(int(texCoord0.z)/2048);
	texCoord0.z = actualTexZ;
	vec4 colorMapColor = texture(sColorMap, texCoord0.stp);

	float red = colorMapColor[int(instanceLoop)];
	colorMapColor = vec4(red);
	// Constant Light Contribution
	outcol.rgb += uConstant * iVert.color.rgb;

	outcol *= colorMapColor;

	// Alpha Calculation
	float alpha = iVert.color.a * colorMapColor.a ;

	// Dithering, does nothing if dithering is disabled
	outcol = TDDither(outcol);

	outcol.rgb *= alpha;

	// Modern GL removed the implicit alpha test, so we need to apply
	// it manually here. This function does nothing if alpha test is disabled.
	TDAlphaTest(alpha);

	outcol.a = alpha;
	oFragColor[0] = TDOutputSwizzle(outcol);


	// TD_NUM_COLOR_BUFFERS will be set to the number of color buffers
	// active in the render. By default we want to output zero to every
	// buffer except the first one.
	for (int i = 1; i < TD_NUM_COLOR_BUFFERS; i++)
	{
		oFragColor[i] = vec4(0.0);
	}
}
