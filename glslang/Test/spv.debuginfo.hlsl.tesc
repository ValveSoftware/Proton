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

Texture2D textureHeight : register(t1);
SamplerState samplerHeight : register(s1);

struct VSOutput
{
	float4 Pos : SV_POSITION;
[[vk::location(0)]] float3 Normal : NORMAL0;
[[vk::location(1)]] float2 UV : TEXCOORD0;
};

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

// Calculate the tessellation factor based on screen space
// dimensions of the edge
float screenSpaceTessFactor(float4 p0, float4 p1)
{
	// Calculate edge mid point
	float4 midPoint = 0.5 * (p0 + p1);
	// Sphere radius as distance between the control points
	float radius = distance(p0, p1) / 2.0;

	// View space
	float4 v0 = mul(ubo.modelview, midPoint);

	// Project into clip space
	float4 clip0 = mul(ubo.projection, (v0 - float4(radius, float3(0.0, 0.0, 0.0))));
	float4 clip1 = mul(ubo.projection, (v0 + float4(radius, float3(0.0, 0.0, 0.0))));

	// Get normalized device coordinates
	clip0 /= clip0.w;
	clip1 /= clip1.w;

	// Convert to viewport coordinates
	clip0.xy *= ubo.viewportDim;
	clip1.xy *= ubo.viewportDim;

	// Return the tessellation factor based on the screen size
	// given by the distance of the two edge control points in screen space
	// and a reference (min.) tessellation size for the edge set by the application
	return clamp(distance(clip0, clip1) / ubo.tessellatedEdgeSize * ubo.tessellationFactor, 1.0, 64.0);
}

// Checks the current's patch visibility against the frustum using a sphere check
// Sphere radius is given by the patch size
bool frustumCheck(float4 Pos, float2 inUV)
{
	// Fixed radius (increase if patch size is increased in example)
	const float radius = 8.0f;
	float4 pos = Pos;
	pos.y -= textureHeight.SampleLevel(samplerHeight, inUV, 0.0).r * ubo.displacementFactor;

	// Check sphere against frustum planes
	for (int i = 0; i < 6; i++) {
		if (dot(pos, ubo.frustumPlanes[i]) + radius < 0.0)
		{
			return false;
		}
	}
	return true;
}

ConstantsHSOutput ConstantsHS(InputPatch<VSOutput, 4> patch)
{
    ConstantsHSOutput output = (ConstantsHSOutput)0;

	if (!frustumCheck(patch[0].Pos, patch[0].UV))
	{
		output.TessLevelInner[0] = 0.0;
		output.TessLevelInner[1] = 0.0;
		output.TessLevelOuter[0] = 0.0;
		output.TessLevelOuter[1] = 0.0;
		output.TessLevelOuter[2] = 0.0;
		output.TessLevelOuter[3] = 0.0;
	}
	else
	{
		if (ubo.tessellationFactor > 0.0)
		{
			output.TessLevelOuter[0] = screenSpaceTessFactor(patch[3].Pos, patch[0].Pos);
			output.TessLevelOuter[1] = screenSpaceTessFactor(patch[0].Pos, patch[1].Pos);
			output.TessLevelOuter[2] = screenSpaceTessFactor(patch[1].Pos, patch[2].Pos);
			output.TessLevelOuter[3] = screenSpaceTessFactor(patch[2].Pos, patch[3].Pos);
			output.TessLevelInner[0] = lerp(output.TessLevelOuter[0], output.TessLevelOuter[3], 0.5);
			output.TessLevelInner[1] = lerp(output.TessLevelOuter[2], output.TessLevelOuter[1], 0.5);
		}
		else
		{
			// Tessellation factor can be set to zero by example
			// to demonstrate a simple passthrough
			output.TessLevelInner[0] = 1.0;
			output.TessLevelInner[1] = 1.0;
			output.TessLevelOuter[0] = 1.0;
			output.TessLevelOuter[1] = 1.0;
			output.TessLevelOuter[2] = 1.0;
			output.TessLevelOuter[3] = 1.0;
		}
	}

    return output;
}

[domain("quad")]
[partitioning("integer")]
[outputtopology("triangle_cw")]
[outputcontrolpoints(4)]
[patchconstantfunc("ConstantsHS")]
[maxtessfactor(20.0f)]
HSOutput main(InputPatch<VSOutput, 4> patch, uint InvocationID : SV_OutputControlPointID)
{
	HSOutput output = (HSOutput)0;
	output.Pos = patch[InvocationID].Pos;
	output.Normal = patch[InvocationID].Normal;
	output.UV = patch[InvocationID].UV;
	return output;
}
