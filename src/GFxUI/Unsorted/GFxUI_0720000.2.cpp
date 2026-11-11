// GFxUI_0720000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UTexture2D {
    float10 GetSurfaceHeight();
};

// @baa 0x0072ef10
float10 UTexture2D::GetSurfaceHeight(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xc0);
}
