#pragma pack_matrix(row_major)

float4x4 g_GlobalMat1;

float4 main() : SV_Target0
{
    return g_GlobalMat1[0];
}
