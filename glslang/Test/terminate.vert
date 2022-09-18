#version 400

void foo() { terminateInvocation; } // ERROR: identifier undeclared

#extension GL_EXT_terminate_invocation : enable

void main()
{
    terminateInvocation;  // ERROR: wrong stage
}
