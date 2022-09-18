SamplerState       g_sSamp : register(s0);

[[spv::format_rgba32f]]    RWTexture1D <float4> g_tTex1df4 : register(t0);
[[spv::format_rg32f]]      RWTexture1D <int4>   g_tTex1di4;
[[spv::format_rgba8snorm]] RWTexture1D <uint4>  g_tTex1du4;

[[spv::format_rgba8i]]       RWTexture2D <float4> g_tTex2df4;
[[spv::format_r11fg11fb10f]] RWTexture2D <int4>   g_tTex2di4;
[[spv::format_r8snorm]]      RWTexture2D <uint4>  g_tTex2du4;

[[spv::format_rg8]] [[spv::nonwritable]]     RWTexture3D <float4> g_tTex3df4;
[[spv::format_rgba16i]] [[spv::nonreadable]] RWTexture3D <int4>   g_tTex3di4;
[[spv::format_r8i]] [[spv::nonwritable]] [[spv::nonreadable]] RWTexture3D <uint4>  g_tTex3du4;

[[spv::format_rgba8ui]] RWTexture1DArray <float4> g_tTex1df4a;
[[spv::format_rg32ui]]  RWTexture1DArray <int4>   g_tTex1di4a;
[[spv::format_r16ui]]   RWTexture1DArray <uint4>  g_tTex1du4a;

[[spv::format_rgb10a2ui]] RWTexture2DArray <float4> g_tTex2df4a;
[[spv::format_r8ui]]      RWTexture2DArray <int4>   g_tTex2di4a;
[[spv::format_rgba16f]]   RWTexture2DArray <uint4>  g_tTex2du4a;

[[spv::format_rgba8         ]] RWTexture2DArray<int4> g_tTex01;
[[spv::format_rg16f         ]] RWTexture2DArray<int4> g_tTex02;
[[spv::format_r16f          ]] RWTexture2DArray<int4> g_tTex03;
[[spv::format_rgb10a2       ]] RWTexture2DArray<int4> g_tTex04;
[[spv::format_rg16          ]] RWTexture2DArray<int4> g_tTex05;
[[spv::format_r32f          ]] RWTexture2DArray<int4> g_tTex06;
[[spv::format_rgba16        ]] RWTexture2DArray<int4> g_tTex07;
[[spv::format_r16           ]] RWTexture2DArray<int4> g_tTex08;
[[spv::format_r8            ]] RWTexture2DArray<int4> g_tTex09;
[[spv::format_rgba16snorm   ]] RWTexture2DArray<int4> g_tTex10;
[[spv::format_rg16snorm     ]] RWTexture2DArray<int4> g_tTex11;
[[spv::format_r16snorm      ]] RWTexture2DArray<int4> g_tTex12;
[[spv::format_r8snorm       ]] RWTexture2DArray<int4> g_tTex13;
[[spv::format_rgba32i       ]] RWTexture2DArray<int4> g_tTex14;
[[spv::format_r32i          ]] RWTexture2DArray<int4> g_tTex15;
[[spv::format_r32ui         ]] RWTexture2DArray<int4> g_tTex16;
[[spv::format_rg16i         ]] RWTexture2DArray<int4> g_tTex17;
[[spv::format_r16i          ]] RWTexture2DArray<int4> g_tTex18;
[[spv::format_rg32i         ]] RWTexture2DArray<int4> g_tTex19;
[[spv::format_rg8i          ]] RWTexture2DArray<int4> g_tTex20;
[[spv::format_rg8ui         ]] RWTexture2DArray<int4> g_tTex21;
[[spv::format_rgba32ui      ]] RWTexture2DArray<int4> g_tTex22;
[[spv::format_rgba16ui      ]] RWTexture2DArray<int4> g_tTex23;
[[spv::format_rg32ui        ]] RWTexture2DArray<int4> g_tTex24;
[[spv::format_rg16ui        ]] RWTexture2DArray<int4> g_tTex25;

struct PS_OUTPUT
{
    float4 Color : SV_Target0;
    float  Depth : SV_Depth;
};

PS_OUTPUT main()
{
   PS_OUTPUT psout;

   psout.Color = 1.0;
   psout.Depth = 1.0;

   return psout;
}
