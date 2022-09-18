#version 150
#extension GL_ARB_gpu_shader5 : require
uniform int expected_value;
uniform float value;
out     vec4 result;
void main()
{
    result = vec4(1.0, 1.0, 1.0, 1.0);
    int ret_val = floatBitsToInt(value);
    if (expected_value != ret_val){  result = vec4(0.0, 0.0, 0.0, 0.0); }

    switch (gl_VertexID)  {
      case 0: gl_Position = vec4(-1.0, 1.0, 0.0, 1.0); break;
      case 1: gl_Position = vec4( 1.0, 1.0, 0.0, 1.0); break;
      case 2: gl_Position = vec4(-1.0,-1.0, 0.0, 1.0); break;
      case 3: gl_Position = vec4( 1.0,-1.0, 0.0, 1.0); break;
    }
}