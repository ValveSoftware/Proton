float4 AmbientColor = float4(1, 0.5, 0, 1);
float4 AmbientColor2 = float4(0.5, 1, 0, 0);

float4 main(float4 vpos : SV_POSITION) : SV_TARGET
{
    float4 vpos_t = float4(vpos.xyz, 1 / vpos.w);
    if (vpos_t.x < 400)
        return AmbientColor;
    else
        return AmbientColor2;
}

