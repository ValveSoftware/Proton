struct VertexShaderOutput
{
    float4 m_position : SV_POSITION;
    float4 m_color    : COLOR0;     
};

[maxvertexcount(3)]
[instance(5)]
void GeometryShader(triangle VertexShaderOutput input[3], inout TriangleStream<VertexShaderOutput> output, uint id : SV_GSInstanceID)
{
    [loop]
    for (int i = 0; i < 3; ++i)
    {
        output.Append(input[i]);
    }
    output.RestartStrip();
}