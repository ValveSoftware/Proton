struct VSOutput
{
    float4 PositionPS 	        : SV_Position;
    float3 PosInLightViewSpace 	: LIGHT_SPACE_POS;
    float3 NormalWS 	        : NORMALWS;
    float2 TexCoord 	        : TEXCOORD;
};

float4 AmbientColor = float4(1, 0.5, 0, 1);
float4 AmbientColor2 = float4(0.5, 1, 0, 0);

float4 main(VSOutput VSOut) : SV_TARGET
{
    if (VSOut.PositionPS.x < 400)
        return AmbientColor;
    else
        return AmbientColor2;
}

