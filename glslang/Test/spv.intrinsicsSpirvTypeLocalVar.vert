#version 460 core

#extension GL_EXT_spirv_intrinsics: enable

layout(constant_id = 9) const int size = 9;

#define EmptyStruct spirv_type(id = 30)
void func(EmptyStruct emptyStruct) {}

void main()
{
    EmptyStruct dummy[size];
    func(dummy[1]);
}
