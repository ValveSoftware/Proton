struct ps_in
{
    float4 position : SV_POSITION;
    float4 colour : COLOR;
};

struct ps_in vs_main(float4 position : POSITION, float4 colour : COLOR)
{
    struct ps_in o;

    o.position = position;
    o.colour = colour;

    return o;
}

float4 ps_main(struct ps_in i) : SV_TARGET
{
    return i.colour;
}
