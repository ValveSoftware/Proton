float4 f0(float4 input) {
    if (all(input == input))
        return input;
    else
        return -input;
}

float4 f1(float4 input) {
    if (all(input == input)) {
        return input;
    } else {
        return -input;
    }
}

float4 PixelShaderFunction(float4 input) : COLOR0
{
    if (all(input == input))
        return input;

    f0(input);

    if (all(input == input))
        ;

    if (all(input == input))
        ;
    else
        ;

    [flatten] if (all(input == input)) {
        return input;
    }

    f1(input);

	int ii;
	if (float ii = input.z)
	    ++ii;
	++ii;
    if (float(ii) == 1.0)
        ++ii;
}
