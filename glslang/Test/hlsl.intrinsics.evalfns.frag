struct PS_INPUT
{
        float2 vPos: TEXCOORD0;
};

float4 main(float inF1, float2 inF2, float3 inF3, float4 inF4, int2 inI2, PS_INPUT i) : COLOR
{
    float  oF1 = EvaluateAttributeSnapped(inF1, int2(8,15));
    float2 oF2 = EvaluateAttributeSnapped(inF2, int2(0,1));
    float3 oF3 = EvaluateAttributeSnapped(inF3, int2(3,10));
    float4 oF4 = EvaluateAttributeSnapped(inF4, int2(7,8));

    oF1 += EvaluateAttributeSnapped(inF1, inI2);

    oF1 += EvaluateAttributeAtSample(inF1, 3);
    oF2 += EvaluateAttributeAtSample(inF2, 3);
    oF3 += EvaluateAttributeAtSample(inF3, 3);
    oF4 += EvaluateAttributeAtSample(inF4, 3);

    oF1 += EvaluateAttributeAtSample(inF1, inI2.x);

    oF1 += EvaluateAttributeAtCentroid(inF1);
    oF2 += EvaluateAttributeAtCentroid(inF2);
    oF3 += EvaluateAttributeAtCentroid(inF3);
    oF4 += EvaluateAttributeAtCentroid(inF4);

    oF2 += EvaluateAttributeSnapped(i.vPos, int2(0,1));
    oF2 += EvaluateAttributeAtSample(i.vPos, 3);
    oF2 += EvaluateAttributeAtCentroid(i.vPos);

    float4 color = float4(oF1, oF2.y, oF3.z, oF4.w);
    return color;
}
