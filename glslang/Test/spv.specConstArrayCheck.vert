#version 450

layout(constant_id = 0) const uint a = 1;
layout(constant_id = 1) const uint b = 2;
layout(location = 0) out uint o;

void main() {
  uint arr1[a+a];
  uint arr2[b];
  o = arr1[1];
  o = arr2[1];
  o = arr1[6];
  o = arr2[6];
}
