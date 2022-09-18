#version 450

layout(location =0 ) in int c;
layout(location =0 ) out int o;

void main() {
  int i;
  switch(c) {
    case 0: o=1;
      break;
      o=2;
   default: break;
  }
  o = 3;
}
