#version 460

#ifdef GL_EXT_subgroup_uniform_control_flow

#extension GL_EXT_subgroup_uniform_control_flow : enable

[[random(4)]] void main() [[subgroup_uniform_control_flow]]
{
}

#endif
