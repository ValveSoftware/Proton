cbuffer gear_block : register(b0)
{
    float4x4 mvp_matrix;
    float3x3 normal_matrix;
};

struct vs_in
{
    float4 position : POSITION;
    float3 normal : NORMAL;
    float3 diffuse : DIFFUSE;
    float4 transform : TRANSFORM;
};

struct vs_out
{
    float4 position : SV_POSITION;
    float4 colour : COLOR;
};

struct vs_out vs_main(struct vs_in i)
{
    const float3 l_pos = float3(5.0, 5.0, 10.0);
    float3 dir, normal;
    float4 position;
    struct vs_out o;
    float att;

    position.x = i.transform.x * i.position.x - i.transform.y * i.position.y + i.transform.z;
    position.y = i.transform.x * i.position.y + i.transform.y * i.position.x + i.transform.w;
    position.zw = i.position.zw;

    o.position = mul(mvp_matrix, position);
    dir = normalize(l_pos - o.position.xyz / o.position.w);

    normal.x = i.transform.x * i.normal.x - i.transform.y * i.normal.y;
    normal.y = i.transform.x * i.normal.y + i.transform.y * i.normal.x;
    normal.z = i.normal.z;
    att = 0.2 + dot(dir, normalize(mul(normal_matrix, normal)));

    o.colour.xyz = i.diffuse.xyz * att;
    o.colour.w = 1.0;

    return o;
}

float4 ps_main_smooth(float4 position : SV_POSITION, float4 colour : COLOR) : SV_TARGET
{
    return colour;
}

float4 ps_main_flat(float4 position : SV_POSITION, nointerpolation float4 colour : COLOR) : SV_TARGET
{
    return colour;
}
