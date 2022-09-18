#version 150
#extension GL_ARB_gpu_shader5 : require

uniform ivec4 u1;
uniform uvec4 u2;
out     vec4  result;
vec4 f(in vec4 a, in vec4 b){ return a * b;}           // choice 1
vec4 f(in uvec4 a, in uvec4 b){ return vec4(a - b);}   // choice 2

void main()
{
    result = f(u1, u2); // should match choice 2. which have less implicit conversion. 
    switch (gl_VertexID)
    {
      case 0: gl_Position = vec4(-1.0, 1.0, 0.0, 1.0); break;
      case 1: gl_Position = vec4( 1.0, 1.0, 0.0, 1.0); break;
      case 2: gl_Position = vec4(-1.0,-1.0, 0.0, 1.0); break;
      case 3: gl_Position = vec4( 1.0,-1.0, 0.0, 1.0); break;
    }
}
