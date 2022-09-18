#version 330

struct S
{
	float a;
};

float func(S s)
{
	return s.a;
}

layout(location = 0) out vec4 o_color;

void main()
{
	float c = func(1.0f); // ERROR: no matching function
	o_color = vec4(c);
}
