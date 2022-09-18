/*

glslangValidator.exe --glsl-version 430 -V -S geom -o glsl.versionOverride.geom.out glsl.versionOverride.geom

*/

#version 110

layout (points) in;
layout (line_strip, max_vertices = 2) out;

void main() {    
    EmitVertex();
    EmitVertex();   
    EndPrimitive();
}  
