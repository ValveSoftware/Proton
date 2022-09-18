#version 450
#extension GL_EXT_nonuniform_qualifier : require
layout(set=0,binding=4,rgba32f) uniform imageBuffer data[];
layout(location = 0) out vec4     FragColor;
layout(location = 3) in flat int  rIndex;
void main()
{
  FragColor = imageLoad(data[nonuniformEXT(rIndex)], 0);
}
