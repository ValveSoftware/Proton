/*
The MIT License (MIT)

Copyright (c) 2022 Google LLC
Copyright (c) 2022 Sascha Willems

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

struct UBO
{
	float4x4 projection;
	float4x4 modelview;
	float4 lightPos;
	float4 frustumPlanes[6];
	float displacementFactor;
	float tessellationFactor;
	float2 viewportDim;
	float tessellatedEdgeSize;
};
cbuffer ubo : register(b0) { UBO ubo; };

Texture2D displacementMapTexture : register(t1);
SamplerState displacementMapSampler : register(s1);

struct HSOutput
{
[[vk::location(2)]]	float4 Pos : SV_POSITION;
[[vk::location(0)]] float3 Normal : NORMAL0;
[[vk::location(1)]] float2 UV : TEXCOORD0;
};

struct ConstantsHSOutput
{
    float TessLevelOuter[4] : SV_TessFactor;
    float TessLevelInner[2] : SV_InsideTessFactor;
};

struct DSOutput
{
	float4 Pos : SV_POSITION;
[[vk::location(0)]] float3 Normal : NORMAL0;
[[vk::location(1)]] float2 UV : TEXCOORD0;
[[vk::location(2)]] float3 ViewVec : TEXCOORD1;
[[vk::location(3)]] float3 LightVec : TEXCOORD2;
[[vk::location(4)]] float3 EyePos : POSITION1;
[[vk::location(5)]] float3 WorldPos : POSITION0;
};

[domain("quad")]
DSOutput main(ConstantsHSOutput input, float2 TessCoord : SV_DomainLocation, const OutputPatch<HSOutput, 4> patch)
{
	// Interpolate UV coordinates
	DSOutput output = (DSOutput)0;
	float2 uv1 = lerp(patch[0].UV, patch[1].UV, TessCoord.x);
	float2 uv2 = lerp(patch[3].UV, patch[2].UV, TessCoord.x);
	output.UV = lerp(uv1, uv2, TessCoord.y);

	float3 n1 = lerp(patch[0].Normal, patch[1].Normal, TessCoord.x);
	float3 n2 = lerp(patch[3].Normal, patch[2].Normal, TessCoord.x);
	output.Normal = lerp(n1, n2, TessCoord.y);

	// Interpolate positions
	float4 pos1 = lerp(patch[0].Pos, patch[1].Pos, TessCoord.x);
	float4 pos2 = lerp(patch[3].Pos, patch[2].Pos, TessCoord.x);
	float4 pos = lerp(pos1, pos2, TessCoord.y);
	// Displace
	pos.y -= displacementMapTexture.SampleLevel(displacementMapSampler, output.UV, 0.0).r * ubo.displacementFactor;
	// Perspective projection
	output.Pos = mul(ubo.projection, mul(ubo.modelview, pos));

	// Calculate vectors for lighting based on tessellated position
	output.ViewVec = -pos.xyz;
	output.LightVec = normalize(ubo.lightPos.xyz + output.ViewVec);
	output.WorldPos = pos.xyz;
	output.EyePos = mul(ubo.modelview, pos).xyz;
	return output;
}
