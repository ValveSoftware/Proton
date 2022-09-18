[[vk::constant_id(0)]] const uint index = 2;

static const uint array[] = { 10, 20, 30, 40 };

float4 main( ) : SV_TARGET
{
    float4 r;
    for(uint i = 0; i < array[index]; i++)
        r = i;

    r += index + index;
    r += 2 * index;

    return r;
}
