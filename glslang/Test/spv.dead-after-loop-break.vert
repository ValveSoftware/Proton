#version 450

layout(location =0 ) in int c;
layout(location =0 ) out int o;

void main() {
  int i;
  o = 1;
  for (i=0; i < 5; i++) {
    o = 2;
    if (i==c) {
      o = 3;
      break;
      o = 4;
    }
    o = 5;
  }
  o = 6;
}
