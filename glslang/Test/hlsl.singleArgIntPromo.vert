float main(): SV_Target0
{
    int d = 4;
    int2 d2 = int2(5,d);
    float  f1 = log2(5);
    float2 f2 = log(d2);
    float3 f3 = log(int3(7,2,3));
    float2 f22 = log(int2(5,d));  // This case does not work yet, due to a different bug that turns this into 2 args.

    int a = 5;
    min16float b = min16float(f16tof32(a));
    b *= b;
    uint c = f32tof16(b);

    return f1 + f2.x + f3.z + f22.y + c;
}