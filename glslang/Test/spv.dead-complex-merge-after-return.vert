#version 450

layout(location =0 ) in int c;
layout(location =0 ) out int o;

void main() {
  int i = 0;
  o = 1;
  do {
    o = 2;
    return;
    o = 3;
  } while(i++ < 5);

  // All this is a dead merge block.
  o = 4;
  if (c==4) {
     o = 100;
  } else {
     o = 200;
  }
  o = 300;
}
