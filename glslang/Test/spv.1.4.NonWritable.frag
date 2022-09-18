#version 450

layout(location = 0) flat in int index;

layout(location = 0) out float color;

// lookup table
const float table[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

void main()
{
    color = table[index];
}
