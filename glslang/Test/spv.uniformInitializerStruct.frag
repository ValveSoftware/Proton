#version 450

layout (location = 0) out vec4 color;

layout (location = 0) uniform struct {
        float r;
        float g;
        float b;
} parts[2] = { { 1.0, 1.0, 1.0}, { 0.0, 1.0, 0.0 } };

void main() {
  color = vec4(0.0, 0.0, 0.0, 1.0);

  for (int i = 0; i < 2; i++) {
    color.r += parts[i].r;
    color.g += parts[i].g;
    color.b += parts[i].b;
  }
}
