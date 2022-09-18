#version 150 core

#ifndef GL_core_profile
#	error standard macro GL_core_profile not defined
#endif

in vec4 iv4;

uniform float ps;

invariant gl_Position;

void main()
{
    gl_Position = iv4;
    gl_PointSize = ps;
    gl_ClipDistance[2] = iv4.x;
    gl_ClipVertex = iv4;
}

out float gl_ClipDistance[4];

uniform foob {
    int a[];
};
int a[5]; // ERROR, resizing user-block member

in double dvarerr; // Error since extension GL_ARB_vertex_attrib_64bit is not enabled
#extension GL_ARB_vertex_attrib_64bit: enable
in double dvar;
in dvec2  dv2var;
in dvec3  dv3var;
in dvec4  dv4var;
in dmat2  dmat2var;
in dmat3  dmat3var;
in dmat4  dmat4var;
in dmat2x3 dmat23var;
in dmat2x4 dmat24var;
in dmat3x2 dmat32var;
in dmat3x4 dmat34var;
in dmat4x2 dmat42var;
in dmat4x3 dmat43var;

#line 3000
#error line of this error should be 3001
