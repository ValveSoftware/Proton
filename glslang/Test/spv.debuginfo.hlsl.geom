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
	float4x4 projection[2];
	float4x4 modelview[2];
	float4 lightPos;
};

cbuffer ubo : register(b0) { UBO ubo; }

struct VSOutput
{
	float4 Pos : SV_POSITION;
[[vk::location(0)]] float3 Normal : NORMAL0;
[[vk::location(1)]] float3 Color : COLOR0;
};

struct GSOutput
{
	float4 Pos : SV_POSITION;
	uint ViewportIndex : SV_ViewportArrayIndex;
	uint PrimitiveID : SV_PrimitiveID;
[[vk::location(0)]] float3 Normal : NORMAL0;
[[vk::location(1)]] float3 Color : COLOR0;
[[vk::location(2)]] float3 ViewVec : TEXCOOR1;
[[vk::location(3)]] float3 LightVec : TEXCOOR2;
};

[maxvertexcount(3)]
[instance(2)]
void main(triangle VSOutput input[3], inout TriangleStream<GSOutput> outStream, uint InvocationID : SV_GSInstanceID, uint PrimitiveID : SV_PrimitiveID)
{
	for(int i = 0; i < 3; i++)
	{
		GSOutput output = (GSOutput)0;
		output.Normal = mul((float3x3)ubo.modelview[InvocationID], input[i].Normal);
		output.Color = input[i].Color;

		float4 pos = input[i].Pos;
		float4 worldPos = mul(ubo.modelview[InvocationID], pos);

		float3 lPos = mul(ubo.modelview[InvocationID], ubo.lightPos).xyz;
		output.LightVec = lPos - worldPos.xyz;
		output.ViewVec = -worldPos.xyz;

		output.Pos = mul(ubo.projection[InvocationID], worldPos);

		// Set the viewport index that the vertex will be emitted to
		output.ViewportIndex = InvocationID;
      	output.PrimitiveID = PrimitiveID;
		outStream.Append( output );
	}

	outStream.RestartStrip();
}
