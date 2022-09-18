#version 140

#extension GL_ARB_fragment_coord_conventions: require
#extension GL_ARB_explicit_attrib_location : enable


#if !defined GL_ARB_fragment_coord_conventions
#  error GL_ARB_fragment_coord_conventions is not defined
#elif GL_ARB_fragment_coord_conventions != 1
#  error GL_ARB_fragment_coord_conventions is not equal to 1
#endif


layout (location = 0) in vec4 pos;
out vec4 i;

uniform float gtf_windowWidth;
uniform float gtf_windowHeight;
uniform float n;
uniform float f;

void main()
{
  gl_Position = pos;
  i = vec4((pos.x+1.0)*0.5*gtf_windowWidth, (pos.y+1.0)*0.5*gtf_windowHeight, (f-n)*0.5*pos.z + (f+n)*0.5, pos.w);
}

