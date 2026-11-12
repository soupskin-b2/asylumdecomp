// TextureCube.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// Engine_0760000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct UTextureCube {
    float10 GetSurfaceHeight();
};

// @baa 0x00760fc0
float10 UTextureCube::GetSurfaceHeight(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}
