#version 450
#extension GL_EXT_nonuniform_qualifier : require
layout(set=0,binding=4,r32ui) uniform uimageBuffer data[];
layout(location = 3) in flat int  rIndex;
void main()
{
  imageAtomicAdd(data[nonuniformEXT(rIndex)], 0, 0);
}
