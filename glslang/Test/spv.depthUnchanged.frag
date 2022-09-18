#version 430
layout(location = 0) out vec4 outColor;
layout(depth_unchanged) out float gl_FragDepth;
void main() {
  outColor = vec4(1.0, 0.0, 0.0, 1.0);
  gl_FragDepth = gl_FragCoord.y;
}

