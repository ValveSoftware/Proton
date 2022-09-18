#version 450

#extension GL_EXT_fragment_shading_rate : enable

layout(location = 0) in int id;

void main()
{
    switch (id)
    {
    case 0:
        // V2 | H2 => 5
        gl_PrimitiveShadingRateEXT = gl_ShadingRateFlag2VerticalPixelsEXT | gl_ShadingRateFlag2HorizontalPixelsEXT;
        break;
    case 1:
        // V2 | H4 => 9
        gl_PrimitiveShadingRateEXT = gl_ShadingRateFlag2VerticalPixelsEXT | gl_ShadingRateFlag4HorizontalPixelsEXT;
        break;
    case 2:
        // V4 | H2 => 6
        gl_PrimitiveShadingRateEXT = gl_ShadingRateFlag4VerticalPixelsEXT | gl_ShadingRateFlag2HorizontalPixelsEXT;
        break;
    case 3:
        // V4 | H4 => 10
        gl_PrimitiveShadingRateEXT = gl_ShadingRateFlag4VerticalPixelsEXT | gl_ShadingRateFlag4HorizontalPixelsEXT;
        break;
    }
}