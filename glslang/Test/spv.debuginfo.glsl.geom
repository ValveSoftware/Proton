/*
The MIT License (MIT)

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

#version 450

#extension GL_ARB_viewport_array : enable

layout (triangles, invocations = 2) in;
layout (triangle_strip, max_vertices = 3) out;

layout (binding = 0) uniform UBO 
{
	mat4 projection[2];
	mat4 modelview[2];
	vec4 lightPos;
} ubo;

layout (location = 0) in vec3 inNormal[];
layout (location = 1) in vec3 inColor[];

layout (location = 0) out vec3 outNormal;
layout (location = 1) out vec3 outColor;
layout (location = 2) out vec3 outViewVec;
layout (location = 3) out vec3 outLightVec;

void main(void)
{	
	for(int i = 0; i < gl_in.length(); i++)
	{
		outNormal = mat3(ubo.modelview[gl_InvocationID]) * inNormal[i];
		outColor = inColor[i];

		vec4 pos = gl_in[i].gl_Position;
		vec4 worldPos = (ubo.modelview[gl_InvocationID] * pos);
		
		vec3 lPos = vec3(ubo.modelview[gl_InvocationID]  * ubo.lightPos);
		outLightVec = lPos - worldPos.xyz;
		outViewVec = -worldPos.xyz;	
	
		gl_Position = ubo.projection[gl_InvocationID] * worldPos;

		// Set the viewport index that the vertex will be emitted to
		gl_ViewportIndex = gl_InvocationID;
      gl_PrimitiveID = gl_PrimitiveIDIn;
		EmitVertex();
	}
	EndPrimitive();
}
