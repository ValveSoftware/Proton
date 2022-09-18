#version 310 es

layout(location = 0) in mediump float ps;

invariant gl_Position;

void main()
{
    gl_Position = vec4(ps);
    gl_Position *= float(4 - gl_VertexIndex);

    gl_PointSize = ps; 
    gl_PointSize *= float(5 - gl_InstanceIndex);
}
