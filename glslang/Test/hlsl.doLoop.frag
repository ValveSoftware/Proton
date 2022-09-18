void f0() {
    [unroll] do {} while (false);
}

void f1() {
    [unroll] do {;} while (false);
}

float f2(float input) {
    do { return (float4)input; } while (input > 2.0);
}

void f3(float input) {
    do ++input; while (input < 10.0);
}

void f4(float input) {
    do while (++input < 10.0); while (++input < 10.0); // nest while inside do-while
}

float4 PixelShaderFunction(float input) : COLOR0
{
    f0();
    f1();
    f2(input);
    f3(input);
    f4(input);
    return (float4)input;
}
