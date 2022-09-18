#version 450

layout(location =0 ) in float c;
layout(location =0 ) out int o;

void main() {
  o = 1;
  discard;
  o = 3;
}
