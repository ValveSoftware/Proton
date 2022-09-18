#version 450

layout(location =0 ) in int c;
layout(location =0 ) out int o;

void main() {
  int i;
  for (i=0; i < 5; i++) {
    o = 1;
    continue;
    o = 2;
  }
  o = 3;
}
