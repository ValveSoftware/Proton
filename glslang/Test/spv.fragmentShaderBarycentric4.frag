#version 320 es
#extension GL_EXT_fragment_shader_barycentric : require

precision highp float;

layout(location = 0) pervertexEXT in float vertexIDs[3];
      
layout(location = 1) out float value;
      
void main () {
    value = (gl_BaryCoordNoPerspEXT.x * vertexIDs[0] +
             gl_BaryCoordNoPerspEXT.y * vertexIDs[1] +
             gl_BaryCoordNoPerspEXT.z * vertexIDs[2]);

}
