#version 450

#extension GL_ARB_shader_viewport_layer_array : require

layout(triangles) in;
void main() {
  gl_Layer = 1;
}
