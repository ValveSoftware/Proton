#version 300 es
precision mediump float;
in highp vec4 dEQP_Position;

uniform mediump sampler2DArrayShadow s;

void main()
{
	gl_Position = vec4(textureOffset(s, vec4(0), ivec2(0)));
	gl_Position = dEQP_Position;
}
