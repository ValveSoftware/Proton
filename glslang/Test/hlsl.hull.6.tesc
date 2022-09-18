// Test tesselation factor output as PCF arg

struct VSOutput
{
    float4 f4Position : SV_Position;
    float3 f3Color	  : COLOR;
};

struct HS_CONSTANT_DATA_OUTPUT
{
    float Edges[4]  : SV_TessFactor;
};

HS_CONSTANT_DATA_OUTPUT ConstantHS(InputPatch<VSOutput, 1> p, 
                                   uint BlockID        : SV_PrimitiveID,
                                   out float Inside[2] : SV_InsideTessFactor)
{
    HS_CONSTANT_DATA_OUTPUT Factors;
    Factors.Edges[0] = 2.5;
    Factors.Edges[1] = 4.25;
    Factors.Edges[2] = 5.75;
    Factors.Edges[3] = 7.5;

    Inside[0] = 6.75;
    Inside[1] = 7.25;

    return Factors;
}

struct HSOutput
{
    float4 Position : POS;
    float3 Color    : COL;
};

[domain("quad")]
[partitioning("fractional_even")]
[outputtopology("triangle_ccw")]
[outputcontrolpoints(1)]
[patchconstantfunc("ConstantHS")]
HSOutput main(InputPatch<VSOutput, 1> inputPatch, uint uCPID : SV_OutputControlPointID)
{
    HSOutput Out;
    Out.Position = inputPatch[uCPID].f4Position;
    Out.Color    = inputPatch[uCPID].f3Color;
    return Out;
}

