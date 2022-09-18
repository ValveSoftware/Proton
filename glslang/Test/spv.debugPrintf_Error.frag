#version 450
#extension GL_EXT_debug_printf : enable

void main()
{
    // invalid hex sequence
    debugPrintfEXT("\xZ");

    // not an octal sequence
    debugPrintfEXT("\8");
}
