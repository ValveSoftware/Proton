#version 460

void fn(){
    uvec3 wgs = gl_WorkGroupSize; // error: fixed workgroup size has not been declared
}

layout(local_size_x = 64) in; // declare workgroup size

void main(){
    fn();
    uvec3 wgs = gl_WorkGroupSize; // valid
}
