#version 310 es

precision mediump float;

void fooConst(const in float f, const in highp float g) { }

void foo(in float f, in highp float g) { }

      float retM (      float x) { return x; }
highp float retH (highp float x) { return x; }
      float retHM(highp float x) { return x; }
highp float retMH(      float x) { return x; }

void main()
{
    float aM, bM;
    highp float aH, bH;
    fooConst(aM, bM);   // must copy bM
    fooConst(aH, bH);   // must copy aH
    foo(aM, bM);
    foo(aH, bH);

    retM(aM);
    retH(aH);
    retHM(aH);
    retMH(aM);
}
