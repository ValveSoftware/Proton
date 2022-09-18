#version 450

#extension GL_EXT_fragment_shading_rate : enable

out highp int val;
void main () {
    val = gl_ShadingRateEXT;
}
