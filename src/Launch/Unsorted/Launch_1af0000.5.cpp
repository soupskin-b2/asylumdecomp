// Launch_1af0000.cpp (part 5 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01af8270
float10 sub_01af8270(double param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)-1.0) {
    return (float10)0;
  }
  if (fVar1 < (float10)0) {
    return fVar1 + (float10)1.0;
  }
  if (fVar1 < (float10)1) {
    return (float10)1 - fVar1;
  }
  return (float10)0;
}

struct Vector3Like
{
public:
    float X;
    float Y;
    float Z;

    Vector3Like * sub_01afa4d0(float InX, float InY, float InZ) /* 01afa4d0 */
    {
        X = InX;
        Y = InY;
        Z = InZ;
        return this;
    }
};

// @baa 0x01afa4d0
void sub_driver(Vector3Like * Out)
{
    Out->sub_01afa4d0(0.f, 0.f, 0.f);
}
