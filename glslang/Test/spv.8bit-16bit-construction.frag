#version 450 core

#extension GL_EXT_shader_8bit_storage : enable
#extension GL_EXT_shader_16bit_storage : enable

buffer B
{
    int8_t i8_from_i16;
    int16_t i16_from_i8;
    uint8_t u8_from_u16;
    uint16_t u16_from_u8;
    float16_t f16_from_i8;
};

void main()
{
    i8_from_i16 = int8_t(int16_t(1));
    i16_from_i8 = int16_t(int8_t(1));
    u8_from_u16 = uint8_t(uint16_t(1));
    u16_from_u8 = uint16_t(uint8_t(1));
    f16_from_i8 = float16_t(int8_t(1));
}
