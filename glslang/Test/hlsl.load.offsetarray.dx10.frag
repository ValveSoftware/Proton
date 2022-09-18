SamplerState       g_sSamp : register(s0);

uniform Texture1D <float4> g_tTex1df4 : register(t0);
Texture1D <int4>   g_tTex1di4;
Texture1D <uint4>  g_tTex1du4;

Texture2D <float4> g_tTex2df4;
Texture2D <int4>   g_tTex2di4;
Texture2D <uint4>  g_tTex2du4;

Texture3D <float4> g_tTex3df4;
Texture3D <int4>   g_tTex3di4;
Texture3D <uint4>  g_tTex3du4;

TextureCube <float4> g_tTexcdf4;
TextureCube <int4>   g_tTexcdi4;
TextureCube <uint4>  g_tTexcdu4;

Texture1DArray <float4> g_tTex1df4a;
Texture1DArray <int4>   g_tTex1di4a;
Texture1DArray <uint4>  g_tTex1du4a;

Texture2DArray <float4> g_tTex2df4a;
Texture2DArray <int4>   g_tTex2di4a;
Texture2DArray <uint4>  g_tTex2du4a;

TextureCubeArray <float4> g_tTexcdf4a;
TextureCubeArray <int4>   g_tTexcdi4a;
TextureCubeArray <uint4>  g_tTexcdu4a;

struct PS_OUTPUT
{
    float4 Color : SV_Target0;
    float  Depth : SV_Depth;
};

uniform int   c1;
uniform int2  c2;
uniform int3  c3;
uniform int4  c4;

int getOffset1()
{
   return 1;
}

int2 getOffset2()
{
   return int2(1, 1);
}

PS_OUTPUT main()
{
   PS_OUTPUT psout;

   // 1DArray
   g_tTex1df4a.Load(c3, getOffset1());
   g_tTex1di4a.Load(c3, getOffset1());
   g_tTex1du4a.Load(c3, getOffset1());

   // 2DArray
   g_tTex2df4a.Load(c4, getOffset2());
   g_tTex2di4a.Load(c4, getOffset2());
   g_tTex2du4a.Load(c4, getOffset2());

   // TODO:
   // Load, SampleIndex
   // Load, SampleIndex, Offset

   psout.Color = 1.0;
   psout.Depth = 1.0;

   return psout;
}
