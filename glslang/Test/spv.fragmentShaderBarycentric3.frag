#version 450
#extension GL_EXT_fragment_shader_barycentric : require

layout(location = 0) pervertexEXT in vertices {
    float attrib;
    } v[];   
      
layout(location = 1) out float value;
      
void main () {
    value = (gl_BaryCoordEXT.x * v[0].attrib +
             gl_BaryCoordEXT.y * v[1].attrib +
             gl_BaryCoordEXT.z * v[2].attrib);

}
