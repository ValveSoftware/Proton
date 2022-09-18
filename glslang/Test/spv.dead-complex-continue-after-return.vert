#version 450

layout(location =0 ) in int c;
layout(location =0 ) out int o;

void main() {
  int i = 0;
  o = 1;
  // This has non-trivial continue target.
  for (i=0; i < 5; ++i, o=99) {
    o = 2;
    return;
    o = 3;
  }
  // This is considered reachable since Glslang codegen will
  // create a conditional branch in the header, and one arm
  // of that branch reaches this merge block.
  o = 4;
}
