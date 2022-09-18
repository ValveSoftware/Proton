void f0() {
    for (;;) ;
}

void f1(float4 input) {
    for (++input; ; ) ;
}

void f2(float4 input) {
    [unroll] for (; any(input != input); ) {}
}

float f3(float4 input) {
    for (; any(input != input); ) { return -input; }
}

float f4(float4 input) {
    for (--input; any(input != input); input += 2) { return -input; }
}

void f5(float4 input) {
    for (;;) if (input.x > 2.0) break;
}

void f6(float4 input) {
    for (;;) if (input.x > 2.0) continue;
}

void f99() {
    for (int first = 0, second = 1; ;) first + second;
}

void f100(float ii) {
    for (--ii, --ii, --ii;;) ii;
}

float4 PixelShaderFunction(float4 input) : COLOR0
{
    f0();
    f1(input);
    f2(input);
    f3(input);
    f4(input);
    f5(input);
    f6(input);

    float ii;
    for (int ii = -1; ii < 3; ++ii) if (ii == 2) continue;
    --ii;

    f99();

    for ( int i = 0, count = int(ii); i < count; i++ );
    for (float first = 0, second[2], third; first < second[0]; ++second[1]) first + second[1] + third;

    f100(ii);

    return input;
}
