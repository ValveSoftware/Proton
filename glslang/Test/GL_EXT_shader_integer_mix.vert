#version 330
#extension GL_EXT_shader_integer_mix: require


#if !defined GL_EXT_shader_integer_mix
#  error GL_EXT_shader_integer_mix is not defined
#elif GL_EXT_shader_integer_mix != 1
#  error GL_EXT_shader_integer_mix is not equal to 1
#endif

void main(void) { 
    gl_Position = vec4(0); 
}
