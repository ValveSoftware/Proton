#version 140

uniform sampler2D s2D;
centroid vec2 centTexCoord;

void main()
{
    gl_FragColor = texture2D(s2D, centTexCoord);
}

